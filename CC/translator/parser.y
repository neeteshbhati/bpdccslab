%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
  int var_count = -1;
  char label_buffer[30][30];
  char declaration_buffer[30][30];
  char assign_buffer[30];
  char function_buffer [30][90];
  char logical_buffer[30];
  char compound_buffer[90];
  char numToStr [30];
  char strWithoutQuote [30];
  int label_count = -1;
  int function_count = -1;
  int declaration_count = -1;
  FILE *filePointer;

  struct symbol_table {
    char var_name [30];
    int type;
    int isArray;
  }var_list[20];

	void insert_to_table (char var[30], int type, int isArray);
  int isArray (char var[30]);
  int getType (char var[30]);
  void tostring(char str[], int num);
  void removeQuotes(char str[]);
%}

%union{
  int number;
	int data_type;
	char var_name[30];
  char text[30];
}

%token PROC MAIN VAR ARRAY OF READ WRITE GOTO
%token PLUS MINUS MUL DIV MOD
%token LB RB LSB RSB
%token COLN SC COMA EQ
%token AND OR NOT LT GT LTE GTE LEQ NEQ
%token IF THEN ELSE ELSEIF ENDIF WHILE DO ENDWHILE REPEAT UNTIL FOR TO ENDFOR

%token<data_type>INT
%token<data_type>CHAR
%token<data_type>FLOAT
%token<data_type>DOUBLE
%token<var_name>VARIABLE
%token<number>NUM
%token<text>LITERAL
%token<text>LABEL

%type<data_type>DATA_TYPE
%type<text>PRINT_ITEM

%start PROGRAM

%%

PROGRAM : PROC MAIN LB RB LABEL_BLOCK_LIST
          {
            if(strcmp(label_buffer[0],"Begin:") != 0 || strcmp(label_buffer[label_count],"End:") != 0)
            {
              yyerror("syntax error");
            }
          }
     
LABEL_BLOCK_LIST : LABEL_BLOCK LABEL_BLOCK_LIST
                 | LABEL_BLOCK

LABEL_BLOCK : LABEL_HEAD BODY
            | LABEL_HEAD

LABEL_HEAD : LABEL
             {
               label_count++;
               strcpy(label_buffer[label_count],$1);

               if(strcmp($1,"Begin:") != 0 && strcmp($1,"End:") != 0)
               {
                 fprintf(filePointer,"%s\n",$1);
               }                
             }

BODY : STATEMENT BODY
     | STATEMENT

STATEMENT : DECLARATION_STATEMENT
          | ASSIGNMENT_STATEMENT
          | CONDITIONAL_STATEMENT
          | ITERATIVE_STATEMENT
          | FUNCTION_STATEMENT
          | JUMP_STATEMENT

DECLARATION_STATEMENT : VAR VARIABLE_LIST COLN DATA_TYPE SC
                        {
                          switch($4)
                          {
                            case 1: fprintf(filePointer,"int "); break;
                            case 2: fprintf(filePointer,"char "); break;
                            case 3: fprintf(filePointer,"float "); break;
                            case 4: fprintf(filePointer,"double "); break;
                          }

                          for (int i=declaration_count; i >= 0; i--)
                          {
                            if (i == declaration_count)
                            {
                              fprintf(filePointer,"%s",declaration_buffer[i]);
                              insert_to_table(declaration_buffer[i],$4,0);
                            }
                            else
                            {
                              fprintf(filePointer,", %s",declaration_buffer[i]);
                              insert_to_table(declaration_buffer[i],$4,0);
                            }
                          }

                          fprintf(filePointer,";\n");                          
                          
                          for (int i=declaration_count; i >= 0; i--)
                          {
                            strcpy(declaration_buffer[i],"\0");
                          }
                          
                          declaration_count = -1;
                          
                        }
                      | VAR VARIABLE_LIST COLN ARRAY LSB NUM RSB LSB NUM RSB OF DATA_TYPE SC
                        { 
                          if(declaration_count > 0)
                            yyerror("syntax error\n");

                          insert_to_table(declaration_buffer[declaration_count],$12,1);

                          switch($12)
                          {
                            case 1: fprintf(filePointer,"int %s [%d][%d];\n",declaration_buffer[declaration_count],$6,$9); break;
                            case 2: fprintf(filePointer,"char %s [%d][%d];\n",declaration_buffer[declaration_count],$6,$9); break;
                            case 3: fprintf(filePointer,"float %s [%d][%d];\n",declaration_buffer[declaration_count],$6,$9); break;
                            case 4: fprintf(filePointer,"double %s [%d][%d];\n",declaration_buffer[declaration_count],$6,$9); break;
                          }

                          for (int i=declaration_count; i >= 0; i--)
                          {
                            strcpy(declaration_buffer[i],"\0");
                          }
                          
                          declaration_count = -1;
                        }

VARIABLE_LIST : VARIABLE COMA VARIABLE_LIST 
                {
                  declaration_count++;
                  strcpy(declaration_buffer[declaration_count],$1);
                }
              | VARIABLE
                {
                  declaration_count++;
                  strcpy(declaration_buffer[declaration_count],$1);                  
                }

DATA_TYPE : INT 
            {
			        $$=$1;
		        } 
          | CHAR
            {
              $$=$1;
            }
          | FLOAT
            {
              $$=$1;
            }
          | DOUBLE
            {
              $$=$1;
            }

ASSIGNMENT_STATEMENT : VARIABLE LSB NUM RSB LSB NUM RSB COLN EQ A_EXPN_LIST SC
                       {
                         if (getType($1) == 0)
                         {
                           yyerror("variable undeclared\n");
                         }
                         if (isArray($1) == 0)
                         {
                           yyerror("variable is not array type\n");
                         }                         
                         fprintf(filePointer,"%s[%d][%d] = %s",$1,$3,$6,assign_buffer);
                         fprintf(filePointer,";\n");
                         strcpy(assign_buffer,"\0");
                       }
                     | VARIABLE COLN EQ A_EXPN_LIST SC
                       {
                         
                         if (getType($1) == 0)
                         {
                           yyerror("variable undeclared\n");
                         }
                         if (isArray($1) == 1)
                         {
                           yyerror("array reference without index\n");
                         }
                         fprintf(filePointer,"%s = %s",$1,assign_buffer);
                         fprintf(filePointer,";\n");
                         strcpy(assign_buffer,"\0");
                       }

A_EXPN_LIST : A_EXPN OP A_EXPN_LIST
            | A_EXPN

A_EXPN : VARIABLE LSB NUM RSB LSB NUM RSB
         {
           if (getType($1) == 0)
           {
             yyerror("variable undeclared\n");
           }
           if (isArray($1) == 0)
           {
             yyerror("variable is not array type\n");
           }
           char temp [100];
           sprintf(temp,"%s[%d][%d] ",$1,$3,$6);
           strcat(assign_buffer,temp);
         }
       | VARIABLE
         {
           if (getType($1) == 0)
           {
             yyerror("variable undeclared\n");
           }
           if (isArray($1) == 1)
           {
             yyerror("array reference without index\n");
           }
           strcat(assign_buffer,$1);
           strcat(assign_buffer," ");
         }
       | NUM
         {
           tostring(numToStr,$1);
           strcat(assign_buffer,numToStr);
           strcat(assign_buffer," ");
         }

OP : PLUS
     {
       strcat(assign_buffer,"+ ");
     }
   | MINUS
     {
       strcat(assign_buffer,"- ");
     }
   | MUL
     {
       strcat(assign_buffer,"* ");
     }
   | DIV
     {
       strcat(assign_buffer,"/ ");
     }
   | MOD
     {
       strcat(assign_buffer,"%% ");
     }

CONDITIONAL_STATEMENT : IF_COND LB CLOG_EXPN RB THEN_COND BODY ELSEIF_LIST

ELSEIF_LIST : ELSEIF_COND LB CLOG_EXPN RB THEN_COND BODY ELSEIF_LIST
            | ELSE_COND BODY ENDIF
              {
                fprintf(filePointer,"}\n");
              }
            | ENDIF
              {
                fprintf(filePointer,"}\n");
              }

IF_COND : IF
          {
            fprintf(filePointer,"if ");
          }

THEN_COND : THEN
            {
              fprintf(filePointer,"\n");
              fprintf(filePointer,"{\n");
            }

ELSE_COND : ELSE 
            {
              fprintf(filePointer,"}\n");
              fprintf(filePointer,"else\n");
              fprintf(filePointer,"{\n");
            }

ELSEIF_COND : ELSEIF
              {
                fprintf(filePointer,"}\n");
                fprintf(filePointer,"else if ");
              }

CLOG_EXPN : SLOG_EXPN BCMP SLOG_EXPN
            {
              strcat(compound_buffer,logical_buffer);
              fprintf(filePointer,"(%s)",compound_buffer);
              //fprintf(filePointer,"{\n");
              strcpy(logical_buffer,"\0");
            }
          | SLOG_EXPN
            {
              fprintf(filePointer,"(%s)",logical_buffer);
              //fprintf(filePointer,"{\n");
              strcpy(logical_buffer,"\0");
            }

BCMP : AND
       {
         strcat(logical_buffer," && ");
         strcpy(compound_buffer,logical_buffer);
         strcpy(logical_buffer,"\0");
       }
     | OR
       {
         strcat(logical_buffer," || ");
         strcpy(compound_buffer,logical_buffer);
         strcpy(logical_buffer,"\0");
       }

SLOG_EXPN	: NOT LB SLOG_EXPN RB
            {
              char temp[50];
              strcpy(temp,logical_buffer);
              strcpy(logical_buffer,"\0");
              strcat(logical_buffer,"!");
              strcat(logical_buffer,"(");
              strcat(logical_buffer,temp);
              strcat(logical_buffer,")");
            } 
          | VARIABLE BLOG VARIABLE
            {
              if (getType($1) == 0 || getType($3) == 0)
              {
                yyerror("variable undeclared\n");
              }

              char temp [50];
              strcpy(temp,logical_buffer);
              strcpy(logical_buffer,"\0");
              strcat(logical_buffer,$1);
              strcat(logical_buffer," ");
              strcat(logical_buffer,temp);
              strcat(logical_buffer,$3);
            }
          | VARIABLE BLOG NUM
            {
              if (getType($1) == 0)
              {
                yyerror("variable undeclared\n");
              }
              
              char temp [50];
              strcpy(temp,logical_buffer);
              strcpy(logical_buffer,"\0");
              strcat(logical_buffer,$1);
              strcat(logical_buffer," ");
              strcat(logical_buffer,temp);
              tostring(numToStr,$3);
              strcat(logical_buffer,numToStr);
            }

BLOG : GTE
       {
         strcat(logical_buffer,">= ");
       }
     | LTE
       {
         strcat(logical_buffer,"<= ");
       }
     | GT
       {
         strcat(logical_buffer,"> ");
       }
     | LT
       {
         strcat(logical_buffer,"< ");
       }
     | NEQ
       {
         strcat(logical_buffer,"!= ");
       }
     | LEQ
       {
         strcat(logical_buffer,"== ");
       }

ITERATIVE_STATEMENT : WHILE_COND LB CLOG_EXPN RB DO_COND BODY ENDWHILE_COND
                    | REPEAT_COND BODY UNTIL_COND LB CLOG_EXPN RB
                      {
                        fprintf(filePointer,";\n");
                      }
                    | FOR_HEADER FOR_BODY
                    
WHILE_COND : WHILE
             {
               fprintf(filePointer,"while ");
             }

DO_COND : DO
          {
            fprintf(filePointer,"\n");
            fprintf(filePointer,"{\n");
          }

ENDWHILE_COND : ENDWHILE
                {
                  fprintf(filePointer,"}\n");
                }
      
REPEAT_COND : REPEAT
              {
                fprintf(filePointer,"Do\n");
                fprintf(filePointer,"{\n");
              }

UNTIL_COND : UNTIL
             {
               fprintf(filePointer,"}\n");
               fprintf(filePointer,"while ");
             }

FOR_HEADER : FOR LB VARIABLE LT MINUS NUM TO NUM RB
            {
              if (getType($3) == 0)
              {
                yyerror("variable undeclared\n");
              }

              fprintf(filePointer,"for (%s = %d; %s <= %d; %s++;)",$3,$6,$3,$8,$3);
            }

FOR_BODY : DO_COND BODY ENDFOR_COND

ENDFOR_COND : ENDFOR
              {
                fprintf(filePointer,"}\n");
              }

FUNCTION_STATEMENT : READ LB VARIABLE_LIST RB SC
                     {
                       fprintf(filePointer,"scanf(\"");

                       int temp = declaration_count;
                       
                       for (int i=temp; i >= 0; i--)
                       {
                         if (i == temp)
                         {
                           switch(getType(declaration_buffer[i]))
                           {
                             case 0 : yyerror("variable undeclared\n"); break;
                             case 1 : fprintf(filePointer,"%%d"); break;
                             case 2 : fprintf(filePointer,"%%c"); break;
                             case 3 : fprintf(filePointer,"%%f"); break;
                             case 4 : fprintf(filePointer,"%%lf"); break;
                           }
                         }
                         else
                         {                           
                           switch(getType(declaration_buffer[i]))
                           {
                             case 0 : yyerror("variable undeclared\n"); break;
                             case 1 : fprintf(filePointer," %%d"); break;
                             case 2 : fprintf(filePointer," %%c"); break;
                             case 3 : fprintf(filePointer," %%f"); break;
                             case 4 : fprintf(filePointer," %%lf"); break;
                           }
                         }                        
                       }

                       fprintf(filePointer,"\",");
                       temp = declaration_count;

                       for (int i=temp; i >= 0; i--)
                       {
                         if (i == temp)
                         {
                           fprintf(filePointer,"&%s",declaration_buffer[i]);
                         }
                         else
                         {
                           fprintf(filePointer,", &%s",declaration_buffer[i]);
                         }
                       }

                       fprintf(filePointer,");\n");

                       for (int i=declaration_count; i >= 0; i--)
                       {
                         strcpy(declaration_buffer[i],"\0");
                       }
                      
                       declaration_count = -1;
                     }
                   | WRITE LB PRINT_LIST RB SC
                     {
                       fprintf(filePointer,"printf(\"");
                       int temp = function_count;

                       int counter = 0;

                       for (int i=temp; i >= 0; i--)
                       {
                         switch(getType(function_buffer[i]))
                         {
                           case 0 : fprintf(filePointer,"%s ",function_buffer[i]); break;
                           case 1 : fprintf(filePointer,"%%d "); counter++; break;
                           case 2 : fprintf(filePointer,"%%c "); counter++; break;
                           case 3 : fprintf(filePointer,"%%f "); counter++; break;
                           case 4 : fprintf(filePointer,"%%lf "); counter++; break;
                         }
                       }

                       if (counter == 0)
                       {
                         fprintf(filePointer,"\");\n");
                       }
                       else
                       {
                          fprintf(filePointer,"\"");
                          temp = function_count;
                          for (int i=temp; i>=0; i--)
                          {
                            if(getType(function_buffer[i]) != 0)
                            {
                              fprintf(filePointer,", %s",function_buffer[i]);
                            }
                          }
                          fprintf(filePointer,");\n");
                       }
                       
                       for (int i=function_count; i >= 0; i--)
                       {
                         strcpy(function_buffer[i],"\0");
                       }
                       
                       function_count = -1;
                     }

PRINT_LIST : PRINT_ITEM COMA PRINT_LIST
             {
               function_count++;
               strcpy(function_buffer[function_count],$1);
             }
           | PRINT_ITEM
             {
               function_count++;
               strcpy(function_buffer[function_count],$1);
             }

PRINT_ITEM : LITERAL
             {
               removeQuotes($1);
               strcpy($$,strWithoutQuote);
             }
           | VARIABLE
             {
               if (getType($1) == 0)
               {
                 yyerror("variable undeclared\n");
               }
               strcpy($$,$1);
             }

JUMP_STATEMENT : GOTO VARIABLE SC
                {
                  fprintf(filePointer,"goto %s;\n",$2);

                  for (int i=declaration_count; i >= 0; i--)
                  {
                    strcpy(declaration_buffer[i],"\0");
                  }
                  
                  declaration_count = -1;
                }

%%

void insert_to_table (char var[30], int type, int isArray)
{
  var_count++;
  strcpy(var_list[var_count].var_name,var);
  var_list[var_count].type = type;
  var_list[var_count].isArray = isArray;
}

int getType (char var[30])
{
  for (int i=0; i <= var_count; i++)
  {
    if (strcmp(var_list[i].var_name,var) == 0)
      return var_list[i].type;
  }

  return 0;
}

int isArray (char var[30])
{
  for (int i=0; i<=var_count; i++)
  {
    if(strcmp(var_list[i].var_name,var) == 0)
    {
      return var_list[i].isArray;
    }
  }
  
  return 0;
}

void tostring(char str [], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

void removeQuotes(char str[]) { 

	int c = '"';
	int j, n = strlen(str); 
	for (int i=j=0; i<n; i++) 
	if (str[i] != c) 
		str[j++] = str[i]; 
	
	str[j] = '\0';

  for(int k=0;k<=j;k++)
	    strWithoutQuote[k]=str[k];
} 

int main() 
{
    filePointer = fopen("output.c", "w+");
    fprintf(filePointer,"#include <stdio.h>\nint main()\n{\n");

    yyparse();

    if (success)
    {
      fprintf(filePointer,"}\n");
      fclose(filePointer);
      printf("Translation Successful\n");
    }
     
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
  fclose(filePointer);  
	exit(0);
}

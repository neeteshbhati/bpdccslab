%option yylineno

%{
  #include<stdio.h>
  #include<string.h>
  #include"y.tab.h"
%}

%%

"Procedure" {return PROC;}
"Main" {return MAIN;}
"Var" {return VAR;}
"Array" {return ARRAY;}
"Of" {return OF;}
"Read" {return READ;}
"Write" {return WRITE;}
"Goto" {return GOTO;}

"int" {yylval.data_type = 1; return INT;}
"char" {yylval.data_type = 2; return CHAR;}
"float" {yylval.data_type = 3; return FLOAT;}
"double" {yylval.data_type = 4; return DOUBLE;}

"<"	{return LT;}
">"	{return GT;}
"<=" {return LTE;}
">=" {return GTE;}
"!=" {return NEQ;}
"==" {return LEQ;}

"And" {return AND;}
"Or" {return OR;}
"Not" {return NOT;}

"If" {return IF;}
"Then" {return THEN;}
"Else" {return ELSE;}
"ElseIf" {return ELSEIF;}
"EndIf" {return ENDIF;}
"While" {return WHILE;}
"Do" {return DO;}
"EndWhile" {return ENDWHILE;}
"Repeat" {return REPEAT;}
"Until" {return UNTIL;}
"For" {return FOR;}
"To" {return TO;}
"EndFor" {return ENDFOR;}

"("	{return LB;}
")"	{return RB;}
":"	{return COLN;}
";" {return SC;}
"[" {return LSB;}
"]" {return RSB;}
","	{return COMA;}
"=" {return EQ;}

"+" {return PLUS;}
"-" {return MINUS;}
"%" {return MOD;}
"*" {return MUL;}
"/" {return DIV;}

[A-Z][a-z]+: {strcpy(yylval.text,yytext); return LABEL;}
\"[a-zA-Z ]+\" {strcpy(yylval.text,yytext); return LITERAL;}
[0-9]* {yylval.number = atoi(yytext); return NUM;}
[a-zA-Z]+ {strcpy(yylval.var_name,yytext); return VARIABLE;}

[\n\t ]+ {/*new line or space*/}

. {printf("Error - no lexical rule matched for %s\n",yytext); exit(0);}

%%

int yywrap(void)
{
    return 1;
}
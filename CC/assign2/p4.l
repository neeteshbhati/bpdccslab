%{ 
int line_number = 1;
%}
line .*\n
%%
{line} { printf("%10d %s", line_number++, yytext); } 
%%
int yywrap(){
 return 1;
}
  
int main(int argc, char*argv[]) { extern FILE *yyin;
  
yyin = fopen("input.c","r");
  
yylex();
  
return 0;
}

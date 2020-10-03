%option yylineno

%{
  #include<stdio.h>
  #include<string.h>
  #include"y.tab.h"
%}

%%

[a-zA-Z]+[0-9]* {strcpy(yylval.var_name,yytext);return VAR;}
[0-9]* {return NUM;}
[\n\t ]+ {/*new line or space*/}

. {printf("invalid character sequence %s\n",yytext); exit(0);}

%%


int yywrap(void)
{
    return 1;
}
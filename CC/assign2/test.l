%{
#include<stdio.h>
%}
%%
[0-9]{4} { printf("Year is %s\n", yytext); }
[A-Z][0-9] {printf("Stream is %s\n", yytext);}
[A-Z]{2} {printf("PS/TS Option is %s\n", yytext);}
0[0-9]{3} {printf("ID No is %s\n", yytext);}
%%
int yywrap ()
{
return 1;
}
main(int argc, char **argv)
{
        yylex();
}


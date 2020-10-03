%{
#include<stdio.h>
%}
%% \/\/(.*) {/*Single line comment*/};
\/\*(.*\n)*.*\*\/ {/*Regular expression for multi line comment*/}; 
%%
int yywrap() { 
return 1;
}
int main() { yyin=fopen("input.c","r"); 
yyout=fopen("out.c","w");
yylex(); 
return 0;
}

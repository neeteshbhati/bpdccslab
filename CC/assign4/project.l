%option yylineno

%{
	#include<stdio.h>
	#include<string.h>
	#include"y.tab.h"
	#include<math.h>
	extern int var_count;

%}

%%
"#include<stdio.h>" {return HEADER;}
"int"	{yylval.data_type=0;return INT;}
"char" {yylval.data_type=1; return CHAR;}
"float" {yylval.data_type=2; return FLOAT;}
"double" {yylval.data_type=3; return DOUBLE;}
"main" {return MAIN;}
"("	{return LB;}
")"	{return RB;}
"{"	{return LCB;}
"}"	{return RCB;}
","	{return COMA;}
";"	{return SC;}
"<"	{return LT;}
">"	{return GT;}
"<="	{return LTE;}
">="	{return GTE;}
"!="	{return NEQ;}
"=="	{return LEQ;}
"!"	{return NOT;}
"&&"	{return LAND;}
"||"	{return LOR;}
"++"    {return UPLUS;}
"--"    {return UMINUS;}
"if"	{return IF;}
"else"	{return ELSE;}
[\^]    {return EXP;}
[+] {return PLUS;}
[-] {return MINUS;}
[%] {return MOD;}
[*] {return MUL;}
[/] {return DIV;}
"="	{return EQ;}
([a-zA-Z]+[a-zA-Z0-9]*)  {strcpy(yylval.var_name,yytext);return VAR;}
[\n\t ]+  {/*new line or space*/}
. {printf("invalid character sequence %s\n",yytext); exit(0);}
%%


int yywrap(void)
{
    return 1;
}

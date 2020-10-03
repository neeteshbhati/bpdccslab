%option yylineno

%{
	#include<stdio.h>
	#include<string.h>
	#include"y.tab.h"
	#include<math.h>
	extern int var_count;
%}

%%

"#include<stdio.h>"		{ return HEADER; }
"int"					{ yylval.data_type=0;return INT; }
"char" 					{ yylval.data_type=1; return CHAR; }
"float"					{ yylval.data_type=2; return FLOAT; }
"double"				{ yylval.data_type=3; return DOUBLE; }
"if" 					{ printf("Error: Reserved Keyword \"%s\"\n",yytext); exit(0);}
"while"					{ printf("Error: Reserved Keyword \"%s\"\n",yytext); exit(0);}
"do" 					{ printf("Error: Reserved Keyword \"%s\"\n",yytext); exit(0);}
"for" 					{ printf("Error: Reserved Keyword \"%s\"\n",yytext); exit(0);}
"main"					{ return MAIN; }
"("						{ return LB; }
")"						{ return RB; }
"{"						{ return LCB; }
"}"						{ return RCB; }
","						{ return COMA; }
";"						{ return SC; }
[\+\-\*\/] 				{ return OP; }
"="						{ return EQ; }
([a-zA-Z]+[a-zA-Z0-9]*)	{ strcpy(yylval.var_name,yytext); return VAR; }
[\n\t ]+  				{ /*new line or space*/}
. 						{ printf("invalid character sequence %s\n",yytext); exit(0); }

%%

int yywrap(void)
{
    return 1;
}

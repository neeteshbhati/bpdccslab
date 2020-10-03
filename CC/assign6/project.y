%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
%}

%union{

}

%token

%token<type>

%type<type>

%start PROGRAM

%%

PROGRAM	:

%%

int main() {

    yyparse();
    if(success)
      printf("Parsing Successful\n");
    return 0;

}

int yyerror(const char *msg) {

	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;

}

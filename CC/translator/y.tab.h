/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROC = 258,
    MAIN = 259,
    VAR = 260,
    ARRAY = 261,
    OF = 262,
    READ = 263,
    WRITE = 264,
    GOTO = 265,
    PLUS = 266,
    MINUS = 267,
    MUL = 268,
    DIV = 269,
    MOD = 270,
    LB = 271,
    RB = 272,
    LSB = 273,
    RSB = 274,
    COLN = 275,
    SC = 276,
    COMA = 277,
    EQ = 278,
    AND = 279,
    OR = 280,
    NOT = 281,
    LT = 282,
    GT = 283,
    LTE = 284,
    GTE = 285,
    LEQ = 286,
    NEQ = 287,
    IF = 288,
    THEN = 289,
    ELSE = 290,
    ELSEIF = 291,
    ENDIF = 292,
    WHILE = 293,
    DO = 294,
    ENDWHILE = 295,
    REPEAT = 296,
    UNTIL = 297,
    FOR = 298,
    TO = 299,
    ENDFOR = 300,
    INT = 301,
    CHAR = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VARIABLE = 305,
    NUM = 306,
    LITERAL = 307,
    LABEL = 308
  };
#endif
/* Tokens.  */
#define PROC 258
#define MAIN 259
#define VAR 260
#define ARRAY 261
#define OF 262
#define READ 263
#define WRITE 264
#define GOTO 265
#define PLUS 266
#define MINUS 267
#define MUL 268
#define DIV 269
#define MOD 270
#define LB 271
#define RB 272
#define LSB 273
#define RSB 274
#define COLN 275
#define SC 276
#define COMA 277
#define EQ 278
#define AND 279
#define OR 280
#define NOT 281
#define LT 282
#define GT 283
#define LTE 284
#define GTE 285
#define LEQ 286
#define NEQ 287
#define IF 288
#define THEN 289
#define ELSE 290
#define ELSEIF 291
#define ENDIF 292
#define WHILE 293
#define DO 294
#define ENDWHILE 295
#define REPEAT 296
#define UNTIL 297
#define FOR 298
#define TO 299
#define ENDFOR 300
#define INT 301
#define CHAR 302
#define FLOAT 303
#define DOUBLE 304
#define VARIABLE 305
#define NUM 306
#define LITERAL 307
#define LABEL 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "parser.y" /* yacc.c:1909  */

  int number;
	int data_type;
	char var_name[30];
  char text[30];

#line 167 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

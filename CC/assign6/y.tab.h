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
    HEADER = 258,
    MAIN = 259,
    VAR = 260,
    NUM = 261,
    SCANF = 262,
    PRINTF = 263,
    AND = 264,
    LB = 265,
    RB = 266,
    LCB = 267,
    RCB = 268,
    LSB = 269,
    RSB = 270,
    SC = 271,
    COMA = 272,
    QUES = 273,
    COLN = 274,
    QUOTE = 275,
    EQ = 276,
    PLUS = 277,
    MINUS = 278,
    MUL = 279,
    DIV = 280,
    EXP = 281,
    UPLUS = 282,
    UMINUS = 283,
    MOD = 284,
    LT = 285,
    GT = 286,
    LTE = 287,
    GTE = 288,
    NEQ = 289,
    LEQ = 290,
    LAND = 291,
    LOR = 292,
    NOT = 293,
    IF = 294,
    ELSE = 295,
    WHILE = 296,
    DO = 297,
    FOR = 298,
    INT = 299,
    CHAR = 300,
    FLOAT = 301,
    DOUBLE = 302,
    LITERAL = 303
  };
#endif
/* Tokens.  */
#define HEADER 258
#define MAIN 259
#define VAR 260
#define NUM 261
#define SCANF 262
#define PRINTF 263
#define AND 264
#define LB 265
#define RB 266
#define LCB 267
#define RCB 268
#define LSB 269
#define RSB 270
#define SC 271
#define COMA 272
#define QUES 273
#define COLN 274
#define QUOTE 275
#define EQ 276
#define PLUS 277
#define MINUS 278
#define MUL 279
#define DIV 280
#define EXP 281
#define UPLUS 282
#define UMINUS 283
#define MOD 284
#define LT 285
#define GT 286
#define LTE 287
#define GTE 288
#define NEQ 289
#define LEQ 290
#define LAND 291
#define LOR 292
#define NOT 293
#define IF 294
#define ELSE 295
#define WHILE 296
#define DO 297
#define FOR 298
#define INT 299
#define CHAR 300
#define FLOAT 301
#define DOUBLE 302
#define LITERAL 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "project.y" /* yacc.c:1909  */

	int data_type;
	char var_name[30];
  char text[30];

#line 156 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

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
    LB = 260,
    RB = 261,
    LCB = 262,
    RCB = 263,
    SC = 264,
    COMA = 265,
    VAR = 266,
    EQ = 267,
    PLUS = 268,
    MINUS = 269,
    MUL = 270,
    DIV = 271,
    EXP = 272,
    UPLUS = 273,
    UMINUS = 274,
    MOD = 275,
    LT = 276,
    GT = 277,
    LTE = 278,
    GTE = 279,
    NEQ = 280,
    LEQ = 281,
    LAND = 282,
    LOR = 283,
    NOT = 284,
    IF = 285,
    ELSE = 286,
    QUES = 287,
    COLN = 288,
    WHILE = 289,
    DO = 290,
    FOR = 291,
    NUM = 292,
    INT = 293,
    CHAR = 294,
    FLOAT = 295,
    DOUBLE = 296
  };
#endif
/* Tokens.  */
#define HEADER 258
#define MAIN 259
#define LB 260
#define RB 261
#define LCB 262
#define RCB 263
#define SC 264
#define COMA 265
#define VAR 266
#define EQ 267
#define PLUS 268
#define MINUS 269
#define MUL 270
#define DIV 271
#define EXP 272
#define UPLUS 273
#define UMINUS 274
#define MOD 275
#define LT 276
#define GT 277
#define LTE 278
#define GTE 279
#define NEQ 280
#define LEQ 281
#define LAND 282
#define LOR 283
#define NOT 284
#define IF 285
#define ELSE 286
#define QUES 287
#define COLN 288
#define WHILE 289
#define DO 290
#define FOR 291
#define NUM 292
#define INT 293
#define CHAR 294
#define FLOAT 295
#define DOUBLE 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "project.y" /* yacc.c:1909  */

int data_type;
char var_name[30];

#line 141 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

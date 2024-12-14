
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     VAR = 259,
     begin = 260,
     END = 261,
     CONST = 262,
     INTEGER = 263,
     FLOAT = 264,
     IF = 265,
     ELSE = 266,
     FOR = 267,
     WHILE = 268,
     READLN = 269,
     WRITELN = 270,
     ADD = 271,
     SUB = 272,
     MUL = 273,
     DIV = 274,
     AND = 275,
     OR = 276,
     NOT = 277,
     EQ = 278,
     NEG = 279,
     INF = 280,
     INF_E = 281,
     SUP = 282,
     SUP_E = 283,
     AFF = 284,
     PO = 285,
     PF = 286,
     OB = 287,
     FB = 288,
     ALO = 289,
     ALF = 290,
     VIR = 291,
     PVIR = 292,
     DPOINT = 293,
     AP = 294,
     IDF = 295,
     ERR = 296,
     STR = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 10 "synt.y"

    char *str;
    int entier;
    float reel;



/* Line 1676 of yacc.c  */
#line 102 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


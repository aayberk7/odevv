/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    METIN = 258,                   /* METIN  */
    AKSI_HALDE = 259,              /* AKSI_HALDE  */
    DOGRU = 260,                   /* DOGRU  */
    YANLIS = 261,                  /* YANLIS  */
    SON = 262,                     /* SON  */
    ISE = 263,                     /* ISE  */
    IKEN = 264,                    /* IKEN  */
    TAMSAYI = 265,                 /* TAMSAYI  */
    ONDALIK = 266,                 /* ONDALIK  */
    TANIMLAYICI = 267,             /* TANIMLAYICI  */
    EGER = 268,                    /* EGER  */
    DEGILSE = 269,                 /* DEGILSE  */
    DONGU = 270,                   /* DONGU  */
    NEKI = 271,                    /* NEKI  */
    FONK = 272,                    /* FONK  */
    DONDUR = 273,                  /* DONDUR  */
    VE = 274,                      /* VE  */
    VEYA = 275,                    /* VEYA  */
    DEGIL = 276,                   /* DEGIL  */
    ESIT = 277,                    /* ESIT  */
    ESIT_DEGIL = 278,              /* ESIT_DEGIL  */
    KUCUK = 279,                   /* KUCUK  */
    BUYUK = 280,                   /* BUYUK  */
    KUCUK_ESIT = 281,              /* KUCUK_ESIT  */
    BUYUK_ESIT = 282,              /* BUYUK_ESIT  */
    ARTI_ATAMA = 283,              /* ARTI_ATAMA  */
    EKSI_ATAMA = 284,              /* EKSI_ATAMA  */
    ATAMA = 285,                   /* ATAMA  */
    EKRANA_YAZ = 286,              /* EKRANA_YAZ  */
    DEGER_GOSTER = 287,            /* DEGER_GOSTER  */
    EKRANI_TEMIZLE = 288,          /* EKRANI_TEMIZLE  */
    RENK_AYARLA = 289,             /* RENK_AYARLA  */
    KALINLIK_AYARLA = 290,         /* KALINLIK_AYARLA  */
    DIKDORTGEN_CIZ = 291,          /* DIKDORTGEN_CIZ  */
    DAIRE_CIZ = 292,               /* DAIRE_CIZ  */
    UCGEN_CIZ = 293,               /* UCGEN_CIZ  */
    DOLDUR = 294,                  /* DOLDUR  */
    GUNCELLE = 295,                /* GUNCELLE  */
    TUS_BASILDI = 296,             /* TUS_BASILDI  */
    TUS_YUKARI = 297,              /* TUS_YUKARI  */
    TUS_ASAGI = 298,               /* TUS_ASAGI  */
    TUS_SOLA = 299,                /* TUS_SOLA  */
    TUS_SAGA = 300                 /* TUS_SAGA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

    int int_value;
    double double_value;
    char *string_value;
    char *identifier;

#line 116 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

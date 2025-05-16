%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    void yyerror(const char *s);
%}

%union {
    int int_value;
    double double_value;
    char *string_value;
    char *identifier;
}

%token METIN
%token AKSI_HALDE
%token DOGRU
%token YANLIS
%token SON
%token ISE
%token IKEN


%token <int_value> TAMSAYI
%token <double_value> ONDALIK
%token <identifier> TANIMLAYICI
%token EGER DEGILSE DONGU NEKI
%token FONK DONDUR
%token VE VEYA DEGIL
%token ESIT ESIT_DEGIL KUCUK BUYUK KUCUK_ESIT BUYUK_ESIT
%token ARTI_ATAMA EKSI_ATAMA ATAMA
%token EKRANA_YAZ DEGER_GOSTER EKRANI_TEMIZLE
%token RENK_AYARLA KALINLIK_AYARLA
%token DIKDORTGEN_CIZ DAIRE_CIZ UCGEN_CIZ DOLDUR GUNCELLE
%token TUS_BASILDI TUS_YUKARI TUS_ASAGI TUS_SOLA TUS_SAGA

%start program
%%

program:
    statement_list
    ;

statement_list:
    statement_list statement
    | statement
    ;

statement:
    assignment
    | condition
    | loop
    | function_def
    | function_call
    | draw_command
    | return_statement
    | tus_condition
    ;

tus_condition:
    EGER TUS_BASILDI TUS_YUKARI ISE statement_list AKSI_HALDE statement_list
  | EGER TUS_BASILDI TUS_ASAGI ISE statement_list AKSI_HALDE statement_list
  | EGER TUS_BASILDI TUS_SOLA ISE statement_list AKSI_HALDE statement_list
  | EGER TUS_BASILDI TUS_SAGA ISE statement_list AKSI_HALDE statement_list
  ;


return_statement:
    DONDUR expression    { printf("Return edildi.\n"); }
;

assignment:
    TANIMLAYICI ATAMA expression                { printf("%s değişkenine değer atandı.\n", $1); }
    | TANIMLAYICI ARTI_ATAMA expression         { printf("%s değişkeni artırıldı.\n", $1); }
    | TANIMLAYICI EKSI_ATAMA expression         { printf("%s değişkeni azaltıldı.\n", $1); }
    ;

expression:
    TAMSAYI
    | ONDALIK
    | TANIMLAYICI
    | expression '+' expression
    | expression '-' expression
    | expression '*' expression
    | expression '/' expression
    | expression '%' expression
    ;

condition:
    EGER expression ISE statement_list AKSI_HALDE statement_list
  | DONGU expression IKEN statement_list NEKI
  ;


loop:
    DONGU expression IKEN statement_list NEKI
;


function_def:
    FONK TANIMLAYICI TANIMLAYICI TANIMLAYICI ':' statement_list SON  { printf("Fonksiyon tanımlandı: %s\n", $2); }
;


function_call:
    TANIMLAYICI expression_list        { printf("Fonksiyon çağrısı yapıldı.\n"); }
    ;


expression_list:
    expression
  | expression_list expression
  | expression_list ',' expression
;


draw_command:
    DAIRE_CIZ expression expression expression  { printf("Daire çizildi.\n"); }
    | DIKDORTGEN_CIZ expression expression expression expression  { printf("Dikdörtgen çizildi.\n"); }
    | UCGEN_CIZ expression expression expression expression expression  { printf("Üçgen çizildi.\n"); }
    ;
%%


void yyerror(const char *s) {
    fprintf(stderr, "Hata: %s\n", s);
}


int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Dosya açılamadı");
            return 1;
        }
    } else {
        printf("Kullanım: %s <dosya>\n", argv[0]);
        return 1;
    }

    if (yyparse() == 0) {
        printf("Program başarılı bir şekilde çalıştı.\n");
    } else {
        printf("Programda hata bulundu.\n");
    }

    fclose(yyin);
    return 0;
}

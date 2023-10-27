#include <stdio.h>

int main(){

    // true (1) mentre false (0)
    bool piove;
    bool sole;
    bool nevica;

    piove = 0;
    sole = 1;

    bool prendo_ombrello = piove;

    //condizione E : &&

    //SE PIOVE è VERO E SOLE è VERO : ARCOBALENO è VERO
    //SE PIOVE è FALSO E SOLE è FALSO : ARCOBALENO è FALSO
    //SE PIOVE è VERO E SOLE è FALSO : ARCOBALENO è FALSO
    //SE PIOVE è FALSO E SOLE è VERO : ARCOBALENO è FALSO
    bool arcobaleno = piove && sole;


    //condizione O: ||
    //SE PIOVE è VERA E NEVICA è VERO : FA_FREDDO è VERO
    //SE PIOVE è FALSO E NEVICA è VERO : FA_FREDDO è VERO
    //SE PIOVE è VERO E NEVICA è FALSO : FA_FREDDO è VERO
    //SE PIOVE è FALSO E NEVICA è FALSO : FA_FREDDO è FALSO
    bool fa_freddo = piove || nevica;

    bool fa_caldo = sole && !fa_freddo;

    bool risultato =  sole && (piove || nevica);

    int val1 = 15;
    int val2 = 10;

    bool controllo = val1 > val2;
    controllo = val2 < val1;
    controllo = val1 == val2;


    




}
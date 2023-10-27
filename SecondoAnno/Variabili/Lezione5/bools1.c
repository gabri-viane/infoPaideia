#include <stdio.h>

int main()
{

    // false : 0
    // true : 1

    // variabili bool possono essere: true (1) oppure false (0)

    bool piove = 0; // non sta piovendo
    bool sole = 1;
    bool vento = 1;

    printf("Piove? %d\n", piove);
    printf("C'e il sole? %d\n", sole);

    // SE PIOVE è VERO: !PIOVE è FALSO
    // SE PIOVE è FALSO: !PIOVE è VERO
    bool non_piove = !piove;
    printf("Non piove? %d\n", non_piove);

    // SE PIOVE è VERO E SOLE è VERO : ACROBALENO è VERO
    // SE  PIOVE è FALSO E SOLE è VERO : ARCOBALENO è FALSO
    // SE PIOVE è VERO E SOLE è FALSO : ACROBALENO è FALSO
    // SE PIOVE è FALSO E SOLE è FALSO : ARCOBALENO è FALSO
    bool arcobaleno = piove && sole;

    bool fa_freddo = piove && vento && !sole;

    bool esco_di_casa = !piove && !vento && sole;
    esco_di_casa = !(piove || vento) && sole; 


    // bool bella_giornata;
    return 0;
}
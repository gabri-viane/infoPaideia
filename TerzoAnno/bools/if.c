#include <stdio.h>

int main()
{
    bool piove = 1;
    bool sole = 0;

    if (piove)
    {
        // Codice
        printf("Prendi l'ombrello");
    }
    else
    {
        // Altrimenti fai questo
        printf("Non prendere l'ombrello");
    }

    if (piove && sole)
    {
        printf("\nC'è l'arcobaleno");
    }
    else
    {
        printf("\nNon c'è l'arcobaleno");
    }

    int valore1 = 21;
    int valore2 = 20;

    if (valore1 > valore2)
    {
        printf("%d è maggiore di %d", valore1, valore2);
    }
    else
    {
        printf("%d non è maggiore di %d", valore1, valore2);
    }
}
#include <stdio.h>

int main()
{

    double var1;
    double var2;

    printf("Inserisci variabile 1:");
    scanf("%lf", &var1);

    printf("Inserisci variabile 2:");
    scanf("%lf", &var2);

    double somma = var1 + var2;
    printf("La somma vale: %lf", somma);

    double sottrazione = var1 - var2;
    printf("La somma vale: %lf", sottrazione);
    return 0;
}
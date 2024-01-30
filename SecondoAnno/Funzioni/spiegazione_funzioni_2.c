#include <stdio.h>

double somma(double valore1, double valore2)
{
    return valore1 + valore2;
}

double sottrazione(double valore1, double valore2)
{
    return valore1 - valore2;
}

double divisione(double valore1, double valore2)
{
    return valore1/valore2;
}

double molitiplicazione(double valore1, double valore2)
{
    return valore1*valore2;
}

int main()
{
    double v1 = 10.5;
    double v2 = 5.5;
    double risultato = somma(v1, v2); // Che i valori vengono copiati
    printf("Il risultato vale: %lf\n", risultato);
    double risultato2 = sottrazione(v1, v2);
    printf("Il risultato2 vale: %lf\n", risultato2);
    double risultato3 = divisione(v1, v2);
    printf("Il risultato3 vale: %lf\n", risultato3);
    double risultato4 = molitiplicazione(v1, v2);
    printf("Il risultato4 vale: %lf\n", risultato4);

    return 0;
}
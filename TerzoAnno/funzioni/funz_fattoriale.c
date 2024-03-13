#include <stdio.h>

int calcoloFattoriale(int numero_partenza)
{
    int fattoriale = 1;
    for (int i = numero_partenza; i > 0; i--)
    {
        fattoriale = fattoriale * i;
    }
    return fattoriale;
}

int main()
{
    int numero1;
    printf("Inserisci il primo valore: ");
    scanf("%d", &numero1);

    int numero2;
    printf("Inserisci il secondo valore: ");
    scanf("%d", &numero2);

    int numero3;
    printf("Inserisci il terzo valore: ");
    scanf("%d", &numero3);

    int fattoriale_1;
    fattoriale_1 = calcoloFattoriale(numero1);

    int fattoriale_2;
    fattoriale_2 = calcoloFattoriale(numero2);

    int fattoriale_3;
    fattoriale_3 = calcoloFattoriale(numero3);

    printf("I fattoriali sono: %d %d %d", fattoriale_1, fattoriale_2, fattoriale_3);
}
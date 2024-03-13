#include <stdio.h>

// Definire la funzione somma
// Il nome della funzione: somma
// Che cosa restituisce: la somma => valore intero => int

int somma(int val1, int val2)
{
    int risultato;
    risultato = val1 + val2;
    return risultato;
}

int main()
{
    int numero1;
    int numero2;
    int risultato;
    // chiedere di inserire il valore 1
    printf("Inserisci il primo valore: ");
    scanf("%d", &numero1);
    // chiedere di inserire il valore 2
    printf("Inserisci il secondo valore: ");
    scanf("%d", &numero2);
    // chiamiamo la funzione
    risultato = somma(numero1, numero2);
    // stampiamo l'uscita
    printf("Il risultato vale: %d", risultato);

    return 0;
}

#include <stdio.h>

int main()
{
    int totale;
    int numero_partenza;

    // chiede il numero iniziale
    printf("Inserisci il numero di partenza:");
    // salvo il numero nella variabile numero_partenza
    scanf("%d", &numero_partenza);

    // ciclo for:
    // l'indice "i" parte dal numero di partenza e ogni volta diminuisce di uno
    // se numero_partenza=12 allora i = 12
    // la variabile i all'inizio vale 12, viene sommato al totale che vale 0
    // il totale vale ora 12, al prossimo ciclo la variabile i diminuisce di 1
    // il calcolo esegue 12+11 (cioè il totale+i), e così via...
    for (int i = numero_partenza; i > 0; i--)
    {
        totale = totale + i; // sommo al totale precedente il nuovo valore di i
    }

    // Stampo il totale
    printf("Il totale e': %d", totale);
    return 0;
}
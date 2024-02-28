#include <stdio.h>

int main()
{
    int trovati = 0;
    int numero_partenza;

    // chiede il numero iniziale
    printf("Inserisci il numero di partenza:");
    // salvo il numero nella variabile numero_partenza
    scanf("%d", &numero_partenza);

    for (int i = numero_partenza; i > 0; i--)    {
        if (i % 2 == 0){
            trovati++;
        }
    }

    printf("Ci sono %d numeri dispari prime del numero %d (incluso)", trovati, numero_partenza);

    return 0;
}
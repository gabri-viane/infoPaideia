#include <stdio.h>

int main()
{
    // Si dichiarano le variabili
    int numero_da_sommare;
    int numero_cicli;

    // Chiede all'utente il numero da sommare
    printf("Inserisci numero da sommare:");
    scanf("%d", &numero_da_sommare);
    // Chiede il numero di volte che deve sommare
    printf("Inserisci numero di cicli:");
    scanf("%d", &numero_cicli);

    int totale;
    // il ciclo viene eseguito un numero di volte
    // definito dall'utente
    for (int i = 0; i < numero_cicli; i = i + 1)
    {
        // non dichiaro qua la variabile totale ma 
        // la dichiaro fuori dal ciclo
        totale = totale + numero_da_sommare;
    }

    printf("Il totale è: %d", totale);

    return 0;
}
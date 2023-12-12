#include <stdio.h>

int main()
{

    int somma;
    for (int i = 0; i < 5; i = i + 1)
    {
        int valore;
        printf("Inseriscimi un valore: ");
        scanf("%d", &valore);
        // Aspetta che l'utente scriva un valore
        // e lo legge, poi lo salva dentro la variabile "valore"
        somma = somma + valore ;
    }

    printf("La somma vale : %d", somma);
}
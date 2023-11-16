#include <stdio.h>

int main()
{
    // Chiediamo all'utente di inserire un valore intero e salvarlo in una variabile,
    // chiedere un secondo valore intero e salvarlo nella variabile,
    // se valore1>valore2 facciamo la sottrazione: valore1-valore2
    // se valore1==valore2 facciamo la moltiplicazione : valore1 * valore2
    // se valore1<valore2 facciamo la somma: valore1 + valore2

    int valore1;
    int valore2;

    // Chiediamo all'utente:
    printf("Inserisci il primo valore:");
    // Dato che vogliamo leggere un numero intero usiamo %d
    scanf("%d", &valore1); // Salviamo il valore che l'utente scrive in "valore1"

    printf("Inserisci il secondo valore:");
    scanf("%d", &valore2);

    int risultato; // Ci salviamo il risultato delle operazioni

    //valore1 = 5
    //valore2 = 5

    if (valore1 > valore2)
    {
        // qua dentro il codice viene eseguito solo se la condizione valore1>valore2
        // è vera
        risultato = valore1 - valore2;
    }
    // Si usano due "=" perchè un solo simbolo di uguale è l'assegnamento
    if (valore1 == valore2)
    {
        risultato = valore1 * valore2;
    }

    if (valore1 < valore2)
    {
        risultato = valore1 + valore2;
    }

    printf("Il risultato è %d",risultato);
    return 0;
}
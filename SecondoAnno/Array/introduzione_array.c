#include <stdio.h>

int main()
{

    // la variabile "valori" è array, contiene 6 numeri interi
    int valori[6]; // ha 6 elementi
    // nelle parentesi quadre dobbiamo mettere un indice
    valori[5] = 19; // indice parte da 0 NON DA 1!!!
    valori[0] = 27;
    valori[1] = 34;
    valori[2] = 56;
    valori[3] = 12;
    valori[4] = 99;
    // Ho dato un valore a tutti gli elementi dell'array

    int valore_che_vogliamo;
    // Se vogliamo prendere il valore del 3° elemento:
    valore_che_vogliamo = valori[2];
    // Abbiamo copiato il terzo elemento (indice 2!!!) nella variabile:
    //"valore_che_vogliamo"

    // printf("%d", valori[2]);
    // Per stampare tutti i valori
    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", valori[i]); // usiamo come indice la variabile i
    }

    int valori2[3];
    // vogliamo chiedere un numero all'utente e lo vogliamo mettere
    // Come primo elemento dell'array
    scanf("%d", &valori2[0]);

    // Stampo quello che l'utente ha inserito:
    printf("Hai inserito: %d", valori2[0]);

    // Se volessi inserire più di un valore alla volta?
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&valori2[i]);
    }

    return 0;
}
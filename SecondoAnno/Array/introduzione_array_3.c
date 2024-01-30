#include <stdio.h>

int main()
{
    /* Scrivere un programma che chiede(e quindi leggo)
    all'utente 6 valori e salvarli in un array*/

    int valori_inseriti[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &valori_inseriti[i]);
    }

    // Stampare i valori che ha inserito
    for (int i = 0; i < 6; i++)
    {
        printf("valore alla posizione i=%d : %d \n",i, valori_inseriti[i]);
    }

    int risultato = 0;
    float media = 0;

    for (int i = 0; i < 6; i++)
    {
        // Sommo al risultato un valore alla volta
        risultato = risultato + valori_inseriti[i];
    }

    // si poteva fare al posto del ciclo for anche:
    // risultato = valori_inseriti[0]+valori_inseriti[1]+...+valori_inseriti[5]

    media = risultato / 6.0;
    printf("La media vale: %f\n", media);

    // Devo trovare il valore più alto inserito:
    int valore_piu_alto_trovato = 0;
    for (int i = 0; i < 6; i++)//Controllo valore per valore 
    {
        //Controllo se il valore alla posizione "i" è più alto del
        //valore trovato
        if (valori_inseriti[i] > valore_piu_alto_trovato)
        {
            //se il valore alla posizione "i" è più alto del valore
            //trovato fino ad ora lo sostituisco:
            valore_piu_alto_trovato = valori_inseriti[i];
            //Quindi ora "valore_piu_alto_trovato" vale come il valore
            //nell'array nella posizione i
        }
    }
    printf("Il valore più alto inserito è: %d\n", valore_piu_alto_trovato);
}
#include <stdio.h>

//Questo programma calcola l'etò chiedendo
//la data di nascita e l'anno corrente
int main()
{
    int anno_di_nascita; // annodinascita , annoDiNascita (non ci possono essere spazi!!)
    int anno_corrente;
    int eta; // no lettere accentate

    // SCANF LEGGE I VALORI
    // PRINTF STAMPA/FA VEDERE I VALORI
    printf("Inserisci anno di nascita: ");
    scanf("%d", &anno_di_nascita);

    printf("Inserisci anno corrente: ");
    scanf("%d", &anno_corrente);
    // Abbiamo salvato i valori nelle variabili

    // Prima fa il calcolo : anno_corrente - anno_di_nascita
    // Il risultato del calcolo lo copia dentro la variabile età
    eta = anno_corrente - anno_di_nascita;

    // printf("La tua età è:");
    // printf("%d",eta);
    
    //SONO LA STESSA COSA

    printf("La tua età è: %d", eta);
}
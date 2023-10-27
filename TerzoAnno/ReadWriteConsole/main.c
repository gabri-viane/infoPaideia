#include <stdio.h>

// printf e scanf fanno parte di stdio
int main(void)
{

    // tipo nome;
    // tipo : int, float 0.00001, double 0.00000000001
    // char, bool (true oppure false)

    // Dichiarazione
    int eta; // Definito una variabile

    // Dichiarazione e Assegnamento
    int anno_di_nascita = 2002;
    int anno_corrente = 2023;

    printf("Anno di nascita vale: %d", anno_di_nascita);
    printf("Inserisci l'anno di nascita:");
    scanf("%d", &anno_di_nascita);
    printf("Anno di nascita vale: %d", anno_di_nascita);
    eta = anno_corrente - anno_di_nascita;
    printf("La tua età è: %d", eta);
    return 0;
}
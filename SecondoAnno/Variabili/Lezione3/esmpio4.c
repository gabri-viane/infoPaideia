#include <stdio.h>

// stdio = Standard I/O

int main(void)
{
    // <- Inizio il commento su una riga
    // Qua il codice
    int risultato; // Dichiarazione della variabile
    int operando1;
    int operando2;

    // Assegnamento
    operando1 = 5;
    operando2 = 4;
    // stringhe : si definiscono con le doppie virgolette "qua va il testo" 
    printf("Inserisci operando 1: ");
    scanf("%d", &operando1);

    printf("Inserisci operando 2: ");
    scanf("%d", &operando2);

    // 5 * 3 = 15
    risultato = operando1 * operando2;

    // chiamando la funzione printf
    // printf("%d", risultato);
    // printf("\n"); //Per andare su una nuova linea

    // risultato = 5 * 3 = 15
    // Tutti i testi vanno dentro le ""
    printf("risultato = %d * %d = %d", operando1, operando2, risultato);
}
#include <stdio.h>

/**
 * @brief Funzione main: dove parte il programma
 *
 * @return int : un numero intero che rappresenta il codice dell'errore,
 *       se restituiamo 0 allora non c'è nessun errore
 */
int main()
{
    int numero_intero;                                                             // Dichiarazione numero intero
    printf("Funzione che stampa una stringa");                                     // Stampo un testo
    scanf("%d", &numero_intero);                                                   // Leggo un numero
    printf("Funzione che stampa una testo con una variabile : %d", numero_intero); // Stampo un testo
    return 0;                                                                      // Restituisco SEMPRE 0 dal main
    // il return deve essere l'ultima istruzione
}
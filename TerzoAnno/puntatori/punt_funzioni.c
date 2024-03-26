#include <stdio.h>
// Funzione che esegue la somma senza usare il puntatore
void sommaSenzaPuntatore(int num1, int num2, int ris) {
    ris = num1 + num2;  // il risultato viene salvato in ris
}  // le variabili num1, num2, ris vengono eliminata

// Funzione che esegue la somma usando il puntatore
void sommaConPuntatore(int num1, int num2, int* ris) {
    *ris = num1 + num2;  // il risultato viene salvato nella zona di memoria puntata da ris
}  // le variabili num1, num2, ris vengono eliminata

int main() {
    int risultato1;                         // Creo la variaile
    sommaSenzaPuntatore(5, 7, risultato1);  // La passo per VALORE
    printf("Risultato1 %d \n", risultato1);

    int risultato2;                        // creo la variabile
    sommaConPuntatore(5, 7, &risultato2);  // La passo per RIFERIMENTO
    printf("Risultato1 %d \n", risultato2);

    return 0;
}
#include <stdio.h>

// Dichiariamo le struct prima del main
typedef struct
{
    char nome[100];
    char cognome[100];
    int eta;
} Persona;

int main() {
    Persona p1 = {"Mario", "Rossi", 54};  // Inizializzo la struttura con dei valori
    Persona p2;                           // Creo una nuova variabile senza inizializzare i valori
    // Stampo i valori contenuti nella variabile "p1"
    printf("Nome: %s \nCognome: %s \nEtà: %d", p1.nome, p1.cognome, p1.eta);
    // Assegno un'età alla persona "p2"
    p2.eta = 45;
}
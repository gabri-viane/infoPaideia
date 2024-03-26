#include <stdio.h>

int main() {
    int var;
    var = 9;

    printf("%d\n", var);   // Stampo il valore della variabile
    printf("%d\n", &var);  // Stampo l'indirizzo della variabile

    int* p_variabile;    // Creo un puntatore a variabile intera
    p_variabile = &var;  // Punto alla variabile "var"

    *p_variabile = 20;    // Modifico il valore contenuto alla puntata
    printf("%d\n", var);  // Stampo il valore della variabile

    return 0;
}
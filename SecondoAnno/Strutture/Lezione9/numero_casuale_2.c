#include <stdio.h>
//1. PER GENERARE NUMERI CASUALI
#include <time.h>
#include <stdlib.h>

int main(){

    //2. INIZIALIZZARE IL GENERATORE
    srand( time(NULL) );

    //3. GENERO NUMERO CASUALE TRA 0 E RAND_MAX=32727
    int numero_casuale = rand();

    //4. TRASFORMO IL NUMERO CASUALE TRA 1 E 10
    int numero_casuale_trasformato = rand() % 10 + 1;

    printf("Numero casuale generato: %d\n",numero_casuale);
    printf("Numero casuale trasformato: %d\n",numero_casuale_trasformato);

    return 0;
}
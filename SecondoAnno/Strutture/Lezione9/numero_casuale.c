#include <stdio.h>

#include <time.h> //include la libreria del tempo
#include <stdlib.h>

int main()
{
    // inizializziamo il generatore di numeri casuali
    srand(time(NULL));
    // la funzione rand() genera un numero intero casuale
    // Quindi restituisce un numero casuale tra 1 e 10
    int numero_casuale = rand() % 10 + 1;

    int risposta_utente;

    printf("Indovina il numero:");
    scanf("%d", &risposta_utente);

    if (risposta_utente == numero_casuale)
    {
        printf("Hai indovinato!");
    }
    else
    {
        printf("Non hai indovinato, il numero era %d!", numero_casuale);
    }

    return 0;
}
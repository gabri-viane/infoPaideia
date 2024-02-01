#include <stdio.h>

int main()
{
    int posizioni[30];          // array di interi, contiente le posizioni
    char stringa[30] = "Ciao come stai?";  // Stringa da controllare
    int conteggio_a = 0;        // conta quante volte ho trovato la lettera a
    for (int i = 0; i < 15; i++) // eseguo un ciclo per controllare le lettere
    {
        // controllo la lettera alla posizione i
        if (stringa[i] == 'a')
        {
            // Se ho trovato la lettera 'a' allora salvo la posizione
            posizioni[conteggio_a] = i;
            // Incremento il numero di lettere trovate
            conteggio_a++;
        }
    }
    for (int i = 0; i < conteggio_a; i++)
    {
        printf("Trovata lettera 'a' alla posizione: %d\n", posizioni[i]);
    }

    return 0;
}
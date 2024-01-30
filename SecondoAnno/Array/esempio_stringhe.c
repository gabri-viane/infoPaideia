#include <stdio.h>

int main()
{

    // DEFINIRE UNA STRINGA
    // Possiamo evitare di mettere il numero di elementi
    // contenuti nell'array
    char stringa_esempio[] = "prova";

    // L'ultimo elemento di una stringa è utilizzato per
    // capire che una stringa è finita
    // \0
    // printf("%s", stringa_esempio);

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", stringa_esempio[i]);
    }

    stringa_esempio[2] = 'H';

    printf("%s", stringa_esempio);

    return 0;
}
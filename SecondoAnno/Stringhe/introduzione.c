#include <stdio.h>

int main()
{
    // Definizione della stringa
    char input_stringa[100];
    // Legge tutta la stringa fino all'invio
    gets(input_stringa);
    //Stampa la stringa
    printf("Hai inserito: %s", input_stringa);
    return 0;
}
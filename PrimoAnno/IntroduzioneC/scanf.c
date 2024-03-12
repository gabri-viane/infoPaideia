#include <stdio.h>

int main()
{
    // Dichiaro la variabile
    int valore;

    printf("Inserisci un valore: ");
    scanf("%d", &valore); // Chiediamo di inserire un valore
    
    // Dopo stampiamo il valore che è stato inserito
    printf("Il valore che hai inserito è: %d\n", valore);

    valore = 34;
    printf("Il valore adesso vale: %d", valore);

    return 0;
}
#include <stdio.h>

int main()
{

    int variabile1 = 50;

    printf("Variabile1 : %d \n", variabile1);
    // Non posso stampare la variabile2 perchè non l'ho ancora dichiarata
    {
        int variabile2 = 38;
        printf("Variabile1 (dentro graffe): %d \n", variabile1);
        printf("Variabile2 (dentro graffe): %d \n", variabile2);
        // Qui esistono sia variabile1 che variabile2
    } // Qua muore variabile2
    printf("Variabile2 (fuori graffe): %d \n", variabile2);

    // Qui la variabile1 esiste e la variabile2 no

} // Qua muore(viene eliminata) :  variabile1
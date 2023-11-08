#include <stdio.h>

int main()
{

    int numero1 = 9;
    int numero2 = 8;

    printf("Inserisci numero1:");
    scanf("%d", &numero1);

    printf("Inserisci numero2:");
    scanf("%d", &numero2);

    if (numero1 < numero2)
    { // numero1 < numero2
        printf("numero1 è minore di numero2");
    }
    else
    {
        if (numero1 == numero2) // numero1 == numero2
        {
            printf("numero1 è uguale a numero2");
        }
        else // numero1 > numero2
        {
            printf("numero1 è maggiore di numero2");
        }
    }

    return 0;
}
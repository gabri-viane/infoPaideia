#include <stdio.h>

int main()
{
    int valori2[3];

    printf("Inserisci 3 valori:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &valori2[i]); // solo scanf ha &
    }

    for (int j = 0; j < 3; j++)//generalmente si usano: i,j,k,z
    {
        printf("%d\n", valori2[j]);
    }

    return 0;
}
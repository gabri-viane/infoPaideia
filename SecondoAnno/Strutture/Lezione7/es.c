#include <stdio.h>

int main()
{

    // int i = 0;
    bool sempre_vero = 1;

    int y = 0;
    while (y < 10)
    {
        int b = 0;
        b++;
        y++;
        printf("Dentro il ciclo %d\n", b);
    }

    /*int y = 0;
    for (int i = 0, ciao = 1; (i < 50 && ciao == 1); i += 2)
    {
        int a;
        printf("Dentro il ciclo %d\n", i);
        printf("y=%d\n", y);
        y++;
        ciao = 0;
    }*/
    printf("La variabile y vale alla fine %d", y);

    // printf("La variabile i vale: %d",i);

    printf("\nFuori dal ciclo");

    return 0;
}
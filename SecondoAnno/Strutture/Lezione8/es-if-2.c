#include <stdio.h>

int main()
{

    int anni_eta;
    printf("Inserisci la tua età:");
    scanf("%d", &anni_eta);

    if (anni_eta >= 18)
    {

        printf("Sei maggiorenne in Italia\n");

        if (anni_eta >= 21)
        {
            printf("Sei maggiorenne in America");
        }
    }
    else
    {

        printf("Sei minorenne\n");
        if (anni_eta > 15)
        {
            printf("In America puoi guidare la macchina");
        }
    }

    return 0;
}
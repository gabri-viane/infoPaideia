#include <stdio.h>

int main()
{
    /*bool condizione = 1;// 1 = vero , 0 = falso

    if(condizione){
        //Codice
        printf("Sono dentro l'if\n");
    }

    printf("Sono fuori dall'if\n");*/

    int anni_eta;
    printf("Inseriscimi la tua età:");
    scanf("%d", &anni_eta);

    if (anni_eta < 18)
    {

        printf("Sei minorenne\n");
    }
    else
    {

        printf("Sei maggiorenne\n");
    }

    /*if(anni_eta >= 18){
        printf("Sei maggiorenne\n");
    }*/

    return 0;
}
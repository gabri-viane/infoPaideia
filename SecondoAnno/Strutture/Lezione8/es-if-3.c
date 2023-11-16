#include <stdio.h>

int main()
{

    int anni_eta;
    printf("Inserisci la tua età:");
    scanf("%d", &anni_eta);

    if(anni_eta > 20){
        
        printf("Sei maggiorenne in Italia\n");
            printf("Sei maggiorenne in America");
    } else if(anni_eta >= 18){

        printf("Sei maggiorenne in Italia\n");
        
    } else if(anni_eta >16){
        
    }


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
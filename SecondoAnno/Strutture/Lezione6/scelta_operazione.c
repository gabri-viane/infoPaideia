#include <stdio.h>

int main()
{
    /*
        Chiediamo all'utente cosa vuole fare: addizione o sottrazione
        Chiediamo 2 numeri con cui bisogna fare il calcolo
        Eseguiamo il calcolo
    */

    bool operazione; // Se vero = addizione, Se falso = sottrazione

    printf("Vuoi fare una addizione (1) o una sottrazione(0):");
    scanf("%d", &operazione);

    int numero1;
    int numero2;
    printf("Inserisci numero1:");
    scanf("%d", &numero1);

    printf("Inserisci numero2:");
    scanf("%d", &numero2);

    if(operazione){
        //qua addizione
        printf("Risultato è %d", numero1 + numero2);
    }else{
        //qua sottrazione
        printf("Risultato è %d", numero1 - numero2);
    }

    return 0;
}
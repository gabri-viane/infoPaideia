#include <stdio.h>

//Funzione che fa il calcolo della media
//ha bisogno dell'array e del numero di elementi da usare
int calcoloMedia(int valori[], int numero_elementi){
    int somma = 0;//Variabile di supporto per sommare gli elementi
    //sommiamo quanti elementi c'è stato chiesto
    for (int i = 0; i < numero_elementi; i++){
        /*
        ogni volta sommiamo al numero precedente
        il nuovo valore
        */
        somma = somma + valori[i];
    }
    //Calcolo la media e la restituisco
    return somma / numero_elementi;
}

int main(){
    //Creiamo l'array di 10 elmenti
    int numeri[10];
    //Chiediamo all'utente di inserire i 10 valori
    for (int i = 0; i < 10; i++){
        scanf("%d", &numeri[i]);
    }
    //Chiamiamo la funzione e calcoliamo la media usando i 10 elementi
    int media = calcoloMedia(numeri, 10);
    //Stampiamo quanto vale la media
    printf("La media vale %d\n", media);

    int media2 = calcoloMedia(numeri, 3);
    printf("La seconda media vale: %d\n",media2);

    return 0;
}
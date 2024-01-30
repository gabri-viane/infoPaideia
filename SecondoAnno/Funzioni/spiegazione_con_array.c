#include <stdio.h>

int numeroPiuAlto(int array[],int dimensione){
    //Facciamo finta che il primo valore sia il più alto
    int valore_piu_alto = array[0];

    //eseguiamo un ciclo che scorre tutto l'array
    //e controlla ogni posizione se il numero è più 
    //alto di quello già trovato
    for(int i=0;i<dimensione;i++){
        if(array[i]>valore_piu_alto){
            //se il valore corrente è più alto di quello già
            //trovato allora lo sostituisco
            valore_piu_alto = array[i];
        }
    }

    return valore_piu_alto;
}

int main(){

    return 0;
}
#include <stdio.h>

/**
 * @brief Calcola la lunghezza di una stringa (array di caratteri)
 * 
 * @param testo La stringa da misurare
 * @return La lunghezza della stringa
 */
int calcolaLunghezza(char testo[]){
    int lunghezza = 0;//parto dalla posizione 0

    //finché il carattere è diverso da 0 vuol dire che la stringa 
    //non è finita
    //controllo il carattere alla posizione "lunghezza"
    while(testo[lunghezza]!=0){
        lunghezza++;//Aumento la lunghezza misurata della stringa
    }
    return lunghezza;//restituisco quante lettere ho contato
}

int main(){
    char testo1[50] = "prova";//massima lunghezza 50 caratteri
    //Chiamo la funzione per calcolare la lunghezza
    int lunghezza1 = calcolaLunghezza(testo1);
    //stampo la lunghezza del testo
    printf("%d",lunghezza1);
    return 0;
}
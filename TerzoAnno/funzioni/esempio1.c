#include <stdio.h>

void esempio(){//la funzione esempio non restituisce nulla
    printf("Ciao");//Stampa ciao
}//Ritorna a dove è stata chiamata (riga 16)

int somma(int a, int b){//viene chiamata con a=6, b=4 e restituisce un intero
    int risultato;
    risultato = a+b;//calcolo la somma: 6+4=10
    return risultato;//restituisco il VALORE, non la variabile, e quindi restituisce 10
}

//Il programma parte da qua
int main(){//funzione main
    esempio();//chiama la funzione esempio (va alla riga 3)
    int valore_risultato = somma(6,4);//dichiara una variabile e chiama la funzione somma con i valori 6 e 4
    //valore_risultato vale quanto restituito dalla funzione somma: cioè 10
    return 0;//restituisco 0 (nessun errore nel codice)
}
// <- Le due barre dicono che tutto quello che viene dopo sulla stessa linea è un commento (il computer lo ignora)

// Con questa istruzione usiamo le funzioni di I/O definite da altre persone (chi ha scritto C)
#include <stdio.h>

// una funzione è scritta con la seguente forma:
//  *tipo di ritorno* *nome* ( *parametri* ) { *codice* }

// la funzione main è una funzione speciale: è il punto di partenza del programma:
// il tipo di ritorno è un intero, si deve chiamare per forza "main" e i parametri in questo caso non ce ne sono ("void" = vuoto)
int main(void) //Definizione della funzione
{ //Inizio a scrivere il codice della funzione
    //Con questa funzione stampo sulla console "Hello World"
    printf("Hello World");
    //L'istruzione "return" ritorna un valore a chi "chiama" la funzione, in questo caso poichè la funzione "main" è speciale 
    //e qua "return" serve per uscire dal programma, il valore dopo (0 in questo caso) deve rispettare il tipo di ritorno della 
    //funzione ("int" in questo caso).
    //Il valore restituito dalla funzione main corrisponde al codice di errore: se 0 non c'è stato nessun errore.
    return 0;
    //Tutto il codice dopo return non viene eseguito poichè quest'istruzione fa uscire dalla funzione
}//Finisce il codice della funzione
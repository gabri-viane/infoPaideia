#include <stdio.h>

int main(void)
{
	//Dichiarazione di una variabile di tipo "int" di nome "eta":
    int eta;
	//Assegnamento: imposto la variabile "eta" al valore 12
    eta = 12;
	//Chiamo la funzione "printf" passando 2 parametri: il primo è la stringa "%d" e il scondo il parametro da stampare
    printf("%d", eta); 
	//printf farà in modo di stampare "12" poichè %d viene impostato al valore della variabile eta che ora vale 12
	
	//Assegno ora alla variabile "eta" il nuovo valore 13
    eta = 13;
	//Stampo con la funzione printf il carattere "a capo" = "\n";
    printf("\n"); //vado a capo di una linea
    //ora chiamando la printf stamperà il valore 13 poichè abbiamo cambiato il suo valore
	printf("%d", eta);
	
	//Dichiarazione di una variabile di tipo "float" di nome "prezzo"
    float prezzo;
	//Assegnamento: imposto la variabile "prezzo" al valore 12.3
	prezzo = 12.3;
	//Vado a capo
    printf("\n");
	
	// %f è per stampare i numeri float/double (decimali, cioè dei numeri con la virgola)
    printf("%f", prezzo);
	//Dichiarazione e assegnamento: la variabile di tipo "char" che si chiama "lettera" viene dichiarata e gli viene assegnato il valore 'a' (carattere a)
    char lettera = 'a';//notare che si usano le virgolette singole ' e non "
    printf("\n"); // Vado a capo di una linea
	//Uso %c per stampare con la funzione printf una variabile di tipo char (un carattere)
    printf("%c", lettera);
    printf("\n"); // Vado a capo di una linea
	
	//Il computer interpreta tutte le variabili come dei numeri, quindi anche le lettere le memorizza come un numero.
	//Poichè le lettere per il computer sono come dei numeri allora le possiamo anche stampare con il simbolo %d per sapere il loro valore numerico
    printf("%d", lettera);
	//in questo caso la lettera minuscola 'a' è uguale al numero intero "97" 
    return 0;
}
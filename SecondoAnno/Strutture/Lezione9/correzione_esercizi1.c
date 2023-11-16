#include <stdio.h>

int main(){

    //TUTTE LE ISTRUZIONI FINISCONO CON IL ;

    //Dichiarazione di una variabile:
    int goal;
    int goal_2;

    //DICHIARAZIONE + ASSEGNAMENTO
    float prezzo_prodotto = 5.967; //Numeri decimali si usa . non ,

    //Assegnamento:
    goal = 5;

    //Stampare una variabile:
    printf("%d",goal);//%d per stampare variabili "int"
    printf("%f",prezzo_prodotto);//%f per stampare variabili "float"

    //Leggi il numero (INTERO) che scrive l'utente
    //e lo salva nella variabile goal
    scanf("%d", &goal);

    //Leggere il numero (DECIMALE) che scrive l'utente
    //e lo salva nella variabile goal
    scanf("%f",&prezzo_prodotto);

    return 0;
}
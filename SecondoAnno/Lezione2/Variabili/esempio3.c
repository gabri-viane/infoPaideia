#include <stdio.h>

int main(void){
    //Per definire una variabile bisogna rispettare la forma:
    // *tipo* *nome_variabile*;

    //i tipi possibili sono: int , float , double , char , bool
    // int : numero intero (0 , 1 , 2, ... , -1 , -2 , ...)
    // float : numero decimale (0.5 , 1.456 , -124.567 , ...)
    // double : numero decimale ma più preciso (ad esempio se un float è lungo al massimo 0,000000 un double 0,000000000000)
    // char : carattere, cioè una lettera: i caratteri devono essere messi tra le virgolette singole '.': ad esempio 'a'
    // bool : un booleano, cioè vero o falso, quindi gli unici valori possibili sono: true , false 
    
    //I nomi delle variabili possono contenere solo lettere (maiuscolo e minuscole), numeri (da 0 a 9) e l'underscore "_" e 
    //possono iniziare con una lettera o l'underscore "_" ma non con un numero.
    //Per il computer un variabile che si chiama "giorno" e una che si chiama "Giorno" sono due cose diverse: è quindi case-sensitive,
    //cioè distingue le maiuscole dalle minuscole.

    int giorno;
    //Ho definito una variabile di tipo "int" (intera) di nome "giorno".
    //Da questo punto in poi la variabile int è disponibile a tutto il resto del codice fino alla chiusura della parentesi graffa }
    
    //L'assegnamento di una variabile si fa con la seguente forma:
    // *nome_variabile* = *valore*;
    giorno = 9;
    //Ora la variabile "giorno" contiene il valore 9
    
    giorno = 12;
    //In questo modo ora la variabile giorno vale 12 : abbiamo sovrascritto il suo valore

    //Definizione e assegnamento contemporaneamente
    // *tipo* *nome_variabile* = *valore*;
    //Cioè si unisce sia la definizione della variabile che l'assegnamento in un'unica istruzione.
    int mese = 10;
    //In questo modo il computer definisce la variabile di tipo "int" di nome "mese" e gli assegna il valore 10
}
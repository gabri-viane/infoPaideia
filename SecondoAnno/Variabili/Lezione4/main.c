#include <stdio.h>


//Da qua non parte perchè "Main" è diverso da "main"
int Main2(void){
    printf("Sono nell'altro Main");
    return 0;
}

//funzione speciale : 
//Il programma parte sempre dalla funzione "main"
//int main (...) {...}
//[tipo di ritorno] [nome] ( [parametri] )
int main(void){
    printf("Sono nel main\n");//Chiamiamo la funzione printf
    Main2();
    printf("Sono ritornato nel main\n");
    return 0; //La funzione main deve sempre restituire il valore 0
}

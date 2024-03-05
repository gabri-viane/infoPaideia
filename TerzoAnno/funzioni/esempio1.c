#include <stdio.h>

void esempio(){
    printf("Ciao");
}

int somma(int a, int b){//a=6, b=4
    int risultato;
    risultato = a+b;
    return risultato;
}

int main(){
    esempio();
    int valore_risultato = somma(6,4);
    return 0;
}
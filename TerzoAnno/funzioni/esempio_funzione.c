#include <stdio.h>

int chiediNumero(){
    int numero;
    printf("Inserisci un valore: ");
    scanf("%d",&numero);
    return numero;
}

int main(){
    int num1 = chiediNumero();//num1 = 10
    int num2 = chiediNumero();//num2 = 21
    int num3 = chiediNumero();//
    return 0;
}
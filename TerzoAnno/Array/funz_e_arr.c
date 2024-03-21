#include <stdio.h>

float calcoloMedia(int N) {
    int listaValori[N];
    for (int i = 0; i < N; i++) {
        printf("Inserisci valore %d", i);
        scanf("%d", &listaValori[i]);
    }
    float media;
    int somma = 0;
    for (int i = 0; i < N; i++) {
        somma = somma + listaValori[i];
    }
    media = somma / N;
    return media;
}

int conteggiaLettere(char stringa[], char carattere, int lunghezza) {
    int conteggio = 0;
    for (int i = 0; i < lunghezza; i++) {
        if (stringa[i] == carattere) {
            conteggio++;
        }
    }
    return conteggio;
}

int main() {
    int quanti_numeri=0;
    printf("Di quanti valori vuoi fare la media?");
    scanf("%d",&quanti_numeri);

    float ris = calcoloMedia(quanti_numeri);
    printf("Risultato media: %f",ris);

    //////////////////////////

    char str[60]="Ciao come stai?";
    int contegg = conteggiaLettere(str,'a',15);
    printf("Lettere trovate: %d",contegg);

}
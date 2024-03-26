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

int lunghezzaString(char str[]) {
    int lung = 0;
    while (str[lung] != 0) {
        lung++;
    }
    return lung;
}

int conteggiaLettere(char stringa[], char carattere) {
    int conteggio = 0;
    int lunghezza = lunghezzaString(stringa);  // chiamiamo una funzione dentro l'altra
    for (int i = 0; i < lunghezza; i++) {
        if (stringa[i] == carattere) {
            conteggio++;
        }
    }
    return conteggio;
}

int main() {
    int quanti_numeri = 0;
    printf("Di quanti valori vuoi fare la media?");
    scanf("%d", &quanti_numeri);

    float ris = calcoloMedia(quanti_numeri);
    printf("Risultato media: %f", ris);

    //////////////////////////

    int contegg = conteggiaLettere("Ciao come stai?", 'a');
    printf("Lettere trovate: %d", contegg);

    return 0;
}
#include <stdio.h>

int calcoloAreaQuadrato(int lato) {
    int area = lato * lato;
    return area;
}

int main() {
    int opzione;
    printf("Menu:\n1) Calcolo area quadrato\n2) Opzione2\n100) Esci\n Scegli opzione:");
    scanf("%d", &opzione);
    if (opzione == 1) {
        // Faremo l'azione 1
        int lato;
        printf("Inserisci il valore del lato:");
        scanf("%d", &lato);
        int risultato_area = calcoloAreaQuadrato(lato);
        printf("L'area vale %d \n", risultato_area);
    } else if (opzione == 2) {
        // Facciamo l'azione 2
        printf("Hai scelto l'opzione 2\n");
    } else if (opzione == 100) {
        return 0;
    } else {
        printf("Opzione non disponibile\n");
    }

    return 0;
}
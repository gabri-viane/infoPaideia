#include <stdio.h>

int main() {
    double numero1;
    double numero2;
    int opzione;

    printf("Inserisci il primo numero:");
    scanf("%lf", &numero1);

    printf("Inserisci il secondo numero:");
    scanf("%lf", &numero2);

    printf("Scegli l'operazione:\n 0) Somma\n 1) Sottrazione\n 2) Moltiplicazione\n 3) Divisione\nInserisci opzione:");    
    scanf("%d", &opzione);

    double risultato;
    if (opzione == 0) {
        risultato = numero1 + numero2;
    } else if (opzione == 1) {
        risultato = numero1 - numero2;
    } else if (opzione == 2) {
        risultato = numero1 * numero2;
    } else if (opzione == 3) {
        risultato = numero1 / numero2;
    } else {
        printf("L'operazione non esiste");
    }

    printf("Il risultato vale %lf", risultato);

    return 0;
}
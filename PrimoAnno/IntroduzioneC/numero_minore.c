#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    int numero3;

    printf("Inserisci il primo numero:");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero:");
    scanf("%d", &numero2);

    printf("Inserisci il terzo numero:");
    scanf("%d", &numero3);

    int numero_piu_piccolo;

    if (numero1 < numero2) {  // Controllo se numero1 è minore del numero2
        // Poichè se sono qua sicuramente numero1 è minore di numero2
        // devo vedere chi è più piccolo tra numero1 e numero3
        if (numero1 < numero3) {
            numero_piu_piccolo = numero1;  // numero1 è più piccolo sia di numero2 che di numero3
        } else {
            numero_piu_piccolo = numero3;  // numero3 è più piccolo sia di numero2 che di numero1
        }
    } else if (numero2 < numero3) {    // se sono qua numero1 è più grande di numero2
        numero_piu_piccolo = numero2;  // numero2 è più piccolo sia di numero3 che di numero1
    } else {
        numero_piu_piccolo = numero3;  // numero3 è più piccolo sia di numero2 che di numero1
    }
    printf("Il numero più piccolo è: %d", numero_piu_piccolo);
    return 0;
}
#include <stdio.h>

int main()
{
    // for ( dichiarazione ; condizione ; assegnamento )
    // 1. La dichiarazione viene fatta solo 1 volta all'inizio
    // 2. controlla la condizione
    //  SE
    //  a. VERA: i<10 (la condizione è vera) allora esegui il
    //       codice e al numero 3
    //  b. FALSA: esci dal ciclo

    // 3. Fai l'assegnamento e vai al numero 2

    int ciao = 5;

    for (int i = 0; i < 10; i = i + 1) // QUA NASCE LA VARIABILE i
    {
        
        int ciao = 5;
        // LA VARIABILE i può essere usata solo qua

        // LA i CORRISPONDE AL NUMERO DEL CICLO
        printf("Ciao vale = %d\n", ciao); // Codice
        ciao = ciao + 1;
    }
    ciao = 7; // ciao non è visibile
    // QUA MUORE LA VARIABILE i
    //  FUORI DAL CICLO
}
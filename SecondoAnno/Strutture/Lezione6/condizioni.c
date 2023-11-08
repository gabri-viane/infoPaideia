#include <stdio.h>

int main()
{
    bool sole = 1;  // Falso
    bool piove = 1; // Vero

    // Serve per controllare una condizione
    if (piove) // Se "piove" è vera allora esegui il codice dentro le parentesi graffe:
    {
        // Esegue il codice dentro le parentesi graffe solo se la condizione tra parentesi tonde è vera
        printf("Prendi l'ombrello\n");
    }else // se non piove = !piove
    {
        printf("Non prendere l'ombrello\n");
    }

    // Controlliamo che le due condizioni siano vere contemporaneamente
    if (sole && piove) // Solo se entrambe sono vere eseguo il codice
    {
        printf("C'è l'arcobaleno\n");
    }

    // Controlliamo se sole è TRUE e piove FALSE: il ! (punto esclamativo) serve per negare la condizione
    if (sole && !piove)
    {
        printf("C'è bel tempo");
    }

    if (piove) // Se la variabile piove è TRUE
    {
        if (sole)
        { // Se la variabile sole è TRUE
            printf("C'è l'arcobaleno");
        }
        else
        {
            printf("Prendi l'ombrello");
        }
    }
    else
    {
        if (sole)
        {
            printf("C'è bel tempo");
        }
    }
    return 0;
}
#include <stdio.h> //STANDARD INPUT/OUTPUT LIBRARY

#include <stdlib.h> //STANDARD LIBRARY
#include <time.h>   //TIME LIBRARY

int main()
{
    srand(time(NULL));

    int numero_casuale;

    for (int i = 0; i < 50; i++)
    {
        numero_casuale = rand() % 10 + 1;
        printf("%d. Numero casuale: %d\n", i, numero_casuale);
    }
    return 0;
}
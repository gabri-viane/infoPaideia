#include <stdio.h>

int main()
{

    int i = 0;
    do
    {
        i++;
        printf("La variabile (do-while) i=%d\n", i);
    } while (i < 10);

    printf("La variabile (dopo ciclo do-while) i=%d\n", i);
    while (i < 10)
    {
        printf("La variabile (while) i=%d\n", i);
        i++;
    }

    for(int y=0;y<10;y++){
        
    }

    return 0;
}
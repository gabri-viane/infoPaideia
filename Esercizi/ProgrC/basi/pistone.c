#include <stdio.h>
#include <stdlib.h>

#define false 0
#define true 1

int pos_p = 0;
bool sensore_fine = false;
bool sensore_inizio = true;

void movimentazionePistone()
{
    system("cls");
    printf("._______________\n");
    printf("|              |\n");
    printf("|");
    for (int i = 0; i < pos_p; i++)
    {
        printf(" ");
    }
    printf("---------------|\n");
    printf("|______________|\n");
    _sleep(500);
    if (pos_p == 14){
        sensore_fine = true;
    }else if (pos_p == 0){
        sensore_inizio = true;
    }else{
        sensore_fine = false;
        sensore_inizio = false;
    }
}

int main()
{

    while (pos_p < 15)
    {
        movimentazionePistone();
        pos_p++;
    }

    return 0;
}
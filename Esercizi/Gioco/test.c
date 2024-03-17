#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct
{
    int ID_destra;   // Stanza che si trova a destra
    int ID_sinistra; // Stanza che si trova a sinistra
    int ID_sopra;    // Stanza che si trova a sopra (avanti)
    int ID_sotto;    // Stanza che si trova a sotto (indietro)
} Collegamento;

typedef struct
{
    int ID;                // ID della stanza
    char nome[50];         // Nome della tua stanza
    char descrizione[150]; // Descrizione della stanza
    char azione[50];       // Azione che viene aggiunta nel menù
    void *funzione;        // funzione da utilizzare
    Collegamento stanze_collegate;
} Stanza;

typedef struct {
    int vita;       //vita del giocatore
    int ID_stanza;  //Stanza in cui si trova
} Giocatore;

void lancioMonetina(Giocatore *g)
{
    srand(time(NULL));
    printf("Lancio la monetina:...");
    if (rand() % 2 == 0)
    {
        printf("è uscita testa\n");
    }
    else
    {
        printf("è uscita croce\n");
    }
}

int main()
{
    Collegamento prossime_stanze = {-1, -1, -1, -1};
    Stanza inizio = {0, "Ingresso", "Questa stanza è vuota, prosegui", "Lancia monetina", &lancioMonetina, prossime_stanze};

    return 0;
}
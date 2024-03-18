#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int vita;       // vita del giocatore
    int ID_stanza;  // Stanza in cui si trova
} Giocatore;

typedef struct
{
    int ID_destra;    // Stanza che si trova a destra
    int ID_sinistra;  // Stanza che si trova a sinistra
    int ID_sopra;     // Stanza che si trova a sopra (avanti)
    int ID_sotto;     // Stanza che si trova a sotto (indietro)
} Collegamento;

typedef struct
{
    int ID;                         // ID della stanza
    char nome[50];                  // Nome della tua stanza
    char descrizione[150];          // Descrizione della stanza
    char azione[50];                // Azione che viene aggiunta nel menù
    void (*funzione)(Giocatore *);  // funzione da utilizzare
    Collegamento stanze_collegate;
} Stanza;

/**
 * @brief Funzione della stanza 0:
 * Lancia una moneta e dice se è uscita testa o croce
 *
 * @param g Il puntatore ad una struct Giocatore
 */
void lancioMonetina(Giocatore *g) {
    srand(time(NULL));                 // inizializza il generatore di numeri casuali
    printf("Lancio la monetina:...");  // Stampa il testo
    if (rand() % 2 == 0) {             // Controlla se il numero random è pari
        printf("è uscita testa\n");
    } else {  // se è dispari
        printf("è uscita croce\n");
    }
}

/**
 * @brief Funzione della stanza 1:
 * Aggiunge 1 di vita al giocatore
 *
 * @param g Il puntatore ad una struct Giocatore
 */
void festeggia(Giocatore *g) {
    printf("Festeggi con la gente nella stanza: +1 di vita\n");
    g->vita = g->vita + 1;
}
/**
 * @brief Stampa il menù per far scegliere al giocatore che opzione vuole fare.
 * Se una stanza non è collegata su un lato non viene stampata la scelta, ad esempio se
 * la stanza a sinistra non ha nessun'altra stanza allora
 *
 * @param corrente
 * @param puoScegliereAzione
 * @return int
 */
int sceltaAzione(Stanza stanzaCorrente, int puoScegliereAzione) {
    Collegamento c = stanzaCorrente.stanze_collegate;
    printf("\nScegli cosa vuoi fare:\n");
    if (c.ID_destra != -1) {
        printf("1) Vai a destra\n");
    }
    if (c.ID_sinistra != -1) {
        printf("2) Vai a sinistra\n");
    }
    if (c.ID_sopra != -1) {
        printf("3) Vai a avanti\n");
    }
    if (c.ID_sotto != -1) {
        printf("4) Vai a indietro\n");
    }
    if (puoScegliereAzione) {
        printf("5) %s\n", stanzaCorrente.azione);
    }
    printf("0) Esci dal labirinto \n");
    int azione = -1;
    do {
        printf("\nInserisci numero azione:");
        scanf("%d", &azione);
        if (azione < 0 || (puoScegliereAzione ? azione > 5 : azione > 4)) {
            azione = -1;
            printf("Numero inserito non valido.");
        } else {
            switch (azione) {
                case 1:
                    azione = (c.ID_destra == -1 ? -1 : azione);
                    break;
                case 2:
                    azione = (c.ID_sinistra == -1 ? -1 : azione);
                    break;
                case 3:
                    azione = (c.ID_sopra == -1 ? -1 : azione);
                    break;
                case 4:
                    azione = (c.ID_sotto == -1 ? -1 : azione);
                    break;
            }
            if (azione == -1) {
                printf("Non ci sono stanze collegate in questa direzione.");
            }
        }
    } while (azione == -1);
    return azione;
}

void cicloGioco(Stanza stanze[], Giocatore *g) {
    int scegliAzione = 1;
    while (1) {
        int IDStanzaCorrente = g->ID_stanza;
        Stanza stanzaCorrente = stanze[IDStanzaCorrente];
        if(g->vita<=0){
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tSei morto...\n\n\n\n");
        }
        if (scegliAzione) {
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  // Vado a capo tante volte per pulire lo schermo
            printf("Ti trovi nella stanza: %d - %s\n\nDescrizione:\n%s\n\n", stanzaCorrente.ID, stanzaCorrente.nome, stanzaCorrente.descrizione);
        }
        int res = sceltaAzione(stanzaCorrente, scegliAzione);
        switch (res) {
            case 0:
                printf("Ti sei arreso... stai lasciando il labirinto!");
                return;
            case 1:
                g->ID_stanza = stanzaCorrente.stanze_collegate.ID_destra;
                scegliAzione = 1;
                break;
            case 2:
                g->ID_stanza = stanzaCorrente.stanze_collegate.ID_sinistra;
                scegliAzione = 1;
                break;
            case 3:
                g->ID_stanza = stanzaCorrente.stanze_collegate.ID_sopra;
                scegliAzione = 1;
                break;
            case 4:
                g->ID_stanza = stanzaCorrente.stanze_collegate.ID_sotto;
                scegliAzione = 1;
                break;
            case 5:
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  // Vado a capo tante volte per pulire lo schermo
                stanzaCorrente.funzione(g);
                scegliAzione = 0;
                break;
        }
    }
}

int main() {
    Collegamento prossime_stanze0 = {-1, 1, -1, -1};
    Collegamento prossime_stanze1 = {0, -1, -1, -1};
    Stanza inizio = {0, "Ingresso", "Questa stanza è vuota, prosegui", "Lancia monetina", &lancioMonetina, prossime_stanze0};
    Stanza inizio2 = {1, "Stanza delle feste", "In questa stanza trovi molta gente che sta festeggiando", "Festeggia", &festeggia, prossime_stanze1};
    Stanza stanze[2];
    stanze[0] = inizio;
    stanze[1] = inizio2;
    Giocatore g = {20, 0};
    cicloGioco(stanze, &g);
    return 0;
}
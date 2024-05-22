#include <stdio.h>
/**
 * @brief Calcolo quanti ammalati ci sono dopo N giorni
 *
 * @param tasso_di_contagio Tasso con cui il virus si propaga
 * @param tasso_di_guarigione Tasso di guarigione della popolazione
 * @param ammalati_iniziali Ammalati iniziali (al giorno 0)
 * @param numero_giorni Numero di giorni da simulare
 * @return int Contagiati finali
 */
int calcoloConatagiatiInNGiorni(double tasso_di_contagio, double tasso_di_guarigione, int ammalati_iniziali, int numero_giorni) {
    // Imposto gli ammalati a quelli iniziali
    int contagiati = ammalati_iniziali;
    // giorni che sono trascorsi dall'inizio del contagio
    int giorni_passati = 0;
    while (giorni_passati < numero_giorni) {
        contagiati = contagiati * tasso_di_contagio + contagiati * (1 - tasso_di_guarigione);  // Calcolo i nuovi contagiati ricordandomi dei precedenti
        giorni_passati++;                                                                      // Aumento il giorno, cioè vado al successivo
    }
    return contagiati;
}
/**
 * @brief Calcolo in quanti giorni si contagia la totalità della popolazione
 *
 * @param popolazione Numero di persone totali
 * @param ammalati_iniziali Ammalati iniziali (al giorno 0)
 * @param tasso_di_contagio Tasso con cui il virus si propaga
 * @param tasso_di_guarigione Tasso di guarigione della popolazione
 * @return int
 */
int calcoloGiorniContagioTotale(int popolazione, int ammalati_iniziali, double tasso_di_contagio, double tasso_di_guarigione) {
    // Imposto gli ammalati a quelli iniziali
    int contagiati = ammalati_iniziali;
    // Inizio dal giorno 0
    int giorno = 0;
    while (contagiati < popolazione) {                                                         // Vado avanti finché la totalità della popolazione non è contagiata
        giorno++;                                                                              // incermento i giorni passati
        contagiati = contagiati * tasso_di_contagio + contagiati * (1 - tasso_di_guarigione);  // ricalcolo i giorni
    }
    return giorno;
}

void menu(double tasso_di_contagio, double tasso_di_guarigione, int popolazione_totale, int ammalati_iniziali) {
    int opzione;
    while (true) {
        printf("Scegli un’operazione:\n 0) Esci\n 1) Calcolo contagi in N giorni\n 2) Giorni per contagio completo\nInserisci il numero dell’operazione che vuoi fare:");
        scanf("%d", &opzione);
        if (opzione == 0) {  // Devo uscire
            break;
        } else if (opzione == 1) {  // Calcolare il contagio in N giorni
            int numero_giorni;
            printf("Inserisci il numero di giorni: ");
            scanf("%d", &numero_giorni);
            int risultato = calcoloConatagiatiInNGiorni(tasso_di_contagio, tasso_di_guarigione, ammalati_iniziali);
            printf("\n Contagiati in %d giorni: %d\n", numero_giorni, risultato);
        } else if (opzione == 2) {  // Calcolo dei per contagio completo
            int risultato = calcoloGiorniContagioTotale(popolazione_totale, ammalati_iniziali, tasso_di_contagio, tasso_di_guarigione);
            printf("\n Numero giorni per contagio completo: %d\n", risultato);
        } else {
            printf("\n Opzione non valida \n");
        }
    }
}

int main() {
    double tasso_di_contagio;
    int popolazione_totale;
    int ammalati_iniziali;

    printf("Simulazione contagio virus:\n");
    printf("Inserisci il tasso di contagio: ");
    scanf("%lf", &tasso_di_contagio);

    printf("Inserisci la popolazione totale: ");
    scanf("%d", &popolazione_totale);

    printf("Inserisci gli ammalati iniziali: ");
    scanf("%d", &ammalati_iniziali);

    // implementazione aggiuntiva n.2
    double tasso_di_guarigione;
    printf("Inserisci il tasso di guarigione: ");
    scanf("%lf", &tasso_di_guarigione);

    // Faccio partire il menu con una funzione esterna: implementazione aggiuntiva n.1
    menu(tasso_di_contagio, tasso_di_guarigione, popolazione_totale, ammalati_iniziali);

    return 0;
}
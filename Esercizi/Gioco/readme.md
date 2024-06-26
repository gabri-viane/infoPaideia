# Labirinto tra le stanze

### Indice:

1. [Labirinto tra le stanze](#labirinto-tra-le-stanze)
      1. [Indice:](#indice)
      2. [Spiegazione del gioco:](#spiegazione-del-gioco)
      3. [Come funziona:](#come-funziona)
      4. [Cosa dovete fare?](#cosa-dovete-fare)
         1. [Esempio uso strutture:](#esempio-uso-strutture)
      5. [Programma di base](#programma-di-base)
      6. [Il giocatore](#il-giocatore)
      7. [Funzione della stanza](#funzione-della-stanza)
      8. [Esempio di come funziona il gioco:](#esempio-di-come-funziona-il-gioco)
   1. [Punti aggiuntivi del gruppo](#punti-aggiuntivi-del-gruppo)


Creiamo un gioco di avventura testuale: è un tipo di gioco in cui i giocatori interagiscono con il mondo di gioco attraverso il testo, prendendo decisioni e risolvendo enigmi.
Ecco una spiegazione più dettagliata su come potrebbe funzionare e un esempio di codice in C per creare una semplice avventura testuale:

### Spiegazione del gioco:

1. **Scenario di gioco**: 
   - Il giocatore si trova in un ambiente virtuale descritto tramite testo.
   - L'obiettivo è completare un'azione specifica o raggiungere un luogo specifico.

2. **Interazione del giocatore**:
   - Il giocatore interagisce con il gioco digitando comandi testuali come "andare a nord", "prendere chiave" o "aprire porta".
   - Il gioco risponde alle azioni del giocatore con descrizioni di ciò che accade nel mondo di gioco.

3. **Enigmi e decisioni**:
   - Il gioco può includere enigmi da risolvere o decisioni da prendere che influenzano il risultato della partita.

### Come funziona:

- Il gioco inizia con il giocatore in una stanza buia (stanza 0).
- Il giocatore può digitare scegliere i comandi _come_ "avanti","destra",..., per spostarsi in altre stanze o "guarda" per ottenere una descrizione della stanza attuale.
- Il gioco risponde ai comandi del giocatore e aggiorna la posizione del giocatore in base alle azioni scelte.
- Il gioco continua finché il giocatore decide di uscire scegliendo "esci".

Questo è solo un esempio molto semplice di un gioco di avventura testuale.

### Cosa dovete fare?

Ognuno di voi dovrà creare una stanza usando la `struct Stanza` (che viene definita dopo). 

Ogni stanza ha:
- ***ID***: cioè un numero identificativo, in questo caso il vostro numero sul registro
- ***nome***: una stringa che è il nome della vostra stanza (max.49 caratteri + '\0')
- ***descrizione***: una stringa che descrive com'è fatta la vostra stanza (max.149 caratteri + '\0')
- ***azione***: una stringa che rappresenta l'azione che si può fare in questa stanza (max. 49 caratteri + '\0')
- ***funzione***: puntatore alla funzione che esegue l'azione
- ***stanze_collegate***: `struct Collegamento` che rappresenta che stanze sono connesse a questa stanza

Una struct collegamento è composta da 4 campi:
- ***ID_destra***: il codice ID della stanza che si trova alla destra
- ***ID_sinistra***: il codice ID della stanza che si trova alla sinistra
- ***ID_sopra***: il codice ID della stanza che si trova sopra 
- ***ID_sotto***: il codice ID della stanza che si trova sotto

**Se l'ID della stanza è `-1` allora non è collegata a nessuna stanza.**

```
                     +---------+
                     |         |
                     |  sopra  |
                     |         |
                     +---------+
                         ||
    +----------+     +---------+     +----------+
    |          |     |         |     |          |
    | sinistra | === |   qui   | === |  destra  |
    |          |     |         |     |          |  
    +----------+     +---------+     +----------+
                         ||
                     +---------+
                     |         |
                     |  sotto  |
                     |         |
                     +---------+
```

#### Esempio uso strutture:
```c
Collegamento prossime_stanze;
prossime_stanze.ID_destra = -1;
prossime_stanze.ID_sinistra = -1;
prossime_stanze.ID_sopra = -1;
prossime_stanze.ID_sotto = -1;


Stanza inizio = {0, "Ingresso", "Questa stanza è vuota, prosegui", "Lancia monetina", &lancioMonetina, prossime_stanze};
```

Oppure in un modo abbreviato:

```c
Collegamento prossime_stanze = {-1, -1, -1, -1};

Stanza inizio = {0, "Ingresso", "Questa stanza è vuota, prosegui", "Lancia monetina", &lancioMonetina, prossime_stanze};
```

1. **Definisci la stanza**: Usa la struct che rappresenta la stanza per definire una tua stanza, ognuno deve avere una stanza con nome e descrizione diverse.

2. **Crea una funzione per gestire la stanza**: puoi scrivere quante funzioni per gestire la tua stanza, come dare anche oggetti al giocatore, creare dei minigiochi,...

3. **Completa la stanza**: aggiungi nella struct della stanza il puntatore della tua funzione che gestisce la stanza.

4. **Integra le stanze del gruppo**: nel vostro gruppo collegate le stanze tra di loro, quindi decidete i collegamenti tra le vostre stanze e create per ogni stanza i collegamenti.
    
    Ad esempio:
    > La stanza 1 è collegata a sinistra con la stanza 2 e a destra con la stanza 4
    >
    > La stanza 4 è collegata sotto con la stanza 9
        
    ```c
    Collegamento stanza1 = { 4,  2, -1, -1};//stanza 1: ha la stanza 4 a destra e la stanza 2 a sinistra
    Collegamento stanza2 = { 1, -1, -1, -1};//stanza 2: a destra ha la stanza 1 a destra
    Collegamento stanza4 = {-1,  1, -1,  9};//stanza 4: a sinistra ha la stanza 1 e sotto la stanza 9
    Collegamento stanza9 = {-1,  1,  4, -1};//stanza 9: sopra ha la stanza 4
    ```

### Programma di base

Il vostro file di base deve essere contenere il codice qua sotto, poi potete creare ognuno la propria stanza (nel main) e aggiungete nel file le vostre funzioni che avete creato in gruppo.

```c
#include <stdio.h>


typedef struct {
    int vita;       //vita del giocatore
    int ID_stanza;  //Stanza in cui si trova
} Giocatore;

typedef struct {
    int ID_destra;   // Stanza che si trova a destra
    int ID_sinistra; // Stanza che si trova a sinistra
    int ID_sopra;    // Stanza che si trova a sopra (avanti)
    int ID_sotto;    // Stanza che si trova a sotto (indietro)
} Collegamento;

typedef struct {
    int ID;                // ID della stanza
    char nome[50];         // Nome della tua stanza
    char descrizione[150]; // Descrizione della stanza
    char azione[50];       // Azione che viene aggiunta nel menù
    void (*funzione)(Giocatore*);        // funzione da utilizzare
    Collegamento stanze_collegate; // stanze collegate a questa
} Stanza;


//create qua le vostre funzioni

int main(){
    //create qua le vostre stanze e collegamenti
    return 0;
}
```

### Il giocatore

Viene definito poi il giocatore con la seguente struct:

```c
typedef struct {
    int vita;       //vita del giocatore
    int ID_stanza;  //Stanza in cui si trova
} Giocatore;
```

Ha due parametri:
- ***vita***: rappresenta il parametro della vita, nella vostra stanza potete dare un bonus di vita oppure ridurre la vita del giocatore
- ***ID_stanza***: rappresenta la stanza in cui si trova il giocatore

### Funzione della stanza

La funzione della stanza che definite deve avere come tipo di ritorno **void** e come unico parametro un puntatore ad una struct `Giocatore`. In questo modo potete modificare o usare la vita del giocatore così:

```c
void funzioneEsempio(Giocatore *giocatore){
    //Diminuisco la vita di 1
    giocatore->vita = giocatore->vita -1; 
    //Stampo la vita del giocatore
    printf("La vita del giocatore ora è %d",giocatore->vita);
}
```

Se voglio creare una stanza che utilizzi questa funzione:

```c
Collegamento coll = ... ;

Stanza esempio = {12, "Stanza esempio", "Questa stanza ha un tavolo con una pozione? Cosa fai?","Bevi pozione", &funzioneEsempio, coll}
```



### Esempio di come funziona il gioco:

[GUARDA QUA L'ESEMPIO](test.c);

In questo esempio:

- Per creare le stanze si utilizza la struct `Stanza`, fornendo il nome e una descrizione per ogni stanza creata, un testo che corrisponde all'azione che si può eseguire in questa stanza, il puntatore alla funzione che esegue l'azione e i collegamenti con le altre stanze, in questo caso:
  -  L'ID della stanza è **0**
  -  Il nome è **"Ingresso"**
  -  La descrizione è **"Questa stanza è vuota, prosegui"**
  -  L'azione che si può scegliere è **"Lancia monetina"** e quando viene scelta viene eseguita la funzione **lancioMonetina**
  -  Ha una sola stanza collegata perchè tutti gli altri ID nella struct `Collegamento` sono **-1**, è collegata a sinistra con la stanza **1**
- La funzione `lancioMonetina` è la funzione che viene eseguita quando il giocatore sceglie l'azione.
- Si possono scrivere più funzioni per gestire ulteriori aspetti della stanza, come la gestione degli oggetti o dei collegamenti (teletrasportare il giocatore in un'altra stanza), aumentare o diminuire la vita del giocatore.


## Punti aggiuntivi del gruppo

Se sistemate il codice del gioco per aggiungere queste funzionalità vi saranno assegnati punti bonus per il voto: ricordatevi che solo una persona nella classe può riscattare i punti per avere sistemato uno di questi punti. (Cioè se il punto 2 l'ha già risolto qualcuno allora i punti verranno dati solo alla prima persona che l'ha risolto).

1. Modificare la funzione `sceltaAzione` e aggiungere anche l'opzione per stampare la descrizione della stanza in cui si trova il giocatore
2. Modificare la funzione `cicloGioco` per fare vedere la vita del giocatore
3. La funzione deve essere eseguita al massimo una volta, ora c'è un bug: se si va in una stanza e si torna indietro si può eseguire ancora la funzione (per provare basta fare andare l'[esempio](test.c) e vedere che se si esegue la funzione `Lancia monetina`, poi si va nella stanza a sinistra, si ritorna indietro andando a destra, si può ancora eseguire la funzione `Lancia monetina`)
4. Modificare la funzione `cicloGioco` per fare in modo che il gioco finisca quando il giocatore muore



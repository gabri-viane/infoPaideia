# Struttura IF-ELSE

Permette di eseguire un blocco di codice se una condizione è rispettata oppure un altro codice se la condizione non è rispettata, può essere pensato in questo modo: il computer eseguira il primo blocco di codice solo se la domanda che gli facciamo ha come risposta "vero" altrimenti eseguirà il secondo.

## Come si usa

La struttura if-else segue le stesse regole dell'if [(spiegato qui)](./struttura_if.md) ma permette di gestire sia il caso in cui la condizione è vera sia nel caso in cui sia falsa:

    if ( condizione ) {
        ...codice da eseguire se la condizione è vera...
    } else {
        ...codice da eseguire se la condizione è falsa...
    }

Tutto il codice che c'è dentro le parentesi graffe dell'if viene eseguito solo se la condizione è vera (si possono scrivere quante operazioni si vogliono) altrimenti viene eseguito il codice nell'else.

### Esempio
Vogliamo controllare se la vita del *giocatore_1* è di più del *giocatore_2*:
```c
#include <stdio.h>

int main(){
    int vita_giocatore_1 = 30;
    int vita_giocatore_2 = 100;

    if(vita_giocatore_1 > vita_giocatore_2){
        printf("Il giocatore 1 ha più vita del giocatore 2");
    }else{
        printf("Il giocatore 2 ha più vita (o la stessa) del giocatore 2");
    }
    return 0;
}
```

Il programma quindi controlla se *vita_giocatore_1* è maggiore di *vita_giocatore_2*: 
1. se è vero stampa:
   > Il giocatore 1 ha più vita del giocatore 2
2. Se è falso stampa: (quindi se è minore o uguale):
   > Il giocatore 2 ha più vita (o la stessa) del giocatore 2

Questo perché il programma andando in ordine:
- controlla prima se ( **if** ) vita_giocatore_1 > vita_giocatore_2
- SE E SOLO SE la condizione è falsa esegue il codice dell'**else**
# Esercizi

Indice:
- [Esercizi](#esercizi)
  - [1. DICHIARAZIONE ED ASSEGNAMENTO](#1-dichiarazione-ed-assegnamento)
    - [Es. 1.1](#es-11)
    - [Es. 1.2](#es-12)
  - [2. PRINTF E SCANF](#2-printf-e-scanf)
    - [Es. 2.1 - Calcolo percentuale](#es-21---calcolo-percentuale)
    - [Es. 2.2 - Calcolo sconto](#es-22---calcolo-sconto)
    - [Es. 2.3 - Giorno e Mese](#es-23---giorno-e-mese)
  - [3. IF E CONDIZIONI](#3-if-e-condizioni)
    - [Es. 3.1 - Controllo valori](#es-31---controllo-valori)
    - [Es. 3.2 - Controllo input](#es-32---controllo-input)
    - [Es. 3.3 - Scelta operazione](#es-33---scelta-operazione)

## 1. DICHIARAZIONE ED ASSEGNAMENTO

### Es. 1.1
Scrivere un programma in cui:
vengono dichiarate una variabile intera e assegnato il valore **3**, una variabile decimale con valore **4.5**, una variabile decimale precisa (double) con valore **4.567**, una variabile booleana(bool) di valore vero (cioè 1) e una variabile carattere uguale ad **'a'**.

**(Attenzione il valore delle variabili char (le lettere o simboli) deve essere messo tra virgolette singole *'* *'* che sulla tastiera si trovano sotto il punto di domanda)**

### Es. 1.2
Scrivere un programma in cui:
vengono dichiarate la variabile A e la variabile B (il tipo della variabile a propria scelta). Assegnare un valore alla variabile A ed assegnare alla variabile B il valore contenuto nella variabile A. Dopo aver assegnato il valore alla variabile B cambiare il valore della variabile A.

Dire quanto valgono A e B alla fine dell'esecuzione del programma.


## 2. PRINTF E SCANF

### Es. 2.1 - Calcolo percentuale
Scrivere un programma in cui:
vengono dichiarate tre variabili:
- *valore* : di tipo intero
- *totale* : di tipo intero
- *percentuale* : di tipo decimale (float)

Chiedere all'utente di inserire il valore e il totale e calcolare la percentuale con la formula:
<code>(valore inserito / totale) * 100</code>

Stampare il valore della percentuale.


### Es. 2.2 - Calcolo sconto
Scrivere un programma in cui:
vengono dichiarate tre variabili:
- *prezzo* : di tipo float
- *sconto_percentuale* : di tipo intero
- *totale* : di tipo float

(Si possono dichiarare tutte le variabili che si credono necessarie)

Chiedere all'utente:
- il prezzo e salvarlo nella variabile *prezzo*
- lo sconto percentuale (un valore tra 0 e 100) nella variabile *sconto_precentuale*

Calcolare lo sconto con la formula :
<code> prezzo * sconto_percentuale /100 </code><br/>
E il totale con la formula:
<code> prezzo - sconto</code>

Stampare quanto risulta il prezzo finale da pagare (il totale).

### Es. 2.3 - Giorno e Mese
Scrivere un programma in cui:
vengono dichiarate due variabili intere di nome *giorno* e *mese*, una variabile decimale (float) di nome *progressione_mese* e una variabile decimale di nome *progressione_anno*:

- la *progressione_mese* indica la percentuale di completamento del mese e si calcola come:
<code>giorno_del_mese / 30</code>
(30 sono circa i giorni in un mese)

- la *progressione_anno* indica la percentuale di completamento dell'anno e si calcola come:
<code>mese_dell_anno / 12 </code>
(12 sono i mesi in un anno)

Chiedere all'utente:
- il numero del giorno e salvarlo nella variabile *giorno*
- il numero del mese e salvarlo nella variabile *mese*

Effettuare i calcoli e stampare a console le variabili *progressione_mese* e *progressione_anno*.

## 3. IF E CONDIZIONI

### Es. 3.1 - Controllo valori
Scrivere un programma in cui:
vengono chiesti all'utente due valori interi: valore1 e valore2, controllare se:
- valore1 è maggiore di valore2
- se valore1 è minore di valore2
- valore1 è uguale a valore2

Stampare quale è il risultato

### Es. 3.2 - Controllo input
Svolgere l'esercizio [es. 2.2](#es-22---calcolo-sconto) ed aggiungere la seguente parte:<br/>
Controllare che lo sconto che inserisce l'utente sia un valore compreso tra 0 e 100:
- se è compreso stampare il risultato
- se non è un valore tra 0 e 100 stampare la stringa: <code>sconto non valido</code>

### Es. 3.3 - Scelta operazione
Chiedere all'utente di inserire due numeri interi e salvarli in due variabili. Dopo che li ha inseriti chiedere all'utente (stampare nella console):<br/> 
<code>
Scegli un'opzione:<br/>
1. Esegui la somma
2. Esegui la sottrazione
3. Esegui la moltiplicazione
4. Esegui la divisione

Scelta:
</code>

Leggere l'opzione che l'utente sceglie (tra 1, 2, 3 e 4) e verificare che sia corretta: cioè che quello che l'utente ha scritto sia tra le opzioni possibili.
- Se *non* è un valore tra 1 e 4 stampare: <code>Opzione non valida</code>
- Se l'opzione è corretta (cioè compresa tra 1 e 4) eseguire l'operazione scelta e stampare il risultato.

***Esempio della console:***<br/>
<code>
Inserisci il valore 1: 10<br/>
Inserisci il valore 2: 5<br/>
Scegli un'opzione:<br/>
1. Esegui la somma
2. Esegui la sottrazione
3. Esegui la moltiplicazione
4. Esegui la divisione

Scelta: 1<br/>
Il risultato è 15
<code>

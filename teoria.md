### Indice:
- [1. Introduzione alla programmazione in C](#1-introduzione-alla-programmazione-in-c)
    - [Concetti di programmazione](#concetti-di-programmazione)
    - [Vantaggi e limitazioni del linguaggio C](#vantaggi-e-limitazioni-del-linguaggio-c)
    - [Struttura di un programma C](#struttura-di-un-programma-c)
- [2. Tipi di dati in C](#2-tipi-di-dati-in-c)
    - [Introduzione ai tipi di dati primitivi](#introduzione-ai-tipi-di-dati-primitivi)
    - [Dichiarazione di variabili](#dichiarazione-di-variabili)
    - [Modificatori di tipo](#modificatori-di-tipo)
- [3. Istruzioni di controllo](#3-istruzioni-di-controllo)
    - [Istruzioni di selezione](#istruzioni-di-selezione)
    - [Istruzioni di iterazione](#istruzioni-di-iterazione)
    - [Istruzioni di salto](#istruzioni-di-salto)
- [4. Funzioni in C](#4-funzioni-in-c)
    - [Definizione e chiamata di funzioni](#definizione-e-chiamata-di-funzioni)
    - [Passaggio di parametri](#passaggio-di-parametri)
    - [Funzioni ricorsive (non visto ancora)](#funzioni-ricorsive-non-visto-ancora)
    - [Utilità delle funzioni](#utilità-delle-funzioni)
- [5. Array in C](#5-array-in-c)
    - [Definizione e inizializzazione di array](#definizione-e-inizializzazione-di-array)
    - [Accesso agli elementi di un array](#accesso-agli-elementi-di-un-array)
    - [Operazioni sugli array](#operazioni-sugli-array)
    - [Considerazioni sugli array](#considerazioni-sugli-array)

3. Operatori e espressioni:
   - Operatori aritmetici, relazionali e logici
   - Precedenza degli operatori
   - Espressioni e valutazione

6. Array:
   - Definizione e inizializzazione di array
   - Accesso agli elementi di un array
   - Operazioni sugli array (ordinamento, ricerca, etc.)

7. Puntatori:
   - Concetto di puntatore e indirizzo di memoria
   - Operazioni sui puntatori (dereferenziazione, aritmetica dei puntatori)
   - Puntatori e array

8. Strutture di dati:
   - Definizione e utilizzo delle strutture
   - Strutture annidate e strutture annidate con puntatori
   - Array di strutture

9. Allocazione dinamica della memoria:
   - Utilizzo delle funzioni malloc(), calloc(), realloc() e free()
   - Gestione della memoria dinamica

10. File I/O:
    - Operazioni di lettura e scrittura su file
    - Gestione degli errori di I/O
    - Operazioni di posizionamento all'interno dei file

11. Pratica della programmazione:
    - Esercizi e progetti per applicare i concetti appresi
    - Debugging e correzione degli errori
    - Stile di programmazione e buone pratiche

# 1. Introduzione alla programmazione in C

La programmazione in C è un punto di partenza comune per molte persone che vogliono imparare a programmare. C è un linguaggio di programmazione di medio livello creato da Dennis Ritchie alla Bell Labs negli anni '70. È un linguaggio potente e flessibile che è stato utilizzato per sviluppare molti sistemi operativi, applicazioni desktop, dispositivi embedded e altro ancora. 

### Concetti di programmazione

Per comprendere la programmazione in C, è essenziale comprendere alcuni concetti fondamentali. La programmazione è l'arte di scrivere istruzioni per computer in un linguaggio comprensibile dall'uomo (codice sorgente) che vengono poi tradotte in istruzioni eseguibili (codice macchina) dal compilatore. Alcuni concetti chiave includono:

- **Variabili e dati**: Le variabili sono contenitori per i dati utilizzati nei programmi. Possono rappresentare numeri, testo, valori booleani e altro ancora.

- **Istruzioni**: Le istruzioni sono i comandi che indicano al computer quali operazioni eseguire. Queste includono operazioni aritmetiche, confronti, assegnazioni e così via.

- **Strutture di controllo**: Le strutture di controllo consentono di influenzare il flusso di esecuzione di un programma. Queste includono istruzioni di selezione (if, else if, else), istruzioni di iterazione (for, while, do-while) e istruzioni di salto (break, continue, return, goto).

- **Funzioni**: Le funzioni sono blocchi di codice riutilizzabili che eseguono un'operazione specifica. Possono accettare input, eseguire operazioni e restituire un risultato.

### Vantaggi e limitazioni del linguaggio C

Il linguaggio C offre diversi vantaggi, tra cui:

- **Efficienza**: C è un linguaggio di medio livello che consente agli sviluppatori di scrivere codice che si traduce direttamente in istruzioni macchina, rendendolo efficiente in termini di memoria e velocità di esecuzione.

- **Portabilità**: I programmi scritti in C possono essere eseguiti su una vasta gamma di piattaforme hardware e software, rendendoli portabili.

- **Accesso diretto alla memoria**: C fornisce agli sviluppatori un controllo diretto sulla memoria del computer, consentendo loro di ottimizzare le prestazioni e di gestire risorse come puntatori e allocazione dinamica della memoria.

Tuttavia, ci sono anche alcune limitazioni da considerare:

- **Complessità**: C può essere più difficile da imparare rispetto ad altri linguaggi di programmazione a causa del suo controllo più basso livello e della gestione esplicita della memoria.

- **Sicurezza**: Poiché C offre un accesso diretto alla memoria, i programmi scritti in C possono essere vulnerabili a problemi come buffer overflow e altre vulnerabilità di sicurezza se non sono scritti correttamente.

- **Manutenibilità**: A causa della sua natura più "vicina all'hardware", i programmi scritti in C possono essere più complessi da mantenere e modificare rispetto ad alcuni linguaggi di programmazione ad alto livello.

### Struttura di un programma C

Un programma C tipico è composto da una serie di elementi, tra cui:

- **Include direttive**: Queste direttive consentono di includere librerie standard e definizioni di funzioni nel programma.

- **Funzione main**: Ogni programma C deve contenere una funzione chiamata `main()`. Questa è la funzione principale che viene eseguita quando il programma viene avviato.

- **Dichiarazioni di variabili**: Le variabili devono essere dichiarate prima di essere utilizzate nel programma.

- **Definizioni di funzioni**: Le funzioni possono essere definite all'interno del programma per eseguire operazioni specifiche.

- **Istruzioni di controllo**: Le istruzioni di controllo come if, else, for, while sono utilizzate per controllare il flusso di esecuzione del programma.

- **Istruzioni di output**: I programmi C spesso producono output che viene visualizzato all'utente. Questo può essere fatto utilizzando la funzione `printf()` o altre funzioni di output.

# 2. Tipi di dati in C

I tipi di dati in C sono fondamentali per comprendere come vengono memorizzati e manipolati i dati all'interno di un programma. C offre diversi tipi di dati primitivi, che possono essere classificati in diverse categorie, tra cui numerici, caratteri, booleani e vuoti.

### Introduzione ai tipi di dati primitivi

I tipi di dati primitivi in C includono:

1. **Intero (int)**: Questo tipo di dati rappresenta numeri interi, positivi o negativi, senza parte decimale. Gli interi sono comunemente utilizzati per rappresentare contatori, indici di array e altri valori interi.

2. **Decimali (float e double)**: Questi tipi di dati rappresentano numeri in virgola mobile, che possono avere una parte decimale. 'float' è un tipo più piccolo e offre una precisione inferiore rispetto a 'double', che è più grande e offre una maggiore precisione.

3. **Carattere (char)**: Il tipo di dati 'char' viene utilizzato per rappresentare singoli caratteri alfanumerici e simboli. In C, i caratteri sono rappresentati da valori interi ASCII.

4. **Booleano (bool)**: Questo tipo di dati può avere solo due valori: vero (true) o falso (false). In C, il tipo booleano non è nativo, ma è spesso rappresentato utilizzando interi, dove 0 rappresenta falso e qualsiasi altro valore rappresenta vero.

5. **Vuoto (void)**: Il tipo di dati 'void' viene utilizzato per indicare l'assenza di tipo. Viene spesso utilizzato per specificare che una funzione non restituisce alcun valore.

### Dichiarazione di variabili

Prima di utilizzare una variabile in un programma C, è necessario dichiararla, specificando il suo tipo di dati. La sintassi per dichiarare una variabile è:

```
tipo_dato nome_variabile;
```

Ad esempio:

```c
int numero;
float peso;
char carattere;
```

È anche possibile inizializzare una variabile al momento della dichiarazione:

```c
int numero = 10;
float peso = 72.5;
char carattere = 'A';
```

### Modificatori di tipo

In C, è possibile modificare i tipi di dati di base con modificatori di tipo per ottenere una maggiore precisione o una maggiore gamma di valori. Alcuni dei modificatori di tipo comuni includono:

- **unsigned**: Specifica che una variabile può contenere solo valori positivi o zero. Questo aumenta la gamma dei valori positivi che possono essere memorizzati.

- **short**: Riduce la dimensione di un tipo di dati per salvare memoria. Ad esempio, 'short int' può memorizzare numeri interi con una dimensione minore rispetto a 'int'.

- **long**: Aumenta la dimensione di un tipo di dati per consentire la memorizzazione di valori più grandi. Ad esempio, 'long int' può memorizzare numeri interi più grandi rispetto a 'int'.

La scelta del tipo di dati appropriato dipende dalle esigenze specifiche del programma, incluso il range di valori da memorizzare e la precisione richiesta.

# 3. Istruzioni di controllo

Le istruzioni di controllo in C consentono di influenzare il flusso di esecuzione di un programma. Queste istruzioni permettono di prendere decisioni, eseguire azioni ripetitive e gestire il flusso di esecuzione del programma in base alle condizioni specificate.

Ci sono tre tipi principali di istruzioni di controllo in C: selezione, iterazione e salto.

### Istruzioni di selezione

Le istruzioni di selezione consentono di eseguire parti del codice solo se una determinata condizione è vera. Le istruzioni di selezione più comuni in C sono l'istruzione `if`, l'istruzione `else if` e l'istruzione `else`.

- **if**: L'istruzione `if` permette di eseguire un blocco di codice solo se una condizione specificata è vera. La sintassi è:

  ```c
  if (condizione) {
      // Blocco di codice eseguito se la condizione è vera
  }
  ```

- **else if**: L'istruzione `else if` permette di specificare ulteriori condizioni da controllare nel caso in cui la prima condizione non sia vera. Può essere utilizzata dopo un'istruzione `if` o dopo un'altra istruzione `else if`. La sintassi è:

  ```c
  if (condizione1) {
      // Blocco di codice eseguito se la condizione1 è vera
  } else if (condizione2) {
      // Blocco di codice eseguito se la condizione2 è vera
  }
  ```

- **else**: L'istruzione `else` permette di eseguire un blocco di codice se nessuna delle condizioni precedenti è vera. È sempre usata dopo un'istruzione `if` o `else if`. La sintassi è:

  ```c
  if (condizione) {
      // Blocco di codice eseguito se la condizione è vera
  } else {
      // Blocco di codice eseguito se nessuna delle condizioni precedenti è vera
  }
  ```

### Istruzioni di iterazione

Le istruzioni di iterazione (o cicli) consentono di eseguire ripetutamente un blocco di codice fino a quando una determinata condizione è vera o falsa. Le istruzioni di iterazione più comuni in C sono l'istruzione `for`, l'istruzione `while` e l'istruzione `do-while`.

- **for**: L'istruzione `for` permette di eseguire un blocco di codice per un numero definito di volte. La sintassi è:

  ```c
  for (inizializzazione; condizione; aggiornamento) {
      // Blocco di codice eseguito fino a quando la condizione è vera
  }
  ```

- **while**: L'istruzione `while` permette di eseguire un blocco di codice finché una condizione specificata è vera. La sintassi è:

  ```c
  while (condizione) {
      // Blocco di codice eseguito finché la condizione è vera
  }
  ```

- **do-while**: L'istruzione `do-while` esegue un blocco di codice almeno una volta, quindi verifica la condizione per decidere se continuare l'iterazione. La sintassi è:

  ```c
  do {
      // Blocco di codice eseguito almeno una volta
  } while (condizione);
  ```

### Istruzioni di salto

Le istruzioni di salto consentono di cambiare il flusso di esecuzione del programma in modo non sequenziale. Le istruzioni di salto più comuni in C sono `break`, `continue`, `return`.

- **break**: L'istruzione `break` viene utilizzata per interrompere l'esecuzione di un ciclo o di uno switch-case. Quando viene incontrata, il controllo viene passato all'istruzione successiva al ciclo o allo switch-case. È spesso utilizzata per uscire da un ciclo in modo prematuro.

- **continue**: L'istruzione `continue` viene utilizzata all'interno di un ciclo per interrompere l'iterazione corrente e passare all'iterazione successiva del ciclo. In altre parole, salta il resto del corpo del ciclo e passa all'iterazione successiva.

- **return**: L'istruzione `return` viene utilizzata all'interno di una funzione per restituire un valore al chiamante della funzione. Quando viene incontrata, la funzione termina immediatamente e il controllo viene restituito al punto di chiamata della funzione.

Le istruzioni di controllo sono fondamentali per scrivere programmi C che siano in grado di prendere decisioni, eseguire azioni ripetitive e gestire in modo efficace il flusso di esecuzione del programma.

# 4. Funzioni in C

Le funzioni sono blocchi di codice riutilizzabili che eseguono un'operazione specifica. Nella programmazione strutturata, le funzioni svolgono un ruolo fondamentale nell'organizzazione del codice, consentendo di suddividere un programma complesso in blocchi più piccoli e gestibili.

### Definizione e chiamata di funzioni

In C, una funzione è definita utilizzando la seguente sintassi:

```c
tipo_di_ritorno nome_funzione(parametri) {
    // Corpo della funzione
    // Dichiarazioni e istruzioni
    return valore_di_ritorno;
}
```

- **tipo_di_ritorno**: Indica il tipo di dato che la funzione restituirà al termine della sua esecuzione. Può essere un tipo di dato primitivo come int, float, char, o un tipo di dato personalizzato.

- **nome_funzione**: È il nome della funzione che stai definendo. Questo nome sarà utilizzato per chiamare la funzione da altre parti del programma.

- **parametri**: Sono le variabili che la funzione accetta come input. Possono essere zero o più parametri, separati da virgole, o eventualmente essere omessi se la funzione non richiede alcun input.

- **Corpo della funzione**: È il blocco di codice all'interno delle parentesi graffe che contiene le dichiarazioni di variabili e le istruzioni che definiscono il comportamento della funzione.

- **return**: Utilizzato per restituire un valore al termine dell'esecuzione della funzione. Il tipo di valore restituito deve corrispondere al tipo di ritorno dichiarato.

Una volta definita, la funzione può essere chiamata da altre parti del programma. La chiamata di una funzione avviene utilizzando il suo nome seguito da parentesi tonde, eventualmente con gli argomenti richiesti all'interno delle parentesi.

Ad esempio, supponiamo di definire una funzione per calcolare la somma di due numeri interi:

```c
int somma(int a, int b) {
    int risultato = a + b;
    return risultato;
}
```

Per chiamare questa funzione e ottenere il risultato, puoi fare qualcosa del genere:

```c
int risultato_somma = somma(5, 3);
printf("La somma è: %d\n", risultato_somma);
```

### Passaggio di parametri

I parametri possono essere passati a una funzione in due modi principali: per valore e per riferimento.

- **Passaggio per valore**: I parametri sono passati per valore quando il valore effettivo dei parametri viene copiato nei parametri della funzione. Le modifiche apportate ai parametri all'interno della funzione non influiscono sui parametri originali. Questo è il metodo di passaggio di default in C.

- **Passaggio per riferimento**: I parametri sono passati per riferimento quando si passa l'indirizzo di memoria dei parametri alla funzione. In questo modo, le modifiche apportate ai parametri all'interno della funzione influiscono direttamente sui parametri originali.

### Funzioni ricorsive (non visto ancora)

Una funzione ricorsiva è una funzione che si richiama direttamente o indirettamente. Una chiamata ricorsiva termina quando una condizione di uscita è soddisfatta. Le funzioni ricorsive possono essere utilizzate per risolvere problemi che possono essere scomposti in problemi più piccoli dello stesso tipo.

Ad esempio, il calcolo del fattoriale di un numero può essere implementato in modo ricorsivo:

```c
int fattoriale(int n) {
    if (n == 0 || n == 1){
        return 1;
    }else{
        return n * fattoriale(n - 1);
    }
}
```

### Utilità delle funzioni

Le funzioni svolgono un ruolo cruciale nella scrittura di programmi modulari e leggibili. Suddividere un programma in funzioni offre i seguenti vantaggi:

- **Riutilizzo del codice**: Le funzioni consentono di scrivere codice una volta e riutilizzarlo in più parti del programma, riducendo la duplicazione del codice e facilitando la manutenzione.

- **Modularità**: Dividere un programma in funzioni lo rende più modulare e facile da comprendere. Ogni funzione svolge un compito specifico, rendendo il codice più organizzato e gestibile.

- **Testabilità**: Le funzioni ben definite sono più facili da testare in modo isolato, consentendo di individuare e risolvere i bug più facilmente.

# 5. Array in C

Un array è una struttura dati che può contenere un insieme di elementi dello stesso tipo. Gli array forniscono un metodo conveniente per memorizzare e accedere a più valori correlati utilizzando un singolo nome di variabile. In C, gli array sono uno dei concetti fondamentali e più utilizzati.

### Definizione e inizializzazione di array

Per definire un array in C, si specifica il tipo di dati degli elementi dell'array seguito da un nome per l'array e una dimensione tra parentesi quadre []. Ad esempio:

```c
int numeri[5];
```

Questa istruzione definisce un array chiamato "numeri" che può contenere 5 elementi di tipo int.

Gli array possono anche essere inizializzati durante la dichiarazione:

```c
int numeri[5] = {1, 2, 3, 4, 5};
```

In questo caso, l'array "numeri" viene dichiarato e inizializzato con i valori specificati.

### Accesso agli elementi di un array

Gli elementi di un array sono indicizzati da 0 a dimensione-1, dove la dimensione è il numero totale di elementi nell'array. Per accedere a un elemento specifico dell'array, si utilizza la sua posizione nell'array, chiamata indice. Ad esempio:

```c
int primo_numero = numeri[0];  // Accesso al primo elemento
int secondo_numero = numeri[1];  // Accesso al secondo elemento
```

L'elemento dell'array può anche essere modificato utilizzando lo stesso operatore di accesso:

```c
numeri[2] = 10;  // Modifica il terzo elemento dell'array
```

### Operazioni sugli array

Gli array consentono di eseguire una serie di operazioni utili:

- **Iterazione**: Si può iterare su tutti gli elementi di un array utilizzando cicli come for o while.

```c
for (int i = 0; i < 5; i++) {
    printf("%d ", numeri[i]);
}
```

- **Array multidimensionali**: Gli array possono avere più di una dimensione, creando così gli array multidimensionali.

```c
int matrice[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

- **Stringhe**: In C, le stringhe sono array di caratteri terminati da un carattere nullo ('\0'). Possono essere manipolate come array di caratteri.

```c
char nome[] = "John";
printf("Il primo carattere del nome è: %c\n", nome[0]);  // Stampa 'J'
```

### Considerazioni sugli array

- **Indici fuori limite**: Accedere a un elemento di un array con un indice al di fuori del suo intervallo può causare comportamenti indefiniti e errori nel programma.

- **Dimensioni statiche**: Gli array in C hanno dimensioni statiche, il che significa che la dimensione dell'array deve essere nota a tempo di compilazione e non può essere modificata durante l'esecuzione del programma.

[indietro](./index.md)

---

# Hello World

Il programma scritto si trova [qui](./HelloWorld/main.c).

```c
#include <stdio.h>

int main(void){
    printf("Hello\n World\n");
    return 0;
}
```

Analizzando istruzione per istruzione:

## 1. L'istruzione #include
```C
#include <stdio.h>
```

Il comando <code>#include</code> serve per aggiungere al nostro programma del codice scritto da qualcun'altro. In questo caso <code>#include <stdio.h></code> serve per aggiungere al nostro codice la **libreria** _stdio_ cioè "Standard I/O" (Input/Output) che gestisce la lettura (Input) e la scrittura (Output).

## 2. La funzione main

```c
int main(void)
```

Dichiara la funzione _main_. La funzione main è il punto di ingresso del nostro programma: il computer inizierà ad eseguire il codice un'istruzione alla volta al suo interno.

Una funzione si dichiara con la seguente regola:

    [tipo di ritorno] [nome] ( [parametri] )

Quindi in questo caso:
```c
int main(void)
```
|                 |                              |
| --------------- | ---------------------------- |
| tipo di ritorno | int                          |
| nome            | main                         |
| parametri       | void (cioè nessun parametro) |

<u>Il nome deve per forza essere "main" scritto tutto in minuscolo.</u>

Il tipo di ritorno è un intero (int), e il numero che viene restituito (ritornato) corrisponde al codice dell'errore: se vale 0 (zero) allora non ci sono stati errori, se è diverso da 0 (zero) allora il numero corrisponde all'errore. Siamo noi che decidiamo a che cosa corrisponde il numero dell'errore.

TUTTO IL CODICE VA SCRITTO DENTRO LE PARENTESI GRAFFE:

```c
int main(void) {
    //QUA CI VA IL CODICE DA ESEGUIRE
}
```
## 3. Codice dentro il main

```c
    printf("Hello\n World\n");
```

Questa è una chiamata alla funzione _printf_. Si può riconoscere che si chiama una funzione quando l'istruzione è della forma:

    [nome funzione] ( [parametri] );

Questa funzione è definita nella libreria **stdio.h** che abbiamo incluso all'inizio del programma e permette di stampare a video la stringa che gli stiamo passando.

Quindi, sapendo che il carattere "\n" vuol dire "andare a capo", questa chiamata a funzione stamperà a schermo :

```c
Hello
 World

```
Notare la riga vuota e lo spazio prima della parola "World".

```c
    return 0;
```

serve per uscire dalla funzione main e ritorna il valore 0 (cioè nessun errore).

---
[indietro](./index.md)
[indietro](/SecondoAnno/index.md)

---

**Indice**:
- [Stampare e Leggere nella console](#stampare-e-leggere-nella-console)
  - [Introduzione](#introduzione)
  - [Stringa](#stringa)
  - [Simboli speciali](#simboli-speciali)
- [printf - Stampa nella Console](#printf---stampa-nella-console)
  - [Stampare delle variabili](#stampare-delle-variabili)
    - [Spiegazione:](#spiegazione)
- [scanf - Leggere dalla Console](#scanf---leggere-dalla-console)
    - [Spiegazione:](#spiegazione-1)

# Stampare e Leggere nella console

## Introduzione

Per stampare o leggere dalla console serve includere all'inizio del programma la libreria standard **stdio.h**:

```c
#include <stdio.h>
```

in questa libreria sono state definite due funzioni per utilizzare la console in modo facile:
| funzione                                 | utilizzo                                                        |
| ---------------------------------------- | --------------------------------------------------------------- |
| [printf](#printf---stampa-nella-console) | Serve per stampare una [stringa](#stringa) nella console        |
| scanf                                    | Serve per leggere una valore inserito dall'utente nella console |



## Stringa
Una stringa è un testo che può essere visualizzato nella console: il testo è contenuto tra le doppie virgolette, ad esempio:


```c
"Questa è una stringa"
```

Una stringa può contenere qualsiasi carattere, alcuni caratteri se sono preceduti dalla backslash ( `\` ) hanno un significato particolare:
| Simbolo | Significato                        |
| ------- | ---------------------------------- |
| `\n`    | A capo                             |
| `\"`    | `"` (il simbolo doppia virgoletta) |
| `\\`    | `\` (il simbolo backslash)         |

## Simboli speciali

Utilizzeremo dei simboli speciali nelle stringhe per dire al computer cosa deve stampare o leggere:

| Simbolo | Utilizzo                                                   |
| ------- | ---------------------------------------------------------- |
| `%d`    | Leggere o stampare numeri interi (int) / caratteri  (char) |
| `%f`    | Leggere o stampare numeri decimali (float)                 |
| `%lf`   | Leggere o stampare numeri decimali lunghi (double)         |
| `%s`    | Leggere o stampare stringhe                                |

# printf - Stampa nella Console 

Per stampare nella console si usa la funzione **printf** definita nella libreria standard **stdio.h**.
Bisongna quindi ricordarsi di includere questa libreria all'inizio del programma.

La funzione viene chiamata (eseguita) così:

```c
printf("Questa è una stringa");
```
Cioè chiede come parametro n°1 la stringa da stampare. Inserendo questo codice nella funzione main del nostro programma verrà stampata la stringa tra le parentesi tonde nella console: quindi si vedrà stampato in console:

    Questa è una stringa

Se il nostro programma ha dentro il main questo codice:
```c
printf("Istruzione 1");
printf("Istruzione 2");
```
Stamperà nella console:

    Istruzione 1Istruzione 2

Questo perchè la funzione printf inizia a stampare la stringa dove ha terminato prima: quindi per lasciare uno spazio tra le due:
```c
printf("Istruzione 1");
printf(" Istruzione 2"); //Lascio uno spazio all'inizio
```
E stamperà:

    Istruzione 1 Istruzione 2

Per andare a capo si usa il carattere speciale `\n`, qua degli esempi:

```c
printf("Ciao\ncome stai?");
```
    Ciao
    come stai?
---

```c
printf("Ciao\n come\nstai?");
```

    Ciao
     come
    stai?

## Stampare delle variabili

Per stampare delle variabili bisogna usare i [simboli speciali](#simboli-speciali): la funzione **printf** _sostituisce i simboli speciali con **I VALORI PASSATI COME ARGOMENTI**_. 

**I parametri sono divisi con la virgola.**
<br/>Ad esempio: se si vuole stampare l'età di Marco:

```c

int eta_Marco = 16;
printf("L'età di Marco è %d anni" , eta_Marco);

```

Che stampaerè nella console:

    L'età di Marco è 16 anni

### Spiegazione:

Bisogna notare che la funzione *printf* prende sempre come primo parametro tra parentesi la stringa da stampare, poi, sostituisce tutti i [simboli speciali](#simboli-speciali) con i valori dei parametri passati **IN ORDINE**.

Quindi la funzione printf:
1. Prende la stringa `"L'età di Marco è %d anni"`
2. Prende il valore del secondo parametro: `eta_Marco`
3. Sostituisce il **PRIMO** simbolo speciale `%d` (numero intero) nella stringa con il **SECONDO** valore che ha preso dai parametri (quindi il valore di `eta_Marco` perchè il primo è la stringa)

Nel caso in cui abbiamo:

```c
char nome[] = "Giovanni";
int eta = 16;

printf("L'età di %s è %d anni", nome, eta);
```

Qua la funzione printf fa:
1. Prende la stringa `"L'età di %s è di %d anni"`
2. Sostituisce il simbolo `%s` con il valore del SECONDO parametro: cioè la variabile `nome`
3. Sostituisce il simbolo `%d` con il valore del TERZO parametro: cioè la variabile `eta`

Nella console viene quindi stampato:

    L'età di Giovanni è di 16 anni

# scanf - Leggere dalla Console

Per leggere i valori inseriti dall'utente nella console si usa la funzione **scanf** definita nella libreria standard **stdio.h**.
Bisongna quindi ricordarsi di includere questa libreria all'inizio del programma.

La funzione viene chiamata (eseguita) così:

```c
scanf("%d",&var);
```
Cioè chiede come parametro n°1 la stringa che contiene il simbolo speciale che rappresenta ciò che si vuole leggere: in questo caso sta chiedendo un numero intero (`%d`) e lo salva nella variabile `var`. 

Inserendo questo codice nella funzione main del nostro programma succederà che quando il computer esegue questa riga l'esecuzione si ferma e aspetta che l'utente inserisca un valore e prema INVIO per continuare.

Se il nostro programma ha dentro il main questo codice:
```c
int variabile_da_inserire;
scanf("%d",&variabile_da_inserire);
```
Aspetterà che l'utente inserisca un numero intero, prema INVIO e poi lo salva nella variabile ```variabile_da_inserire```.

**FARE ATTENZIONE AL SIMBOLO & PRIMA DEL NOME DELLA VARIABILE!!**<br/>
Questo simbolo (&) dice al computer: "scrivimi a quell'indirizzo il valore che l'utente inserisce".


Generalmente è utile utilizzare la funzione **scanf** insieme alla funzione **printf** per far capire all'utente cosa gli sta chiedendo il programma:

```c
int eta_Marco;
printf("Inserisci l'età di Marco:");

scanf("%d", &eta_Marco);//Si ferma qua ed aspetta che l'utente prema INVIO

printf("L'età di Marco è: %d", eta_Marco);
```
E stamperà:

    Inserisci l'età di Marco:

Ed attende che l'utente inserisca un valore e prema invio:
    
    Inserisci l'età di Marco:16
    L'età di Marco è: 16

Notare come invece nella funzione printf non bisogna usare il simbolo &.

### Spiegazione:

Bisogna notare che la funzione *scanf* prende sempre come primo parametro tra parentesi la stringa da che contiene il valore da richiedere, poi, aspetta in base al [simbolo speciale](#simboli-speciali) utilizzato che l'utente inserisca il valore nella console che poi salva nel parametro passato.

Quindi la funzione scanf:
1. Prende la stringa `"%d"`
2. Legge che il simbolo speciale è `%d` e quindi aspetta che l'utente inserisca un numero intero
3. Appena l'utente preme invio legge ciò che ha scritto, lo converte in base al simbolo e lo va a salvare all'indirizzo passato (notare che `&eta_Marco` vuol dire *indirizzo della variabile `eta_Marco`*)

---

[indietro](/SecondoAnno/index.md)
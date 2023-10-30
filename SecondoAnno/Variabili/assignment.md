[indietro](/SecondoAnno/Variabili/variabili.md)

---

## Assegnamento di Variabili (ASSIGNMENT)

*SOLO DOPO AVER DICHIARATO* una variabile gli si può assgnare (cioè impostare) un valore.

### Regola di assegnamento
L'assegnamento avviene con il simbolo "**<code>=</code>**" e deve seguire una delle 3 regole:

1.     [nome della variabile] = [valore];
    Assegnare un valore ad una variabile corrisponde a **COPIARE** il valore al suo interno;

2.     [nome della variabile] = [nome altra variabile];
    Questa istruzione dice al computer di **COPIARE** il valore della variabile a destra in quella a sinistra;

### Come funziona

L'ordine è ***IMPORTANTISSIMO!!!***. Qua sotto degli esempi validi di codice:

    int numero;
    numero = 9;

La variabile viene prima dichiarata e poi assegnata.

---

    int numero;
    numero = 9;

    //Fino a qua numero vale 9
    
    numero = 10;
    //Ora la variabile numero vale 10

La variabile viene dichiarata e poi assegnato il valore 9, successivamente viene impostato il nuovo valore 10

---

    int numero_1;
    numero_1 = 25;

    int numero_2;
    numero_2 = numero_1;

1. La variabile <code>numero_1</code> viene dichiarata e poi gli viene impostato il valore <code>25</code>
2. Viene dichiarata la variabile <code>numero_2</code> viene dichiarata e poi gli viene copiato il valore della variabile <code>numero_1</code>: quindi <code>numero_2</code> vale <code>25</code>

---

    int numero_1;
    int numero_2;

    numero_1 = 25;
    numero_2 = 10;

    numero_2 = numero_1;

    numero_1 = 17;

1. Vengono dichiarate le due variabili <code>numero_1</code> e <code>numero_2</code>
2. La variabile <code>numero_1</code> viene impostata a <code>25</code> e <code>numero_2</code> a <code>10</code>
3. Il valore della variabile <code>numero_1</code> viene **COPIATO** nella variabile <code>numero_2</code>. Quindi ora la variabile <code>numero_2</code> vale <code>25</code>.
4. La variabile <code>numero_1</code> viene impostata a <code>17</code> però **LA VARIABILE <code>numero_2</code> NON CAMBIA** e vale ancora <code>25</code>

### Dichiarazione e Assegnamento

Si può fare la dichiarazione di una variabile e l'assegnamento in una sola riga seguendo le regole di dichiarazione che si trovano [qua](./declaration.md).

La regola è:

    [tipo della variabile] [nome della variabile] = [valore]

E si scrive ad esempio:

    int numero = 5;

Successivamente per cambiare il valore si tratta come al solito:

    int numero = 5;

    numero = 6;

Oppure si può fare anche

    [tipo della variabile] [nome della variabile] = [altra variabile]

Come ad esempio:

    int numero_1 = 5;

    int numero_2 = numero_1;

    numero_1 = 6;

E il valore di <code>numero_1</code> viene **COPIATO** in <code>numero_2</code> e quindi <code>numero_2</code> vale <code>5</code> 

### Esempi tipi di assegnamento

#### int

    int numero = 5;

#### float e double

    float numero_f = 5.6;
    double numero_d = 5.65;

### char

    char lettera = 'a';

per il tipo char, poichè non è un numero ma un carattere, si deve mettere il valore tra le virgolette singole (' '). Oppure dato che abbiamo detto che char è comunque un intero (tipo int):

    char lettera = 97;

Vuol dire ancora 'a'.

### bool

    bool condizione_1 = 1; 

Dove 1 vuol dire "true" (vero), oppure:

    bool condizione_2 = 0;

dove 0 vuol dire "false" (falso), che sono gli unici due valori che può avere una variabile di tipo bool.

---
[indietro](/SecondoAnno/Variabili/variabili.md)
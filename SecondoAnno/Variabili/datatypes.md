[indietro](/SecondoAnno/Variabili/variabili.md)

---

## Tipo di una variabile (DATA TYPES)
In ***C*** c'è però da precisare una cosa:
ogni volta che si vuole creare una nuova "scatola" (varibile) bisogna dire al computer che cosa conterrà (il tipo).

I tipi permessi in C sono i seguenti:

| parola chiave | significato             | valori possibili                                                       |
| ------------- | ----------------------- | ---------------------------------------------------------------------- |
| int           | Numero intero           | ..., -2, -1, 0, +1, +2, ...                                            |
| float         | Numero decimale         | ..., -1.999999, -1.999998, ..., +1,999998, 1.999999, ...               |
| double        | Numero decimale preciso | ..., -1.999999999, ..., 1.999999999, ...                               |
| char          | Carattere               | ..., 'a','b','c', ... [Vedi tabella Ascii](https://www.asciitable.it/) |
| bool          | Booleano (Vero o Falso) | true, false                                                            |

### int

Il tipo _int_ indica un numero intero, cioè un numero, positivo o negativo, ma senza la virgola.

### float e double

I tipi _float_ e _double_ indicano un numero decimale, cioè un numero che può essere positivo o negativo e con la virgola. La differenza tra i due è solamente la precisione: i numeri float sono 32bit mentre i double 64bit, questo vuol dire che ad esempio:

    Il numero Pi greco con 100 cifre decimali vale:
    3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
        
    Rappresentato con nel computer diventa:
    se float  : 3.1415927410125732421875
    se double : 3.141592653589793115997963468544185161590576171875

[Vedi questo come stampare questi valori in C](./Lezione2/EsempioPIGreco/main.c)

Come si può vedere il double permette di avere molte più cifre decimali ed inoltre si perde la precisione sulle cifre decimali più piccole.

***!!! NON SI USA LA VIRGOLA MA IL PUNTO PER LE CIFRE DECIMALI!!!***

### char

Il tipo _char_ serve per indicare un carattere. Un carattere è un qualsiasi simbolo: può essere una lettera dell'alfabeto, un numero, un simbolo di punteggiatura (virgola, punto, due punti,...) o un carattere speciale.<br>
Per vedere quali sono i possibili caratteri [guarda la tabella Ascii](https://www.asciitable.it/) dove sono elencati tutti i codici che i computer associano ad un simbolo:

> Ad esempio la lettera 'a' (minuscola!) è associata al numero 97, la 'b' al 98, e così via...

***Nel linguaggio _C_ il tipo _char_ è equivalente a un intero: ogni carattere ha un numero associato.***

### bool

Il tipo _bool_ chiamato **boolean** ha solo due possibili valori: **true** oppure **false**.
Cioè rappresenta una condizione: o vero o falso ed è utilizzato per eseguire delle scelte.

    Se vero allora ...
    Se falso allora ...

Questo tipo può essere rappresentato anche come numero intero (int):

| bool  | valore numerico               |
| ----- | ----------------------------- |
| true  | qualsiasi numero diverso da 0 |
| false | 0                             |

---
[indietro](/SecondoAnno/Variabili/variabili.md)
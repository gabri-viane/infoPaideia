[indietro](/SecondoAnno/Variabili/variabili.md)

---

## Dichiarazione di Variabili (DECLARATION)
Prima di poter usare una variabile bisogna dire al computer che esiste. Gli si dice con l'istruzione di **dichiarazione**.
Dichiarare una variabile vuol dire dargli un posto nella memoria del computer (nella RAM).

> Si vedrà poi che ogni variabile che viene dichiarata, e quindi che ha un posto nella memoria del PC, ha un indirizzo (come l'indirizzo di casa) che la identifica.

### Regole di dichiarazione

Per dichiarare una variabile il computer ha bisogno di una specifica forma:

    [tipo della variabile] [nome_della_variabile];

1. Tipo della variabile:
   
   Le tipologie di variabili ammesse si trovano [qua](./datatypes.md) e definiscono cosa conterrà la variabile.

2. Nome della variabile:
   1. può contenere lettere maiuscole e minuscole, numeri e l'underscore "_";
   2. Non può mai iniziare con un numero: <code>1ciao</code> non è valido, mentre <code>c1ao</code> oppure <code>_1ciao</code> sono nomi validi;
   3. deve essere significativo: deve cioè aiutare a capire che cosa contiene la variabile;
   4. C è ***CASE-SENSITIVE*** cioè le maiuscole e minuscole fanno la differenza: <code>giorno</code> è diverso da <code>Giorno</code> (che quindi è diverso ad <code>GiOrnO</code>);

    ***!!! NON SI POSSONO AVERE VARIABILI CON LO STESSO NOME !!!***

### Come dichiarare una variabile

    REGOLA:
    [tipo della variabile] [nome_della_variabile];

Qua sotto c'è un elenco di esempi che rispettano la regola di dichiarazione detta prima: 

    int numero;
    int numero2;
    char LETTERA;
    float numero_decimale;
    double NumeroDecimale;
    bool conDiZioNE_1;

Per vedere come dichiarare una variabile guarda anche [qui](./Lezione2/Variabili/esempio3.c)

---
[indietro](/SecondoAnno/Variabili/variabili.md)
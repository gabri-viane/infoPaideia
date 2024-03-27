- [Dispensa C](#dispensa-c)
  - [Variabili](#variabili)
      - [Tipi di variabile](#tipi-di-variabile)
      - [Dichiarazione](#dichiarazione)
  - [Input e Output](#input-e-output)
    - [Output](#output)
      - [Stampare del testo](#stampare-del-testo)
      - [Stampare le variabili](#stampare-le-variabili)
      - [Esempio: Stampare un menù](#esempio-stampare-un-menù)
    - [Input](#input)
      - [Salvare i valori](#salvare-i-valori)
      - [Esempio: Come costruire un menù](#esempio-come-costruire-un-menù)
  - [Strutture di controllo](#strutture-di-controllo)
    - [If](#if)
    - [If Else](#if-else)
    - [Else-If](#else-if)
  - [Strutture iterative (cicli)](#strutture-iterative-cicli)
    - [Ciclo For](#ciclo-for)
    - [Ciclo While](#ciclo-while)
  - [Funzioni](#funzioni)

# Dispensa C
Qui trovate tutti gli argomenti trattati quest'anno.

## Variabili
Sono dei contenitori che hanno un nome che decidiamo noi e permettono di salvare un valore.

#### Tipi di variabile
I tipi di variabile servono per dire al computer che cosa contiene una variabile, i tipi che esistono sono:
| Tipo     | Significato                       |
| -------- | --------------------------------- |
| *int*    | Numero intero                     |
| *float*  | Numero decimale                   |
| *double* | Numero decimale preciso           |
| *char*   | Carattere                         |
| *bool*   | Valore logico (vero oppure falso) |

#### Dichiarazione
Per utilizzare una variabile bisogna prima di tutto dichiararla, la dichiarazione segue queste regola:

> tipo nome;

1. **tipo** : i tipi sono elencati [qua sopra](#tipi-di-variabile)
2. **nome** : il nome della variabile deve essere 
   - **UNICO** : non ci devono essere altre variabili con lo stesso nome
   - **SIGNIFICATIVO** : il suo nome deve aiutare a capire cosa contiene
   - Deve essere di sole lettere e numeri e _ (underscore), il nome di una  variabile non può mai iniziare con un numero
   - Le lettere maiuscole sono diverse da quelle minuscole

## Input e Output
L'input serve per permettere all'utente di interagire con il nostro programma: gli permettiamo di inserire dei valori che poi salviamo in delle variabili e utilizziamo.

L'output serve al nostro programma per "comunicare" con l'utente.


### Output
L'output va fatto con la funzione *printf*, questa funzione permette di stampare SOLO DEL TESTO, per stampare il valore delle variabili bisogna seguire delle regole aggiuntive.

#### Stampare del testo

Il testo deve essere sempre il primo parametro passato alla funzione:

```c
printf("Stampo del testo");
```

Per andare a capo bisogna inserire il carattere **\n**:

```c
printf("Stampo del testo\n e vado a capo");
```

#### Stampare le variabili
Per stampare il valore di una variabile bisogna seguire delle regole come per andare a capo: bisogna inserire un simbolo nella stringa:

I simboli sono in base al tipo di variabile che si vuole stampare:

| Tipo Variabile | Simbolo |
| -------------- | ------- |
| int            | %d      |
| float          | %f      |
| double         | %lf     |
| char           | %c      |
| bool           | %d      |

Per stampare ad esempio una variabile intera:
```c
int variabile = 5;
printf("La variabile vale %d",variabile);
```
Il simbolo inserito viene sostituito con il valore contenuto nella variabile, quindi in questo caso il simbolo ***%d*** viene sostituito dal valore contenuto nella variabile, l'output risulta:

> La variabile vale 5

#### Esempio: Stampare un menù 
Per stampare un menù con opzioni numerate basta seguire uno di questi due esempi:
1. Con printf multipli:
   ```c
   printf("Scegli un'opzione:\n");
   printf(" 1) Opzione 1\n");
   printf(" 2) Opzione 2\n");
   printf(" 3) Opzione 3\n");
   //...
   printf("Inserisci il numero:");
   ```
2. Con una sola printf:
   ```c
   printf("Scegli un'opzione:\n 1) Opzione 1\n 2) Opzione 2\n 3) Opzione 3\nInserisci il numero:");
   ``` 

### Input
L'input va fatto con la funzione *scanf*, questa funzione permette di leggere i valori INSERITI DALL'UTENTE e salvarli in una variabili del vostro codice.

#### Salvare i valori
Per chiedere e salvare il valore in una variabile bisogna seguire delle regole:

La scanf deve seguire queste regole:
> scanf("simbolo da usare", &variabile);

Dove:
- "simbolo da usare" dipende dalla lista qua sotto e deve essere messo tra virgolette
- Per dividere la stringa e la variabile si usa la virgola
- La variabile deve essere preceduta dalla "E commerciale": &

Si usano i simboli e in base al tipo di variabile che si vuole leggere si sceglie da questa tabella:

| Tipo Variabile | Simbolo |
| -------------- | ------- |
| int            | %d      |
| float          | %f      |
| double         | %lf     |
| char           | %c      |
| bool           | %d      |


1. Per leggere ad esempio una variabile intera:
```c
int variabile;
scanf("%d", &variabile);
```
2. Per leggere ad esempio una variabile double:
```c
double var;
scanf("%lf", &var);
```
Il simbolo inserito dipende da che valore dobbiamo inserire nella variabile, quindi in questo caso il simbolo ***%d*** viene usato per una variabile **int** mentre ***%lf*** per una variabile **double** come scritto nella tabella.

#### Esempio: Come costruire un menù 
Per stampare un menù con opzioni numerate basta  fare uno dei due metodi come [descritti prima](#esempio-stampare-un-menù):

   ```c
   printf("Scegli un'opzione:\n");
   printf(" 1) Opzione 1\n");
   printf(" 2) Opzione 2\n");
   printf(" 3) Opzione 3\n");
   //...
   printf("Inserisci il numero:");

   int scelta;
   scanf("%d",scelta);
   ```

   In questo modo l'opzione scelta (cioà il numero inserito dall'utente) viene salvato nella variabile **scelta**.
   
## Strutture di controllo


### If

### If Else

### Else-If

## Strutture iterative (cicli)
### Ciclo For

### Ciclo While

## Funzioni
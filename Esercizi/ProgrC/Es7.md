
## 7. Calcolo aree e perimetri
Scrivi un programma che permetta all'utente di selezionare una forma geometrica (quadrato, rettangolo, cerchio, triangolo rettangolo) e calcoli l'area e il perimetro della forma scelta.

### Spiegazione:
1. Nel main bisogna stampare il menù e permettere di scegliere l'operazione:

    Esempio di come  stampare un menù:
   ```c
   int operazione_scelta;
   printf("Scegli cosa vuoi fare:\n");
   printf(" 1) Quadrato\n");
   printf(" 2) Rettangolo\n");
   /**
   ...Continuate voi...
   **/
   printf("Inserisci numero opzione: ");
   scanf("%d",&operazione_scelta);
   ```
3. Scrivere una serie di if-else per controllare l'opzione scelta e chiamare la funzione che esegue il calcolo (che dovete scrivere voi):
   
   Esempio di come controllare l'operazione scelta
   
   ```c
   if(operazione_scelta==1){
        calcoloFormaQuadrato();
   }// altrimenti se operazione_scelta è 2 fai sottrazione...
   //...
   ```

4. Scrivere quindi le funzioni che eseguono i calcoli delle aree e perimetri prima del **main**:
   
   ```c

    void calcoloFormaQuadrato(){
        //chiedi i valori dei lati
        double lato1;
        printf("Inserisci il valore del lato 1:");
        scanf("%lf", &lato1);
        //chiedere l'altro lato e calcolare i valori
        //stampare i valori
    }

    //... continuate voi con le altre funzioni

   int main(){
    //...
    //Vostro codice del menù
    //...
    return 0;
   }
   ```

**ATTENZIONE: INCLUDERE LA LIBRERIA DI MATEMATICA PER POTER UTILIZZARE IL PI GRECO**
```c
#include <math.h>
```
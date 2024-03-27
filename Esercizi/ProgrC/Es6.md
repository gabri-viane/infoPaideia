## 6. Calcolatrice semplice
Scrivi un programma che accetta due numeri in input e permette all'utente di selezionare un'operazione aritmetica (addizione, sottrazione, moltiplicazione, divisione). Il programma dovrebbe quindi restituire il risultato dell'operazione.

### Spiegazione:
1. Nel main bisogna chiedere in input i due numeri
   
   Esempio di come chiedere in input un numero/valore double:
   ```c
   double valore;
   printf("Inserisci valore: ");
   scanf("%lf",&valore);
   ```
2. Dopodiché stampare il menù e permettere di scegliere l'operazione:

    Esempio di come  stampare un menù:
   ```c
   int operazione_scelta;
   printf("Scegli cosa vuoi fare:\n");
   printf(" 1) Somma\n");
   printf(" 2) Sottrazione\n");
   /**
   ...Continuate voi...
   **/
   printf("Inserisci numero opzione: ");
   scanf("%d",&operazione_scelta);
   ```
3. Scrivere una serie di if-else per controllare l'opzione scelta e chiamare la funzione che esegue il calcolo (che dovete scrivere voi), infine stampare il risultato:
   
   Esempio di come controllare
   
   ```c
   double risultato;
   if(operazione_scelta==1){
        risultato = calcoloSomma(valore1,valore2);
   }// altrimenti se operazione_scelta è 2 fai sottrazione...
   //...
   printf("Il risultato è %lf",risultato);
   ```

4. Scrivere quindi le funzioni che eseguono la somma, sottrazione, moltiplicazione e divisione prima del **main**:
   
   Ad esempio possono essere:
   ```c

    double calcoloSomma(double num1, double num2){
        //....
        return ...;
    }

    double calcoloSottrazione(double n1, double n2){
        //...
    }

    //... continuate voi

   int main(){
    //...
    //Vostro codice
    //...
    return 0;
   }
   ```

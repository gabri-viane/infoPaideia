#include <stdio.h>


//UNA FUNZIONE SI DEFINISCE COME:
// tipo_di_ritorno nome_della_funzione(...parametri...){
//   ...codice...
//   return: restituisce il valore voluto
// }


//void => che non ritorna nessun valore 
//int => restituisce un numero intero
//float => restituisce numero con la virgola
//double => restituisce numero con la virgola
//boolean => restituisce un valore vero o falso
void esempioStampa(){
    //qua il return non serve (tipo di ritorno è void)
}


int esempioFunzione1(){
    int variabile = 19;
    //Quando si ha il tipo di ritorno bisogna inserire:
    return variabile;//Si può restituire un valore/variabile
}//Questa funzione restituisce 19

int esempioFunzione2(){
    //Quando si ha il tipo di ritorno bisogna inserire:
    return 5;//Si può restituire un valore/variabile
}

void vaiACapo(){//Arrivo qua
    printf("\n");//4
}

void esempioFunzioneStampa(int valore){//valore = 10
    printf("%d",valore);//2
    vaiACapo();//3
}

int main(){
    esempioFunzioneStampa(10);//1
    return 0;
}
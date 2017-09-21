#include <stdio.h>

int main(){

int impar[50], sImpar, vImpar, valor, counters;

sImpar = 0;
valor = 50;
counters = valor;
    //for(counter = 0; counter <= valor; counter ++){
    while(valor >= 1){

        vImpar = valor % 2;

        if(vImpar != 0){
            impar[valor] = valor;
        }
        else{
            impar[valor] = 0;
        }

        printf("\nResult: %i", impar[valor]);

        valor = valor - 1;
    }

     while(counters >= 1){

        sImpar = sImpar + impar[counters];

        counters = counters - 1;
     }

    printf("\n\nResult: %i", sImpar);

return 0;
}

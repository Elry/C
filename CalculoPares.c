#include <stdio.h>

int main(){

int cont, numero;

cont = 10;

    while(cont <= 20){

        numero = cont%2;

        if(numero == 0){
        printf("Par %i\n", cont);
        }
        /*else{
            printf("Impar %i\n", cont);
        }*/

        cont++;
    }
return 0;
}

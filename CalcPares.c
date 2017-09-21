#include <stdio.h>

int main(){

int somaPar, numMax, validaPar, Counters, max;

somaPar = 0;

printf("Type a number: ");
scanf("%i",&numMax);

printf("Type a max number: ");
scanf("%i",&max);

int arrayPar[numMax];

Counters = numMax;

    while(numMax >= 1){
            validaPar = numMax % 2;

            if(validaPar == 0){
                arrayPar[numMax] = numMax;
                printf("\nResult: %i", arrayPar[numMax]);
            }
            else{
                arrayPar[numMax] = 0;
            }

        printf("\nArray %i", arrayPar[numMax]);
        numMax = numMax - 1;
    }

    while(Counters >= 1){
        somaPar = arrayPar[Counters] + somaPar;
        Counters = Counters - 1;
    }

    if(somaPar <= max){
        printf("\nSoma dos pares: %i", somaPar);
    }
return 0;
}

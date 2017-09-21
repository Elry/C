#include <stdio.h>

int main(){

int mes[12], mAnual, cMes, soma, counter, dCounter, swap;

soma = 0;

    for(cMes = 1; cMes <= 12; cMes++){
        printf("Digite o faturamento do mes %i: ", cMes);
        scanf("%i",&mes[cMes]);
    }
    for(cMes = 1; cMes <= 12; cMes++){
        soma = mes[cMes] + soma;
    }

    printf("\nSoma %i", soma);

    mAnual = soma/12;

    printf("\nMedia anual: %i", mAnual);

    for (counter = 0 ; counter < ( 12 - 1 ); counter++)
    {
        for (dCounter = 0 ; dCounter < 12 - counter - 1; dCounter++)
        {
            if (mes[dCounter] > mes[dCounter+1])
            {
                swap = mes[dCounter];
                mes[dCounter] = mes[dCounter+1];
                mes[dCounter+1] = swap;
            }
        }
    }

    for(cMes = 1; cMes <= 12; cMes++){
        printf("\nEm ordem crescente: %i", mes[cMes]);
    }
return 0;
}

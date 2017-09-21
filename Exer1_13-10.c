#include <stdio.h>

int main(){
    int pecas, vendedor[9], x, d;
    float total, totalV[9];
    d = 1;
    total = 0;

    printf("Insira quantidade de pecas: ");
    scanf("%i",&pecas);

    int pcs[pecas];

    for(x=0;x<7;x++){
        printf("Insiras peças vendidas no dia%i: ",d);
        scanf("%i",&pcs[x]);
        d++;
    }

    for(x=0;x<9;x++){
        printf("Insiras o preco do vendedor %i: ", x+1);
        scanf("%i",&vendedor[x]);
        totalV[x] = vendedor[x]*7;
    }

    for(x=0;x<6;x++){
        total = total + (pcs[x] * vendedor[x]);

    }

    printf("\nValor total : %f", total);

    for(x=0;x<9;x++){
        printf("\nValor total do vendedor %i %f: ",x+1 ,totalV[x]);
    }
}

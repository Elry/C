#include <stdio.h>

int main(){
    int matriz[3][3], a, i, vet[2];

    for(a=0;a<3;a++){
        for(i=0;i<3;i++){
            printf("Insira um valor para a linha %i e a coluna %i da matriz: ", (a+1), (i+1));
            scanf("%i",&matriz[a][i]);
        }
        vet[a] = 0;
    }

    vet[0] = matriz[0][0];
    vet[1] = matriz[1][1];
    vet[2] = matriz[2][2];

    for(a=0;a<3;a++){
        printf("\nDiagonal principal: %i", vet[a]);
    }
}

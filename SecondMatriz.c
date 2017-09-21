#include <stdio.h>

int main(){
    int i, a, size;

    printf("Insira o tamanho das matrizes: ");
    scanf("%i",&size);

    int quantidade[size][size], unitaria [size][size], resultado[size][size];

    for(a=0;a<size;a++){
        for(i=0;i<size;i++){
            printf("Insira o valor da linha %i e coluna %i para a matriz quantidade: ", (a+1), (i+1));
            scanf("%i",&quantidade[a][i]);

            printf("Insira o valor da linha %i e coluna %i para a matriz unitaria: ", (a+1), (i+1));
            scanf("%i",&unitaria[a][i]);

            resultado[a][i] = quantidade[a][i] + unitaria[a][i];
        }
    }

    printf("Matriz resultado:");
    for(a=0;a<size;a++){
        printf("\n");
        for(i=0;i<size;i++){
            printf("%i", resultado[a][i]);
            printf("   ");
        }
    }

}

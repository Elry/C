#include <stdio.h>

int main(){
    int semana[3], util[4], vendas[5][6], c, l;

    for(l=0;l<4;l++){
        for(c=0;c<5;c++){
            printf("Insira as vendas da semana %i para o item %i: ", (l+1), (c+1));
            scanf("%i",&vendas[l][c]);
        }
    }

    for(l=0;l<4;l++){
        semana[l] = 0;
    }
    for(c=0;c<5;c++){
        util[c] = 0;
    }

    for(c=0;c<5;c++){
        for(l=0;l<4;l++){
            util[c] = util[c] + vendas[l][c];
        }
    }
    for(l=0;l<4;l++){
        for(c=0;c<5;c++){
            semana[l] = semana[l] + vendas[l][c];
        }
    }

    for(l=0;l<5;l++){
        printf("\nUtil %i: %i", (l+1), util[l]);
    }
    for(c=0;c<4;c++){
        printf("\nSemana %i: %i", (c+1), semana[c]);
    }
}

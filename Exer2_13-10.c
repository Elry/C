#include <stdio.h>

int main(){
    int vet[10], x;

    printf("Digite 10 numeros inteiros: ");
    for(x=0;x<10;x++){
        scanf("%i",&vet[x]);
    }

    for(x=0;x<10;x++){
        if(vet[x]>=20){
            printf("\nA posicao %i é maior, ou igual a 20",x);
        }
        else{
            printf("\nNao encontrado");
        }
    }
}

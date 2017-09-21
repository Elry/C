#include <STDIO.H>
int opcao;
int main(){

    printf("Digite a informacao desejada\n");
    scanf("%i", &opcao);
    printf("Opcao digitada: %i", opcao);

    switch(opcao){

        case 1:
        printf("\nVoce digitou 1");
        break;

        case 2:
        printf("\nVoce digitou 2");
        break;

        default:
        printf("\nVoce nao digitou 1 ou 2");
    }
}

#include <stdio.h>

int main(){

int opc;

printf("Digite um numero: ");
scanf("%i",&opc);

    switch(opc){
        case 1:
        printf("Incluir");
        break;

        case 2:
        printf("Alterar");
        break;

        default:
        printf("Erro");
    }
return 0;
}

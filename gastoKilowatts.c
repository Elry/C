#include <stdio.h>

int main(){

    int gastoDiario;
    float kilowatt, conta, desconto;

    printf("Digite os watts diarios: ");
    scanf("%i",&gastoDiario);

    kilowatt = gastoDiario/1000;

    conta = (kilowatt*0.4)*30;

    if(kilowatt > 250){
        printf("\nConta: %f", conta);
    }

    if(kilowatt < 250){
        desconto = conta * 0.15;
        printf("\nPreco da conta, com desconto: %f", desconto);
    }
}

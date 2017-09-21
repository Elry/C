#include <stdio.h>

int main(){
    int i;
    float tarifa, saldo[12], saque, salario, salarioFinal, deposito;

    printf("Digite seu salario: ");
    scanf("%f",&salario);

    printf("Digite o valor do deposito: ");
    scanf("%f",&deposito);

    saldo[0] = deposito;

        for(i=1;i<13;i++){
            printf("\nMes %i", i);

            do {
                printf("\nSaque: ");
                scanf("%f",&saque);
            }while(saque > deposito);

            tarifa = (saque * 0.0038) + 28;

            saldo[i] = saldo[i-1] - (tarifa+saque);

            printf("\nValor da tarifa: %f", tarifa);

                if(saldo[i] > 0){
                    printf("\nSaldo: %f", saldo[i]);
                }

                if(saldo[i] == 0){
                    printf("\nSaldo nulo, adeus");
                    return 0;
                }
                if(saldo[i] < 0){
                    printf("\nSaldo negativo %f, adeus", saldo[i]);
                    return 0;
                }
        }
}


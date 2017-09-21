#include <stdio.h>

int main(){
    double total, totalGeral, salario;
    int ministerio, funcionario, rSalario;

    totalGeral = 0;
    rSalario = 0;
    funcionario = 1;
    ministerio = 1;
    total = 0;
    salario = 0;

    do{
        while (funcionario < 21){
            printf("\nInsira seu salario, funcionario %i: ", funcionario);
            scanf("%d",&salario);

            if(salario >  15000){
                rSalario++;
            }

            salario = salario - (salario/2);

            total = total + salario;

            funcionario++;
        }
        funcionario = 1;

        printf("\nTotal salarial do ministerio %i: %d", ministerio, total);

        totalGeral = totalGeral + total;

        ministerio++;

    }while(ministerio < 14);

    printf("\nQuantidade de funcionarios com salario maior que 15000: %i", rSalario);
    printf("\nTotal geral de todos os ministerios: %d", totalGeral);
}

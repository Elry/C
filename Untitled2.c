#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int idade[2], depto[2], i, a;
    double salario[2], total[2], sw;
    char nome[2][20], receba[20];

    for(i=0;i<3;i++){
        printf("Depeto: ");
        scanf("%i",&depto[i]);

        printf("Salario: ");
        scanf("%d",&salario[i]);

        printf("Digite seu nome: ");
        scanf("%s",&nome[i]);

        printf("\nDigite sua idade: ");
        scanf("%i",&idade[i]);

        total[i] =0;
    }

    for(i=0;i<3;i++){
        if(depto[i] == 1){
            total[0] = total[0] + salario[i];
        }

        else if(depto[i] == 2){
            total[1] = total[1] + salario[i];
        }

        else if(depto[i] == 3){
            total[2] = total[2] + salario[i];
        }
    }

    for(a=0;a<2;a++){
        for(i=0;i<1;i++){
            if(salario[i] > salario[i+1]){
                sw = salario[i];
                salario[i] = salario[i+1];
                salario[i+1] = sw;

                sw = idade[i];
                idade[i] = idade[i+1];
                idade[i] = sw;

                strcpy(receba, nome[i]);
                strcpy(nome[i], nome[i+1]);
                strcpy(nome[i+1], receba);
            }
        }
    }

    printf("\nDepartamento %i salario total: %d", depto[0], total[0]);
    printf("\nDepartamento %i salario total: %d", depto[1], total[1]);
    printf("\nDepartamento %i salario total: %d", depto[2], total[2]);
    printf("\nMenor idade: %i", idade[0], "\nFuncionario: %s", nome[0]);

}

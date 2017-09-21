#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int idade[4], depto[4], controle[4], i, a;
    double salario[4], total[4], sw;
    char nome[4][20], receba[20];

    for(i=0;i<2;i++){
        printf("Digite seu nome: ");
        scanf("%s",&nome[i]);

        printf("\nInsira seu salario: ");
        scanf("%d",&depto[i]);

        printf("\nDigite sua idade: ");
        scanf("%i",&idade[i]);

        printf("\nInsira o numero de seu departamento: ");
        scanf("%i",&depto[i]);

        total[i] = 0;
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

    printf("/nMenor idade: %i", idade[0], "/nFuncionario: %s", nome[0]);

}


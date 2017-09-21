#include <stdio.h>
#include <string.h>

int main(){

    int cod;
    float resultado, percent, salario;
    char nome[21], cargo[21];

    resultado = 0;
    percent = 0;
    salario = 0;
    cod = 0;

    printf("Digite seu nome");
    scanf("%s",&nome);

    do{
         printf("Digite o codigo do cargo");
         scanf("%i",&cod);
    }while(cod > 5 || cod <= 0);



    printf("Digite seu salario");
    scanf("%f",&salario);

    if(cod == 1){
        percent = 0.45;
        strcpy(cargo, "Secretario");
    }
    if(cod == 2){
        percent = 0.35;
        strcpy(cargo, "Contador");
    }
    if(cod == 3){
        percent = 0.20;
        strcpy(cargo, "ADM");
    }
    if(cod == 4){
        percent = 0.10;
        strcpy(cargo, "Programador");
    }
    if(cod == 5){
        percent = 0;
        strcpy(cargo, "Gerente");
    }

    resultado = salario - (salario*percent);

    printf("%s \n", nome);
    printf("Salario bruto: %f \n", salario);
    printf("Salario final: %f\n", resultado);
    printf("Cargo: %s\n", cargo);



return(0);
}

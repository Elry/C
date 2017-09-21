#include <stdio.h>

int main(){
    int dia, mes, ano, i, dia2, mes2, ano2;

    i = 0;

        printf("Digite o dia ");
        scanf("%i",&dia);

        printf(", mes ");
        scanf("%i",&mes);

        printf(" e ano ");
        scanf("%i",&ano);

        printf("Digite o dia ");
        scanf("%i",&dia2);

        printf(", mes ");
        scanf("%i",&mes2);

        printf(" e ano ");
        scanf("%i",&ano2);

    if(ano == ano2){
        if(mes == mes2){
            if(dia > dia2){
                printf("Data 1 e maior");
            }
            if(dia2 > dia){
                printf("Data 2 e maior");
            }
            else{
                printf("Datas iguais");
            }
        }
        if(mes > mes2){
            printf("Data 1 e maior");
        }
        else{
            printf("Data 2 e maior");
        }
    }
    if(ano > ano2){
        printf("Data 1 e maior");
    }
    else{
        printf("Data 2 e maior");
    }
}

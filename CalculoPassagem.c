#include <stdio.h>

int main(){

int kPercorrida, vEstadia, nEstadia, vKilometragem, nKilometragem;
float vPassagem, vParcela;

printf("Digite o valor da estadia: ");
scanf("%i",&vEstadia);

printf("\nDigite o valor da kilometragem: ");
scanf("%i",&vKilometragem);

printf("\nDigite o numero de estadias: ");
scanf("%i",&nEstadia);

printf("\nDigite o numero de kilometros: ");
scanf("%i",&nKilometragem);

vPassagem = (vEstadia*nEstadia)+(vKilometragem*nKilometragem);

    if(nEstadia > 10 && nKilometragem > 1000){
        vPassagem = vPassagem - (vPassagem*0.2);
    }

    else if(nKilometragem > 1000){
        vPassagem = vPassagem - (vPassagem*0.1);
    }

    else if(nEstadia > 10){
        vPassagem = vPassagem - (vPassagem*0.1);
    }

    if(vPassagem > 500){
            vParcela = vPassagem/2;

            printf("\nValor da passagem: %f", vPassagem);
            printf("\nValor das 2 parcelas: %f", vParcela);
    }

    else{
        printf("\nValor da passagem: %f", vPassagem);
    }

    return 0;
}

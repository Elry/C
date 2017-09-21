#include <stdio.h>

int main(){

float peso, altura, imc;

printf("Peso: ");
scanf("%f",&peso);

printf("Altura: ");
scanf("%f",&altura);

imc = peso/(altura*altura);

printf("IMC: %f", imc);

    if(imc < 18.5){
        printf("Vocês está anorexico");
    }
    else if(18.5 <= imc && imc <= 24.9 ){
        printf("\nPeso normal");
    }
    else if(25 <= imc && imc <= 29.9){
        printf("\nAcima do peso");
    }
    else if(30 <= imc && imc <= 34.9 ){
        printf("\nObesidade, grau 1");
    }
    else if(35 <= imc && imc <= 39.9 ){
        printf("\nObesidade grau 2");
    }
    else{
        printf("\nObesidade grau 3");
    }

return 0;
}

#include <stdio.h>

int main(){

int num1, num2, num3, aux;

printf("\nType a number: ");
scanf("%i",&num1);

printf("\nType another number: ");
scanf("%i",&num2);

printf("\nType the last number: ");
scanf("%i",&num3);

    if(num3 < num2){
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    if(num2 < num1){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if(num3 < num2){
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    printf("\nFirst %i", num1);
    printf("\nSecond %i", num2);
    printf("\nThird %i", num3);

return 0;
}

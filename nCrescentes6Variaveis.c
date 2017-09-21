#include <stdio.h>

int main(){

int num1, num2, num3, first, second, third;

printf("\nType a number: ");
scanf("%i",&num1);

printf("\nType another number: ");
scanf("%i",&num2);

printf("\nType the last number: ");
scanf("%i",&num3);

    if(num1 > num2 && num1 < num3){
        first = num3;
        second = num1;
        third = num2;
    }
    else if(num1 > num3 && num1 < num2){
        first = num2;
        second = num1;
        third = num3;
    }
    else if(num2 < num1 && num2 > num3){
        first = num1;
        second = num2;
        third = num3;
    }
    else if(num1 < num2 && num2 < num3){
         first = num3;
         second = num2;
         third = num1;
    }
    else if(num3 > num1 && num3 < num2){
        first = num2;
        second = num3;
        third = num1;
    }
    else if(num3 > num2 && num3 < num1){
        first = num1;
        second = num3;
        third = num2;
    }

    printf("\nFirst %i", first);
    printf("\nSecond %i", second);
    printf("\nThird %i", third);

return 0;
}

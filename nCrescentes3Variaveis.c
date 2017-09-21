#include <stdio.h>

int main(){

int num1, num2, num3;

printf("\nType a number: ");
scanf("%i",&num1);

printf("\nType another number: ");
scanf("%i",&num2);

printf("\nType the last number: ");
scanf("%i",&num3);

    if(num1>num2){

        if(num1>num3){
            printf("First %i", num1);

            if(num3>num2){
                printf("\nSecond %i", num3);
                printf("\nThird %i", num2);
            }
            else{
                printf("\nSecond %i", num2);
                printf("\nThird %i", num3);
            }
        }
        else{
            printf("First %i", num3);
            printf("\nSecond %i", num1);
            printf("\nThird %i", num2);
        }
    }
    else if(num2>num1){

         if(num2>num3){
            printf("First %i", num2);

            if(num3>num1){
                printf("\nSecond %i", num3);
                printf("\nThird %i", num1);
            }
            else{
                printf("\nSecond %i", num1);
                printf("\nThird %i", num3);
            }
        }
        else{
            printf("First %i", num3);
            printf("\nSecond %i", num2);
            printf("\nThird %i", num1);
        }
    }

return 0;
}

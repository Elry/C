#include <stdio.h>

int main(){

int num1, num2, num3;


printf("\nType the first number: ");
scanf("%i",&num1);

printf("\nType the second number: ");
scanf("%i",&num2);

printf("\nType the third number: ");
scanf("%i",&num3);

    if((num1 + num2 == num3) || (num1 + num3 == num2) || (num3 + num2 == num1)){
    printf("\nSum of two of them is equal of other of them");
    }
    /*
    else if(num1 + num3 == num2){
    printf("\nFirst plus third equal second");
    }
    else if(num3 + num2 == num1){
    printf("\nThird plus second equal third");
    }*/

return 0;
}

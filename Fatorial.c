#include <stdio.h>

int main(){

int num, fCounter, ft;

printf("Type a number: ");
scanf("%i",&num);

ft = num * (num - 1);

num = num - 1;

fCounter = 2;

    while(fCounter != 1){

        ft = (num - 1) * ft;

        num = num - 1;

        fCounter = num;

    }

    printf("Fatorial: %i", ft);

    return 0;
}

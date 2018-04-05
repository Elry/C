#include <stdio.h>

int main(){
    int i, j, n, m, count;

    printf("Please, enter values lesser than 1.000.000 and greater than 0.\n\n");

    count = 2;

    while(i > 1000000 || i <= 0 && j > 1000000 || j <= 0){
        printf("\nInsert the initial value of i: ");
        scanf("%i",&i);
        printf("\nInsert the initial value of j: ");
        scanf("%i",&j);

        if(i > 1000000 || i <= 0 && j > 1000000 || j <= 0){
            printf("\nInvalid.\n");
        }
    }

    while(i > 1 || j>1){
        printf("\nValue of i, j and their quantity: %i   %i   %i", i, j, count);

        n = i%2;
        m = j%2;

        if(n == 0 && i != 1){
            i = i/2;
            count++;
        }
        else if(n != 0 && i != 1){
            i = (i*3)+1;
            count++;
        }

        if(m == 0 && j != 1){
            j = j/2;
            count++;
        }
        else if(m != 0 && j != 1){
            j = (j*3)+1;
            count++;
        }
    }
    printf("\nValue of i, j and their quantity: %i %i %i", i, j, count);
}

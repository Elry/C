#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int rNumber, trys, UserNumber, count;

    count = 1;
    trys = 3;

    srand (time(NULL));
    rNumber = rand()%10+1;

    printf("Welcome to the random number generator game! You got 3 guesses!");

    while(count <= 3){
        printf("\n\nSo, what is the number generated? ");
        scanf("%i",&UserNumber);

        if(UserNumber == rNumber){
            printf("\n\nCongrats! You won with %i guesses left!", trys);
            break;
        }else if(UserNumber > rNumber){
            printf("\nYour number is bigger! You got %i more trys! ", trys);
            trys--;
        }else if(UserNumber < rNumber){
            printf("\nYour number is smaller! You got %i more trys! ", trys);
            trys--;
        }
        count++;
    }
    printf("\n\n\nThe number was: %i", rNumber);
    return 0;
}

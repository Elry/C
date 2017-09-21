#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

int num, trys, nUser, count;

count = 1;
trys = 3;

srand (time(NULL));
num = rand()%10+1;

printf("Welcome to the random number generator game!");

while(count <= 3){

        printf("\n\nYou got 3 guesses: ");
        scanf("%i",&nUser);

        if(nUser == num){
            printf("\n\nCongrats! You won with %i guesses left!", trys);
            break;
        }
        if(nUser > num){
            printf("\nYour number is bigger! You got %i more trys! ", trys);

            trys--;

        }
        if(nUser < num){
            printf("\nYour number is smaller! You got %i more trys! ", trys);

            trys--;

        }

        count++;
 }

 printf("\n\n\nThe number was: %i", num);

return 0;
}

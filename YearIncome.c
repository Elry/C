#include <stdio.h>

int main(){

    int month[12], YearAvarage, counterMonth, sum, counter, dCounter, swap;

    sum = 0;

    for(counterMonth = 1; counterMonth <= 12; counterMonth++){
        printf("Income from the month %i: ", counterMonth);
        scanf("%i",&month[counterMonth]);
    }
    for(counterMonth = 1; counterMonth <= 12; counterMonth++){
        sum = month[counterMonth] + sum;
    }

    printf("\nSum %i", sum);

    YearAvarage = sum/12;

    printf("\nYear avareage: %i", YearAvarage);

    for (counter = 0 ; counter < ( 12 - 1 ); counter++){
        for (dCounter = 0 ; dCounter < 12 - counter - 1; dCounter++){
            if (month[dCounter] > month[dCounter+1]){
                swap = month[dCounter];
                month[dCounter] = month[dCounter+1];
                month[dCounter+1] = swap;
            }
        }
    }
    for(counterMonth = 1; counterMonth <= 12; counterMonth++){
        printf("\nCrescent order: %i", month[counterMonth]);
    }    
    return 0;
}

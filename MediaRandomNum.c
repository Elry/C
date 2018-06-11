#include <stdio.h>

int main(){
    int random[30], counter, sum, checker;
    float average;
    sum = 0;

    srand (time(NULL));
    
    for(counter = 0; counter <= 29; counter++){
        random[counter+1] = (rand()%100)+1;
    }
    
    for(counter = 0; counter <= 29; counter++){
        printf("\nNumber: %i", random[counter+1]);
    }

    for(counter = 0; counter <= 29; counter++){
        sum = sum + random[counter+1];
    }

    printf("\nSum: %i", sum);

    average = sum/30;

    printf("\nAverage: %f", average);

    for(counter = 0; counter <= 29; counter++){
        checker = random[counter+1];

        if(checker > average){
            printf("\nNumber higher than the average: %i", checker);
        }
    }
    return 0;
}

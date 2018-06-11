#include <stdio.h>

int main(){
    int sheeps, counter;
    counter = 0;

    srand(time(NULL));
    sheep = rand()%100+1;

    while(counter <= sheeps){ counter++; }

    if(counter < 50){
        if(counter == 1){
            printf("Slept with 1 sheep.");
        }else{
            printf("Slept with %i sheeps.", counter);
        }
    }else{
        printf("Rest in peace.");
    }
    return 0;
}

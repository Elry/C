#include <stdio.h>

int main(){

int nCarne, Ccounter;

nCarne = 0;

srand (time(NULL));
nCarne = rand()%100+1;

    while(Ccounter <= nCarne){

       Ccounter++;
    }

    if(Ccounter < 50){
        if(Ccounter == 1){
            printf("Dormi com 1 carneirinho");
        }
        else{
            printf("Dormi com %i carneirinhos", Ccounter);
        }
    }
    else{
        printf("Durma em paz");
    }
return 0;
}

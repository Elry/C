#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int cpf[8], i, mult = 10;
    int d1, d2;
    d1 = 0;
    d2 = 0;

    printf("Insert CPF: ");
    for(i=0;i<9;i++){
        scanf("%i",&cpf[i]);
    }

    d1 = (cpf[0]*10)+(cpf[1]*9)+(cpf[2]*8)+(cpf[3]*7)+(cpf[4]*6)+(cpf[5]*5)+(cpf[6]*4)+(cpf[7]*3)+(cpf[8]*2);
    d1 = d1 % 11;

    d2 = (cpf[0]*11)+(cpf[1]*10)+(cpf[2]*9)+(cpf[3]*8)+(cpf[4]*7)+(cpf[5]*6)+(cpf[6]*5)+(cpf[7]*4)+(cpf[8]*3)+(d1*2);
    printf("\n%i", d2);
    d2 = d2 % 11;
    printf("\n%i", d2);


    if(d1 < 2){
        d1 = 0;
    }
    else{
        d1 = 11 - d1;
    }

    if(d2 < 2){
        d2 = 0;
    }
    else{
        d2 = 11 - d2;
        printf("\n%i\n",d2);
    }

    printf("CPF: ");
    for(i=0;i<9;i++){
        printf("%i",cpf[i]);
    }
    printf("\n %i \n %i", d1, d2);
}

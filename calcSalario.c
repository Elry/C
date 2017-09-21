#include <stdio.h>

int main(){

float INSS, IRF, sBruto, sLiquido;
int Work, sHora;

printf("Insert hours of work ");
scanf("%i",&Work);

printf("\nMoney per hour ");
scanf("%i",&sHora);

sBruto = Work * sHora;
printf("\nResult: %f", sBruto);

INSS = 0;
IRF = 0;

    if(sBruto <= 1400){
        INSS = 0.08;
    }
    else if(sBruto > 1400 && sBruto <= 2332){
        INSS = 0.09;
    }
    else if(sBruto > 2332 && sBruto <= 4664){
        INSS = 0.11;
    }

    if(sBruto >= 1904 && sBruto <= 2827){
        IRF = 0.075;
    }
    else if(sBruto > 2827 && sBruto <= 3751){
        IRF = 0.15;
    }
    else if(sBruto > 3751 && sBruto <= 4665){
        IRF = 0.225;
    }
    else if(sBruto > 4665){
        IRF = 0.275;
    }

printf("\nINSS %f", INSS);
printf("\nIRF %f", IRF);

    sLiquido = sBruto - ((sBruto * INSS)+ (sBruto * IRF));

printf("\nFinal result %.2f", sLiquido);

}


#include <stdio.h>

int main(){
    float INSS, IRF, sInitial, sFinal;
    int Work, sHour;

    printf("Insert hours of work ");
    scanf("%i",&Work);
    printf("\nMoney per hour ");
    scanf("%i",&sHour);

    sInitial = Work * sHour;
    printf("\nResult: %f", sInitial);
    
    //Setting INSS;
    if(sInitial <= 1400){
        INSS = 0.08;
    }else if(sInitial > 1400 && sInitial <= 2332){
        INSS = 0.09;
    }else if(sInitial > 2332 && sInitial <= 4664){
        INSS = 0.11;
    }

    //SettingIRF
    if(sInitial >= 1904 && sInitial <= 2827){
        IRF = 0.075;
    }else if(sInitial > 2827 && sInitial <= 3751){
        IRF = 0.15;
    }else if(sInitial > 3751 && sInitial <= 4665){
        IRF = 0.225;
    }else if(sInitial > 4665){
        IRF = 0.275;
    }

    printf("\nINSS %f", INSS);
    printf("\nIRF %f", IRF);

    sFinal = sInitial - ((sInitial * INSS)+ (sInitial * IRF));

    printf("\nFinal result %.2f", sFinal);
}

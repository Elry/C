#include <stdio.h>

int main(){    
    float rate, balance[12], sake, salary, FinalSalary, deposit;

    printf("Enter your salary: ");
    scanf("%f",&salary);

    printf("Enter the amout to deposit: ");
    scanf("%f",&deposit);

    balance[0] = deposit;

    for(int i = 1; i < 13; i++){
        printf("\nMonth %i", i);

        do{
            printf("\nSake: ");
            scanf("%f",&sake);
            if(sake > deposit){ printf("Not enough money."); }
        }while(sake > deposit);

        rate = (sake * 0.0038) + 28;
        balance[i] = balance[i-1] - (rate+sake);

        printf("\nRate value: %f", rate);

        if(balance[i] > 0){
            printf("\nBalance: %f", balance[i]);
        }else if(balance[i] == 0){
            printf("\nNull balance.");
        }else if(balance[i] < 0){
            printf("\nNegative balance %f.", saldo[i]);
        }
    }
    return 0;
}

#include <stdio.h>

int main(){
    int dailyExpense;
    float kilowatt, total, discount;

    printf("Daily watts spent: ");
    scanf("%i",&dailyExpense);

    kilowatt = dailyExpense/1000;

    total = (kilowatt*0.4)*30;

    if(kilowatt > 250){
        printf("\nBill: %f", total);
    }

    if(kilowatt < 250){
        discount = total * 0.15;
        printf("\nBill with discount: %f", ddiscount);
    }
}

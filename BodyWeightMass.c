#include <stdio.h>

int main(){
    float weight, height, bmi;

    printf("Insert your weight: ");
    scanf("%f",&weight);

    printf("Insert your height: ");
    scanf("%f",&height);

    bmi = weight/(height*height);

    printf("Your body mass index: %f", bmi);

    if(bmi < 18.5){
        printf("\nYou're anorexic");
    }else if(18.5 <= bmi && bmi <= 24.9 ){    
        printf("\nFit.");
    }else if(25 <= bmi && bmi <= 29.9){
        printf("\nOver weight.");
    }else if(30 <= bmi && bmi <= 34.9 ){
        printf("\nObesity lv 1.");
    }else if(35 <= bmi && bmi <= 39.9 ){
        printf("\nObesity lv 2.");
    }else{
        printf("\nObesity lv 3.");
    }

    return 0;
}

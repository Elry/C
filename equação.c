#include <stdio.h>
#include <math.h>

    int main(){

    int a, b, c;
    float x1, x2, x, delta;

    printf("Insira A ");
    scanf("%i",&a);

    printf("Insira B ");
    scanf("%i",&b);

    printf("Insira C ");
    scanf("%i",&c);


    delta = (b^2) - 4 * (a*c);
    printf("Delta: %f", delta);

    if(delta < 0){
        printf("\nNão existem raizes reais");
    }

    if(delta == 0){
        x = -b/(2*a);
        printf("\nX: %i", x);
    }

    if(delta > 0){
        x1 = (-b + (sqrt(delta)))/(2*a);
        x2 = (-b - (sqrt(delta)))/(2*a);

        printf("\nx1 %i e x2 %i", x1, x2);
    }


}

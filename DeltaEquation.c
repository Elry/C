#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float x1, x2, x, delta;

    printf("Insert A ");
    scanf("%i",&a);
    printf("Insert B ");
    scanf("%i",&b);
    printf("Insert C ");
    scanf("%i",&c);

    delta = (b^2) - 4 * (a*c);
    printf("Delta: %f", delta);

    if(delta < 0){
        printf("\nNull roots.");
    }else if(delta == 0){
        x = -b/(2*a);
        printf("\nX: %i", x);
    }else if(delta > 0){
        x1 = (-b + (sqrt(delta)))/(2*a);
        x2 = (-b - (sqrt(delta)))/(2*a);

        printf("\nx1 %i and x2 %i", x1, x2);
    }
}

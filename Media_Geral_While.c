#include <stdio.h>

int main(){
float nota1, nota2, media, CounterNotas, MediaGeral;
int counter;

counter=1;
CounterNotas=0;

    while(counter<=3){
        printf("Nota 1:");
        scanf("%f",&nota1);

        printf("Nota 2:");
        scanf("%f",&nota2);

        media=(nota1+nota2)/2;

        printf("\nMedia: %f\n", media);

        CounterNotas=CounterNotas+media;

        counter++;
    }

    MediaGeral=CounterNotas/3;

    printf("\nMedia Geral: %f", MediaGeral);

return 0;
}

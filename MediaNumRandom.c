#include <stdio.h>

int main(){

int random[30], counter, soma, verificador;
float media;
soma = 0;

srand (time(NULL));

    for(counter = 0; counter <= 29; counter++){
        random[counter+1] = (rand()%100)+1;
    }
    for(counter = 0; counter <= 29; counter++){
        printf("\nNumero: %i", random[counter+1]);
    }
    for(counter = 0; counter <= 29; counter++){
        soma = soma + random[counter+1];
    }

    printf("\nSoma: %i", soma);

    media = soma/30;

    printf("\nMedia: %f", media);

    for(counter = 0; counter <= 29; counter++){
        verificador = random[counter+1];

        if(verificador > media){
            printf("\nNumero maior que a media: %i", verificador);
        }
    }

return 0;
}

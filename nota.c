#include <stdio.h>

int main(){
    float nUm, nDois, nTres, media;
    char conc=" ";

    nUm=0;
    nDois=0;
    nTres=0;
    media=0;

    printf("Digite a nota 1  ");
    scanf("%f",&nUm);

    printf("Digite a nota 2  ");
    scanf("%f",&nDois);

    printf("Digite a nota 3  ");
    scanf("%f",&nTres);


    media = nUm+nDois+nTres;

    if(media>=8 && media<=10)
    {
        conc='A';

    }
    if(media>=7 && media<8)
    {
        conc='B';
    }
    if(media>=6 && media<7)
    {
        conc='C';
    }
    if(media>=5 && media<6)
    {
        conc='D';
    }
    if(media>=0 && media<5)
    {
        conc='E';
    }
    printf("media = %f \n",media);
    printf("conceito = %c",conc);

return(0);
}

 #include <stdio.h>

int main(){
    int nota1, nota2, contador, alunos;
    float media;

    contador=1;

    printf("Insira o numero de alunos: ");
    scanf("%i",&alunos);

    for(contador; contador<=alunos; contador++){

    printf("\nPrimeira nota do aluno %i: ", contador);
    scanf("%i",&nota1);


    printf("\nSegunda nota do aluno %i: ", contador);
    scanf("%i",&nota2);

    media=(nota1+nota2)/2;


    printf("\nMedia: %f", media);

    if(media>11 || media<0){
        printf("Erro");
    }

    else{
            if(media>=6){
                if(media!=10){
                    printf("\nAluno %i aprovado\n", contador);
                }

                else{
                    printf("\nParabens aluno %i \n", contador);
                }
            }

            else{
                if(media>=3){
                    printf("\nAluno %i em sub\n", contador);
                }

                else{
                    printf("\nAluno %i foi reprovado\n", contador);
                }
            }
        }
    }

return 0;
}

#include <stdio.h>

int main(){
    int nota1, nota2, contador, alunos, materias;
    float media;

    contador = 1;
    materias = 1;

    printf("Insira o numero de alunos: ");
    scanf("%i",&alunos);

    for(materias; materias <= 2; materias++){

        printf("\nMateria %i\n", materias);

        for(contador; contador<=alunos; contador++){

            printf("\nPrimeira nota do aluno %i na materia %i: ", contador, materias);
            scanf("%i",&nota1);

            printf("\nSegunda nota do aluno %i na materia %i: ", contador, materias);
            scanf("%i",&nota2);

            media=(nota1+nota2)/2;

            printf("\nMedia na materia %i: %f", materias, media);

            if(media>11 || media<0){
                printf("Erro");
                break;
            }
            else{
                if(media>=6){
                    if(media!=10){
                        printf("\nAluno %i aprovado na materia %i\n", contador, materias);
                    }
                    else{
                        printf("\nParabens aluno %i \n", contador);
                    }
                }
                else{
                    if(media>=3){
                        printf("\nAluno %i em sub na materia %i\n", contador, materias);
                    }
                    else{
                        printf("\nAluno %i foi reprovado na materia %i\n", contador, materias);
                    }
                }
            }
        }
        contador = 1;
    }

return 0;
}

#include <stdio.h>

int main(){
    int T1, T2, counter, students, class;
    float average;

    counter = 1;
    class = 1;

    printf("Insert the number of students: ");
    scanf("%i",&students);

    for(class; class <= 2; class++){
        printf("\nClass %i\n", class);

        for(counter; counter <= students; counter++){
            printf("\nInsert note for the Test 1: %i \nAnd class: %i", counter, class);
            scanf("%i",&T1);

            printf("\nInsert note for the Test 2 %i  \nAnd class %i: ", contador, materias);
            scanf("%i",&T2);

            average = (T1+T2)/2;

            printf("\nAverage in class %i: %f", class, average);

            if(average > 11 || average < 0){
                printf("Erro");
                break;
            }else{
                if(average >= 6){
                    if(average != 10){
                        printf("\nStudent %i passed in class %i\n", counter, class);
                    }else{
                        printf("\nCongratulations, student %i \n", counter);
                    }
                }else{
                    if(average >= 3){
                        printf("\nStudent %i underscored in class %i\n", counter, class);
                    }else{
                        printf("\nStudent %i dissaproved in class %i\n", counter, class);
                    }
                }
            }
        }
        counter = 1;
    }
    return 0;
}

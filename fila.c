/*  Existem partes dos sistemas operacionais que cuidam da ordem em que os programas devem ser executados.
    Por exemplo, em um sistema de computação de tempo compartilhado "time = string". Existe a necessidade de mater um conjunto
    de processos em fila, esperando para serem executados. Escreva um programa que seja capaz de ler solicitações.
    * Incluir novos processos na fila
    * Retirar da fila processos com maior tempo de espera.
    * Permitir exibir os processos na fila  cuja prioridade seja maior que o permitido
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
    int cod;
    char name[15];
    struct no *next, *back;
}no;

struct no *start, *end, *aux;

void main(){
    aux = NULL;
    end = NULL;
    start = NULL;

    menu();
}

void Enqueue(no **Queue){
    system("cls");
    int counter = 0;

    if(start == NULL){
        end = (no*)malloc(sizeof(no));
        aux = end;
        start = end;
        end->next = NULL;
        counter++;

        Enter();
    }

    else{
        if(counter >= 10){
            printf("Queue overflow");
            system("pause");
        }
        else{
            end = (no*)malloc(sizeof(no));
            aux->next = end;
            end->next = NULL;
            aux = end;
            counter++;

            Enter();
        }
        system("cls");
    }
}

void Enter(){
    printf("Enter value: ");
    scanf("%i",&aux->cod);
    printf("Enter value: ");
    scanf("%s",&aux->name);
}

void Seaqueue(no **Queue){
    system("cls");

    int op, proc, counter = 0, find = 0;

    if(start == NULL){
        printf("Empty queue\n\n");
        system("pause");
    }

    else{
        aux = start;

        printf("Enter the process number");
        scanf("%i",&proc);

        while(aux != NULL){
            counter++;

            if(aux->cod == proc){
                printf("Process found on %i", counter);
                find = 1;
                system("pause");
                break;
            }
            else{
                aux = aux->next;
            }
        }

        if(find == 0){
            printf("Process not found");
            system("pause");
        }
        /*
        do{
            printf("Type 1 to show from start to end\n");
            printf("Type 2 to show from end to start\n");
            printf("Type 3 to go back to the menu\n");
            scanf("%i",&op);

            if(op == 1){
                aux = start;

                printf("Result: \n");

                while(aux != NULL){
                    printf("Cod: %i\n", aux->cod);
                    printf("Name: %s\n", aux->name);

                    if(aux == end){
                        break;
                    }
                    aux = aux->next;
                }
                system("pause");
                system("cls");
            }

            else if(op == 2){
                system("cls");

                aux = end;

                printf("Result: \n");

                while(aux != NULL){
                    printf("Cod: %i\n", aux->cod);
                    printf("Name: %s\n", aux->name);

                    if(aux == start){
                        break;
                    }
                    aux = aux->back;
                }
            }

            else if(op == 3){
                system("cls");
                menu(&start);
            }
        }while(op != 1 || op != 2 || op != 3);
    }
    system("pause");
    system("cls");*/
    }
}

void Dequeue(no **Queue){
    if(start == NULL){
        printf("Queue underflow.");
        system("pause");
    }

    else{
        aux = start;
        start = start->next;
        free(aux);
        printf("Successfully removed.");
    }
    aux = end;
    system("pause");
    system("cls");
}

void menu(){
    int option;
    do{
        printf(" ___________________________\n");
        printf("|                           |\n");
        printf("|      Type 1 to Insert     |\n");
        printf("|      Type 2 to Show       |\n");
        printf("|      Type 3 to Remove     |\n");
        printf("|      Type 4 to Exit       |\n");
        printf("|___________________________|\n");

        scanf("%i",&option);

        if(option == 1){
            Enqueue(&start);
            system("cls");
        }
        else if(option == 2){
            Seaqueue(&start);
            system("cls");
        }
        else if(option == 3){
            Dequeue(&start);
            system("cls");
        }
        else if(option == 4){
            exit(EXIT_SUCCESS);
        }
        else{
            printf("Unknow values");
            system("cls");
        }
    }while(option != 1 || option != 2);
}

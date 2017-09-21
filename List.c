#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct no{
    int cod;
    char nome[15];
    struct no *next;
}no;

struct no *auxiliar, *corrente, *inicio;

void Entrada(){
    printf("Enter value: ");
    scanf("%i",&auxiliar -> cod);
    printf("\nType a name: ");
    scanf("%s",&auxiliar -> nome);
}

void insere(no **Lista){
    system("cls");

    if(inicio == NULL){
        corrente = (no*)malloc(sizeof(no));
        auxiliar = corrente;
        inicio = corrente;
        corrente->next = NULL;

        Entrada();
    }

    else{
        auxiliar = inicio;
        corrente = inicio;

        while(corrente->next != NULL){
            corrente = corrente->next;
            auxiliar = auxiliar->next;
        }
        corrente = (no*)malloc(sizeof(no));

        auxiliar->next = corrente;
        corrente->next = NULL;
        auxiliar = corrente;

        Entrada();
    }
   system("cls");
}

void search(no **Lista){
    system("cls");

    int find;
    int xcod;

    if(inicio == NULL){
        printf("Empty list\n");
        system("pause");
    }
    else{
        printf("Insert search: ");
        scanf("%i",&xcod);
        find = 0;
        auxiliar = inicio;

        while(auxiliar != corrente->next){
            if(auxiliar->cod == xcod){
                printf("1 result\n");
                find = 1;

                system("pause");
                system("cls");
                break;
            }
            else{
                auxiliar = auxiliar->next;
            }
        }
        /*while(auxiliar != NULL){
            if(auxiliar->cod == xcod){
                printf("1 result\n");
                find = 1;

                system("pause");
                system("cls");
                break;
            }
            else{
                auxiliar = auxiliar->next;
            }
        }*/
        auxiliar = corrente;
    }

    if(find == 0){
        printf("404: Not found\n");
        system("pause");
        system("cls");
    }
}

void exibe(no **Lista){
    system("cls");

    if (inicio == NULL){
        printf("Empty List\n\n");
    }

    else{
        auxiliar = inicio;

        printf("Result:\n\n");

        while(auxiliar != NULL){
            printf("Cod: %i\n", auxiliar->cod);
            printf("Name: %s\n\n", auxiliar->nome);

            if(auxiliar == corrente){
                break;
            }
            auxiliar = auxiliar->next;
        }
    }
    system("pause");
    system("cls");
}

void removing(no **Lista){
    system("cls");

    int rm, r = 0;

    if(inicio == NULL){
        printf("Empty list\n");
        system("pause");
    }

    else{
        printf("Type the cod to be deleted: ");
        scanf("%i",&rm);

        auxiliar = inicio;

        if(auxiliar->cod == rm){
            inicio = inicio -> next;

            free(auxiliar);
            r = 1;

            printf("Done\n\n");
            system("pause");
        }
        else{
            corrente = auxiliar->next;

            while(corrente != NULL){
                if(corrente->cod == rm){
                    auxiliar->next = corrente->next;

                    free(corrente);
                    r = 1;

                    printf("Done\n\n");
                    system("pause");

                    break;
                }

                else{
                    auxiliar = auxiliar->next;
                    corrente = corrente->next;
                }
            }
        }
    }
    system("cls");
}

void menu(){
    int option;

    do{
        printf("TYPE 1 TO INSERT\n");
        printf("\nTYPE 2 TO SHOW\n");
        printf("\nTYPE 3 TO SEARCH\n");
        printf("\nTYPE 4 TO REMOVE\n");
        printf("\nTYPE 5 TO EXIT\n");

        scanf("%i",&option);

        if(option == 1){
            insere(&inicio);
            system("cls");
        }
        else if(option == 2){
            exibe(&inicio);
            system("cls");
        }
        else if(option == 3){
            search(&inicio);
            system("cls");
        }
        else if(option == 4){
            removing(&inicio);
            system("cls");
        }
        else if(option == 5){
            exit(EXIT_SUCCESS);
        }
        else{
            printf("Unknow values");
            system("cls");
        }
    }while(option != 1 || option != 2);
}

void main(){
    auxiliar = NULL;
    corrente = NULL;
    inicio = NULL;

    menu();
}

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct no{
    int cod;
    char nome[15];
    struct no *next, *back;
}no;

struct no *auxiliar, *corrente, *inicio, *fim, *topo;

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
        corrente->back = inicio;
        fim = corrente;

        Entrada();
    }

    else{
        auxiliar = inicio;
        corrente = inicio;
        //fim = corrente;

        while(corrente->next != NULL){
            corrente = corrente->next;
            fim = corrente->next;
            auxiliar = auxiliar->next;
        }
        corrente = (no*)malloc(sizeof(no));

        fim = corrente;
        auxiliar->next = corrente;
        corrente->next = NULL;
        corrente->back = auxiliar;
        fim->next = NULL;
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

        while(auxiliar != NULL){
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
    int op;

    if (inicio == NULL){
        printf("Empty List\n\n");
    }

    else{
        do{
            printf("TYPE 1 TO SHOW FROM START TO END\n");
            printf("\nTYPE 2 TO SHOW FROM END TO START\n");
            printf("\nTYPE 3 TO MENU");

            scanf("%i",&op);

            if(op == 1){
                system("cls");

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

            else if(op == 2){
                system("cls");
                auxiliar = fim;

                printf("Result:\n\n");

                while(auxiliar != NULL){
                    printf("Cod: %i\n", auxiliar->cod);
                    printf("Name: %s\n\n", auxiliar->nome);

                    if(auxiliar == inicio){
                        break;
                    }
                    auxiliar = auxiliar->back;
                }
            }

            else if(op == 3){
                system("cls");
                menu(&inicio);
            }
        }while(op != 1 || op != 2);
    }
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
            inicio = inicio->next;

            free(auxiliar);
            r = 1;

            inicio->back = NULL;

            printf("Removed in the beginning\n\n");
            system("pause");
        }

        else if(r = 0 && fim->cod == rm){
            auxiliar = fim;

            fim = fim->back;
            fim->next = NULL;

            free(auxiliar);

            printf("Removed in the end of the list\n\n");
            system("pause");
        }

        else{
            corrente = auxiliar->next;

            while(corrente != NULL){
                if(corrente->cod == rm){
                    auxiliar = corrente->next;
                    auxiliar->back = corrente->back;
                    auxiliar = corrente->back;
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
        printf(" _________________________\n");
        printf("|                         |\n");
        printf("|      TYPE 1 TO INSERT   |\n");
        printf("|      TYPE 2 TO SHOW     |\n");
        printf("|      TYPE 3 TO SEARCH   |\n");
        printf("|      TYPE 4 TO REMOVE   |\n");
        printf("|      TYPE 5 TO EXIT     |\n");
        printf("|_________________________|\n");

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

void mah(no **Topando){
    int c = 0;
    if(topo == NULL){
        topo = (no*)malloc(sizeof(no));
        auxiliar = topo;
        topo->back = NULL;
        topo->next = NULL;
        c++;
        Entrada();
    }

    else{
        if(c >= 5){
            printf("stack overflow");
            system("pause");
        }

        else{
            topo = (no*)malloc(sizeof(no));
            auxiliar->next = topo;
            topo->back = auxiliar;
            topo->next = NULL;
            auxiliar = topo;
            c++;
            Entrada();
        }
    }
}

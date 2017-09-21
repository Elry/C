#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct tree{
    int cod;
    struct tree *next, *back, *up;
}tree;

struct tree *raiz, *aux, *corrente;

void enterdata(){
    printf("Insert a cod");
    scanf("%i",&corrente->cod);

    menu();
}

void next(){

    while(corrente->next != NULL){
        corrente = corrente->next;
        aux = aux->next;

    }

    corrente = (tree*)malloc(sizeof(tree));

    aux->next = corrente;

    enterdata();
}

void back(){

   while(corrente->back != NULL){
        corrente = corrente->back;
        aux = aux->back;

    }

    corrente = (tree*)malloc(sizeof(tree));

    aux->back = corrente;

    enterdata();
}

void up(){

   while(corrente->up != NULL){
        corrente = corrente->up;
        aux = aux->up;

    }

    corrente = (tree*)malloc(sizeof(tree));

    aux->up = corrente;

    enterdata();
}

void insere(tree **ar){
    int option = 0;
    system("cls");

    corrente = (tree*)malloc(sizeof(tree));

    enterdata();

    corrente->back = NULL;
    corrente->next = NULL;
    corrente->up = NULL;

    if(raiz == NULL){
        raiz = corrente;

        printf("Registro inserido");
        system("pause");
    }

    else{
        aux = raiz;

        print("Deseja posicionar  o registro em qual sentido <B>=1, <N>=2, <U>=3");
        scanf("%d",&option);

        if(option == 1){
            back(raiz);
        }
        else if(option == 2){
            next(raiz);
        }
        else if(option == 3){
            up(raiz);
        }

        else{
            printf("Invalid option");
            system("pause");
        }
    }
}

void menu(){
    int option = 0;

    do{
        printf("Digite 1 para inserir");
        scanf("%i",&option);


        if(option == 1){
            insere(raiz);
            system("cls");
        }
        else{
            printf("Unknow values");
            system("cls");
        }

    }while(option != 1);
}

void main(){
    aux == NULL;
    raiz ==  NULL;
    corrente == NULL;

    menu();
}

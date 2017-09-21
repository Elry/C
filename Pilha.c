#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct pile{
    int cod;
    char nome[15];
    struct pile *next, *back;
}pile;

struct pile *aux, *start, *topo;

void Entrada(){
    printf("Enter value: ");
    scanf("%i",&aux->cod);
    printf("\nType a name: ");
    scanf("%s",&aux->nome);
}

void insert(pile **Topando){
    int c = 0;
    if(topo == NULL){
        topo = (pile*)malloc(sizeof(pile));
        aux = topo;
        start = topo;
        topo->back = NULL;
        topo->next = NULL;
        c++;
        Entrada();
    }

    else{
        if(c >= 5){
            printf("Stack overflow");
            system("pause");
        }

        else{
            topo = (pile*)malloc(sizeof(pile));
            aux->next = topo;
            topo->back = aux;
            topo->next = NULL;
            aux = topo;
            c++;
            Entrada();

            system("pause");
        }
    }
}

void del(pile **Topando){
    if(topo == NULL){
        printf("Stack undeflow.\n");
        system("pause");
    }
    else{
        aux = topo;
        topo = topo->back;
        topo->next = NULL;

        printf("Successfully removed.\n");
         free(aux);


        system("pause");
    }
}

void sea(pile **Topando){
    int xcod;
    int found = 0;

    if(topo == NULL){
        printf("Stack undeflow.\n");
        system("pause");
    }
    else{
        printf("Insert the item to be removed: ");
        scanf("%i",&xcod);

        if(xcod == topo->cod){
            found++;

            del(&start);
        }
        if(found == 0){
            printf("404: Not found\n");
            system("pause");
        }
    }
}

void main(){
    int option;

    do{
        printf(" ___________________________\n");
        printf("|                           |\n");
        printf("|      Type 1 to insert     |\n");
        printf("|      Type 2 to delete     |\n");
        printf("|Type 3 to search and delete|\n");
        printf("|      Type 4 to exit       |\n");
        printf("|___________________________|\n");

        scanf("%i",&option);

        if(option == 1){
            insert(&start);
            system("cls");
        }
        else if(option == 2){
            del(&start);
            system("cls");
        }
        else if(option == 3){
            sea(&start);
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

    //menu();
}
/*
void menu(){
        aux = NULL;
    start = NULL;
        topo = NULL;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int code;
    char name[10];
    struct node *up, *down;    
}node;

struct node *aux, *current;

int limit = 0;

void enterData(){
    printf("Enter the code: ");
    scanf("%i", &aux->code);
    printf("Enter name: ");
    scanf("%s", &aux->name);    
}

int push(node **pile){
    if (current == NULL){
        current->up = NULL;
        current->down = NULL;
        aux = current;
        limit++;
        enterData();
    }else if(limit <= 10){
        current = (node*)malloc(sizeof(node));
        current->up = NULL;
        current->down = aux;
        aux->up = current;
        aux = current;
        enterData();
        limit++;
    }else{
        system("cls");
        printf("The pile is full, please pop something before pushing anything.\n\n");
    }
}

int top(node **pile){
    if(current == NULL){
        system("cls");
        printf("The pile is empty.\n\n");
    }else{
        system("cls");
        printf("\n\nCode: %i\nName: %s\n\n", current->code, current->name);
    }
}

int pop(node **pile){    
    if(current == NULL){
        system("cls");
        printf("The pile is empty.\n\n");
    }else{
        if(current->down == NULL && current->up == NULL){
            printf("The last element was removed.");
            system("pause");
        }else{
            aux = current;
            current = current->down;
            current->up = NULL;

            free(aux);
            limit--;
        }
    }
}

int main(){
    current = NULL;
    aux = NULL;    
    int option;

    do{
        printf("[1] Push data.\n");
        printf("[2] Top data. \n");
        printf("[3] Pop data. \n");        
        printf("[0] Exit program.\n");
        scanf("%d", &option);

        switch(option){
            case 1:
                push(&current);
                break;

            case 2:
                top(&current);
                system("pause");
                break;

            case 3:
                pop(&current);
                system("pause");
                break;

            case 0:
                exit(0);

            default:
                system("pause");
        }
    }while(option != 0);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int code;
    char name[10];
    struct no *next;
}no;
struct no *current, *aux, *start;

void enterData(){
    printf("Insert code: ");
    scanf("%d", &current->code);
    printf("Insert name: ");
    scanf("%s", &current->name);
}

int insert(no**list){
    if(start == NULL){
        current = (no*)malloc(sizeof(no));
        current->next = NULL;
        start = current;
        aux = current;
        enterData();
    }else{
        current = (no*)malloc(sizeof(no));
        aux->next = current;
        current->next = NULL;
        aux = current;
        enterData();
    }
}

int show(no**list){
    if(start == NULL){
        printf("\n\nThere is no data here yet...\n\n");
    }else{
        aux = start;
        while(aux->next != NULL){
            printf("\n\nCode: %d \nName: %s\n\n", aux->code, aux->name);
            aux = aux->next;
        }
        printf("\n\nCode: %d \nName: %s\n\n", aux->code, aux->name);
    }
}

int search(no**list){
    char searchName[10];
    int found;
    found = 0;

    if(start == NULL){
        printf("\n\nThere is no data here yet...\n\n");
    }else{
        printf("\n\nInsert search name: ");
        scanf("%s", &searchName);

        aux = start;

        while(aux != NULL){
            if(strcmp(aux->name, searchName)==0){
                found = 1;
                break;
            }else{
                aux = aux->next;
            }
        }

        if(found == 0){
            printf("\n\nName searched was not found.\n\n");
        }else{
            printf("\n\nFound! Name: %s \nCode: %d\n\n", aux->name, aux->code);
        }
    }
}

int deletes(no**list){
    char searchName[10];
    int found = 0;

    if(start == NULL){
        printf("\n\nThere is no data here yet...\n\n");
    }else{
        printf("\n\nInsert search name to delete: \n\n");
        scanf("%s", &searchName);

        aux = start;

        if(strcmp(aux->name, searchName)==0){
            start = start->next;
            free(aux);
            found = 1;
        }else{
            current = aux->next;

            while(current != NULL){
                if(strcmp(current->name, searchName)==0){
                    aux->next = current->next;
                    free(current);
                    found = 1;
                    break;
                }else{
                    aux = current;
                    current = current->next;
                }
            }
        }

        if(found == 0){
            printf("\n\nName searched was not found.\n\n");
        }else{
            printf("\n\nFound and deleted.\n\n", aux->name, aux->code);
        }

        current = start;

        while(current->next != NULL){
                current = current->next;
        }
    }
}


int main(){
    current = NULL;
    aux = NULL;
    start = NULL;

    int op;

    do{
        printf("[1] Insert data.\n");
        printf("[2] Show data. \n");
        printf("[3] Search data. \n");
        printf("[4] Remove data. \n");
        printf("[0] Exit program.\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                insert(&start);
                break;

            case 2:
                show(&start);
                system("pause");
                break;

            case 3:
                search(&start);
                system("pause");
                break;

            case 4:
                deletes(&start);
                system("pause");
                break;

            case 0:
                exit(0);

            default:
                printf("End.");
                system("pause");
        }
    }while(op != 0);
}

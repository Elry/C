#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int code;
    char name[10];
    struct no *next, *back;
}no;
struct no *start, *current, *aux, *end;

void enterData(){
    int found;
    found = 0;

    printf("Insert code: ");
    scanf("%i", &current->code);
    printf("Insert name: ");
    scanf("%s", &current->name);
}

int insert(no **list){
    if(start == NULL){
        current = (no*)malloc(sizeof(no));
        current->next = NULL;
        current->back = NULL;
        aux = current;
        start = current;
        end = current;
        enterData();
    }else{
        aux = end;
        current = (no*)malloc(sizeof(no));
        current->back = aux;
        current->next = NULL;
        aux->next = current;
        aux = current;
        end = current;
        enterData();
    }
}

int show(no **list){
    if(start == NULL){
        system("cls");
        printf("Empty list.\n\n");
    }else{
        aux = start;
        while(aux != NULL){
            printf("\n\nCode: %i\nName: %s\n\n", aux->code, aux->name);
            aux = aux->next;
        }        
    }
}

int search(no **list){
    int found;
    char search[10];
    found = 0;

    if(start == NULL){
        system("cls");
        printf("Empty list.\n\n");
    }else{
        printf("Insert name to search: ");
        scanf("%s", &search);

        aux = end;
        while(aux != NULL){
            if(strcmp(aux->name, search) == 0){
                found++;
                break;
            }else{
                aux = aux->back;
            }
        }

        if(found == 0){
            system("cls");
            printf("Name not found.\n\n");
        }else{
            system("cls");
            printf("Found! Name: %s \nCode: %i\n\n", aux->name, aux->code);
        }
    }
}

int delete(no **list){
    int found;
    char search[10];
    found = 0;    

    if(start == NULL){
        system("cls");
        printf("Empty list.\n\n");
    }else{
        system("cls");
        printf("Insert name to delete: ");
        scanf("%s", &search);

        aux = end;

        while(aux != NULL){
            if(strcmp(aux->name, search) == 0){
                if(aux == end){
                    if(end->back == NULL){ 
                        end = NULL;
                        start = NULL;
                    }
                    else{
                        end = end->back;
                        end->next = NULL;
                    }
                }else if(aux == start){
                    start = start->next;
                    start->back = NULL;
                }else{
                    current = aux->back;
                    current->next = aux->next;
                }
                free(aux);
                found++;
                break;
            }else{
                aux = aux->back;
            }
        }

        if(found == 0){
            system("cls");
            printf("Name not found.\n\n");
        }else{
            system("cls");
            printf("Found and deleted.\n\n");
        }
    }
}

int main(){
    start = NULL;
    current = NULL;
    aux = NULL;
    end = NULL;

    int option;

    do{
        printf("[1] Insert data.\n");
        printf("[2] Show data. \n");
        printf("[3] Search data. \n");
        printf("[4] Remove data. \n");
        printf("[0] Exit program.\n");
        scanf("%d", &option);

        switch(option){
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
                delete(&start);
                system("pause");
                break;

            case 0:
                exit(0);

            default:
                system("pause");
        }
    }while(option != 0);
}
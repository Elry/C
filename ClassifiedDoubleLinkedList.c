#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int code;
    char name[10];
    struct no *next, *back;
}no;
struct no *start, *current, *aux, *aux2, *end;

void enterData(){
    int found;
    found = 0;

    printf("Insert code: ");
    scanf("%i", &current->code);
    printf("Insert name: ");
    scanf("%s", &current->name);
}

int insert(no **list){    
    int found = 0;
    current = (no*)malloc(sizeof(no));
    enterData();
    aux = start;
    found = 0;
    if(start == NULL){
        start = current;
        aux = current;
        end = current;
        current->back = NULL;
        current->next = NULL;
        found++;
    }else{
        if(strcmp(current->name, aux->name) == -1){
            current->next = aux;
            aux->back = current;
            current->back = NULL;
            start = current;
            found++;
        }else{
            aux2 = aux->next;
            while(aux2 != NULL){
                if(strcmp(current->name, aux->name) == 1){
                    if(strcmp(current->name, aux2->name) == -1){
                        aux->next = current;
                        current->next = aux2;
                        aux2->back = current;
                        current->back = aux;
                        found++;
                        break;
                    }else{
                        aux = aux->next;
                        aux2 = aux2->next;
                    }
                }
            }
        }
        if(found == 0){
            if(strcmp(current->name, aux->name) == 1){
                aux->next = current;
                current->back = aux;
                current->next = NULL;
                end = current;
            }
        }
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
                    current = current->next;
                    current->back = aux->back;
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

/*
        current = (no*)malloc(sizeof(no));
        current->next = NULL;
        current->back = NULL;
        aux = current;
        start = current;
        end = current;        
        enterData();
    }else{        
        current = (no*)malloc(sizeof(no));
        enterData();
        
        if(strcmp(current->name, start->name) == -1){
            current->next = start;
            current->back = NULL;
            start->back = current;
            start = current;
        }else{
            aux = start;
            while(aux != NULL){
                if(strcmp(current->name, aux->name) == -1){
                    printf("Lesser");
                    current->next = aux;
                    current->back = aux->back;
                    aux->back = current;
                    aux = current->back;
                    aux->next = current;
                    break;
                }else if(strcmp(current->name, aux->name) == 1){
                    current->back = aux;
                    current->next = aux->next;
                    aux->next = current;
                    if(current->next != NULL){
                        aux = current->next;
                        aux->back = current;
                    }
                    break;
                }else{
                    if(aux->next == NULL){
                        end = aux;
                    }
                    aux = aux->next;                    
                }
            }
        }
    }*/
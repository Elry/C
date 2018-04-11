#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int code;
    char name[10];
    struct no *next;
}no;
struct no *current, *aux, *aux2, *start;

void enterData(){
    int found;
    found = 0;

    printf("Insert code: ");
    scanf("%d", &current->code);
    printf("Insert name: ");
    scanf("%s", &current->name);

    aux2 = start;

    if(start->next != NULL){
        while(aux2->next != NULL){
            if(aux2->code == current->code){
                found = 1;
                free(current);
                aux->next = NULL;
                break;
            }else{
                aux2 = aux2->next;
                found = 0;

                if(start->code > current->code){
                    printf("\n\nStart is higher than inserted.\n\n");
                    current = start;
                    aux->next = current;
                    start = aux;
                    current->next = NULL;
                    break;
                }else if(aux2->code > current->code){
                    printf("\n\nThe number before is higher than the inserted.\n\n");
                    printf("\n\n%d current\n\n", current->code);
                    printf("\n\n%d aux\n\n", aux->code);
                    printf("\n\n%d aux2\n\n", aux2->code);

                    aux = aux2->next;
                    current->next = aux;
                    aux = current;
                    current = current->next;
                    aux2->next = aux;

                    printf("\n\n%d current\n\n", current->code);
                    printf("\n\n%d aux\n\n", aux->code);
                    printf("\n\n%d aux2\n\n", aux2->code);
                    break;
                }
            }
        }

        if (found == 1){
            printf("\n\nCod already inserted, try again.\n\n");
        }

        aux = current;
    }
}

int insert(no**list){
    if(start == NULL){
        current = (no*)malloc(sizeof(no));
        current->next = NULL;
        start = current;
        aux = current;
        aux2 = current;
        enterData();
    }else{
        current = (no*)malloc(sizeof(no));
        current->next = NULL;
        aux->next = current;

        enterData();
    }
}

int show(no**list){
    if(start == NULL){
        printf("\n\nThere is no data here yet...\n\n");
    }else{
        aux = start;

        if(start->next == NULL){
            printf("\n\nCode: %d \nName: %s\n\n", aux->code, aux->name);
        }else{
            while(aux->next != NULL){
                printf("\n\nCode: %d \nName: %s\n\n", aux->code, aux->name);
                aux = aux->next;
            }
            printf("\n\nCode: %d \nName: %s\n\n", aux->code, aux->name);
        }
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
                    aux2->next = NULL;
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

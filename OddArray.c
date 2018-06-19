#include <stdio.h>
#include <stdlib.h>

int main(){
    int* odds(int l, int r){
        int i; 
        int count = 0;
        int size;

        size = (r - l) + 1;
        int arr[size];

        for(i = 0; i < size; i++){
            if(l < r){
                arr[i] = l;
                l++;
            }else{
                arr[i] = r;
            }
        }

        for(i = 0; i < size; i++){
            if(arr[i] % 2 != 0){
                count++;
            }
        }
        
        int* oddsArr = (int*)malloc(sizeof( *oddsArr));

        for(i = 0; i < size; i++){
            if(arr[i] % 2 != 0){
                oddsArr[i] = arr[i];
                printf("\n%i", oddsArr[i]);
            }
        }
        
        return oddsArr;
        free(oddsArr);    
    }

    int right, left;
    
    printf("Insert the left number: ");
    scanf("%i", &left);
    printf("Insert the right number: ");
    scanf("%i", &right);

    odds(left, right);
}
#include <stdio.h>

int main(){
    //Number of rows, number of columns, row counter, column counter
    int nRows, mCols, nCounter, mCounter;

    //Char value holder
    char gValue = ' ';

    //Mine field size verification and input
    while(nRows <= 0 || mCols > 100){
        printf("\nInsert the number of lines: ");
        scanf("%i",&nRows);
        printf("\nInsert the number of columns: ");
        scanf("%i",&mCols);

        if(nRows <= 0){
            printf("\nInvalid number of lines. The minimum is 1.\n");
        }
        if(nRows <= 0){
            printf("\nInvalid number of columns. The maximum is 100.\n");
        }
    }

    //Mine filed array, mines locations numbers
    char fMines[nRows][mCols];
    int fNumbers[nRows][mCols];

    //User filling the mines location and the quantity of mines into the mine field
    for(nCounter = 0; nCounter < nRows; nCounter++){
        for(mCounter = 0; mCounter < mCols; mCounter++){
            printf("\nInsert * for mine and . for safe spot:");
            scanf(" %c",&gValue);

            fMines[nCounter][mCounter] = gValue;

            fNumbers[nCounter][mCounter] = 0;
        }
    }

    system("cls");

    //Mine number location equation:

    for(nCounter = 0; nCounter < nRows; nCounter++){
        for(mCounter = 0; mCounter < mCols; mCounter ++){
            if(fMines[nCounter][mCounter] == '*'){

                if((nCounter -1 >= 0) && (mCounter - 1 >= 0)){
                    fNumbers[nCounter-1][mCounter-1]++;
                }

                if(nCounter - 1  >= 0){
                    fNumbers[nCounter-1][mCounter]++;
                }

                if((nCounter - 1 >= 0) && (mCounter + 1 < mCols)){
                    fNumbers[nCounter-1][mCounter+1]++;
                }

                if(mCounter - 1 >= 0){
                    fNumbers[nCounter][mCounter-1]++;
                }

                if(mCounter + 1 < mCols){
                    fNumbers[nCounter][mCounter+1]++;
                }

                if((nCounter + 1 < nRows) && (mCounter - 1 >= 0)){
                    fNumbers[nCounter+1][mCounter-1]++;
                }

                if(nCounter + 1 >= 0){
                    fNumbers[nCounter+1][mCounter]++;
                }

                if((nCounter + 1 < nRows) && (mCounter + 1 < mCols)){
                    fNumbers[nCounter+1][mCounter+1]++;
                }

            }
        }
    }

    //Showing the mine field and the mines location
    for(nCounter = 0; nCounter < nRows; nCounter++){
        for(mCounter = 0; mCounter < mCols; mCounter++){
            printf("%c",fMines[nCounter][mCounter]);
        }

        printf("\t");

        for(mCounter = 0; mCounter < mCols; mCounter++){
            if(fMines[nCounter][mCounter] == '*'){
                printf("%c",fMines[nCounter][mCounter]);
            }

            else{
                printf("%i",fNumbers[nCounter][mCounter]);
            }
        }
        printf("\n");
    }
}

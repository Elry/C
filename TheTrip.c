#include <stdio.h>

int main(){
    //Number of trips, number of students, trip counter, student counter
    int nTrips, nStudents, tCounter, sCounter;

    printf("Insert the number of trips: ");
    scanf("%i", &nTrips);

    printf("Insert the number of students: ");
    scanf("%i", &nStudents);

    double expenses[nTrips][nStudents];
    double own[nStudents];
    double division, sum;
    sum = 0;

    for(tCounter = 0; tCounter < nTrips; tCounter++){
        for(sCounter = 0; sCounter < nStudents; sCounter++){
            printf("Amount spent in the trip %i by the student %i: ", tCounter+1, sCounter+1);
            scanf("%lf", &expenses[tCounter][sCounter]);

            sum = sum + expenses[tCounter][sCounter];
        }
    }

    division = sum/nStudents;

    system("cls");

    for(tCounter = 0; tCounter < nTrips; tCounter++){
        printf("\nTrip %i \n", tCounter + 1);

        for(sCounter = 0; sCounter < nStudents; sCounter++){
            printf("\nTotal expense of student %i: %lf", sCounter+1, expenses[tCounter][sCounter]);
            own[sCounter] = expenses[tCounter][sCounter] - division;
        }
        printf("\n");
    }

    printf("\nTrip total expense: %lf", sum);
    printf("\nEach student must pay: %lf\n", division);

    for(sCounter = 0; sCounter < nStudents; sCounter++){
        if(own[sCounter] == 0){
            printf("\nThe student %i owes nothing", sCounter+1);
        }
        else if(own[sCounter] > 0){
            printf("\nThe student %i must receive: %lf", sCounter+1, own[sCounter]);
        }
        else{
            printf("\nThe student %i has a debt of: %lf", sCounter+1, own[sCounter]);
        }
    }
    printf("\n");
}

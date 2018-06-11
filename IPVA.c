#include <stdio.h>

int main(){
    int vVehicle, year, age, nParcel, State, VehicleType, ParcelOption, vIPVA;
    float carSP, carMG, motoSP, motoMG;

    carSP = 0.1;
    carMG = 0.03;
    motoSP = 0.05;
    motoMG = 0.05;
    vIPVA = 0;

    printf("Type the value of your vehicle: ");
    scanf("%i",&vVehicle);

    printf("\nType 0 for car, or 1 for motorcycle: ");
    scanf("%i",&tVehicle);

    printf("\nType 0 for SP, or 1 for MG: ");
    scanf("%i",&State);

    printf("\nType the year of your vehicle: ");
    scanf("%i",&year);

    age = 2018 - year;

    if(age > 20){
        printf("\nYour vehicle is old enough to pay any taxes.");
        return 0;
    }

    if (state == 0 && VehicleType == 0){
        vIPVA = vVehicle * carSP;
    }else if(state == 0 && VehicleType == 1){
        vIPVA = vVehicle * motoSP;
    }else if(state == 1 && VehicleType == 0){
        vIPVA = vVehicle * carMG;
    }else if(state == 1 && VehicleType == 1){
        vIPVA = vVeiculo * mMG;
    }

    printf("\nIPVA: %i", vIPVA);

    if(vIPVA > 1000){
        printf("\nType 0 to parcel, or 1 to not parcel: ");
        scanf("%i",&ParcelOption);

        if(ParcelOption == 0){
            printf("\nHow many parcels? Max is 3: ");
            scanf("%i",&nParcel);

            if(nParcel == 2){
                printf("\nParcel value: %i", vIPVA/2);
            }else{
                printf("\nParcel value: %i", vIPVA/3);
            }
        }
    }

    return 0;
}

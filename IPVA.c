#include <stdio.h>

int main(){

int vVeiculo, Ano, Idade, nParcelas, Estado, tVeiculo, pParcela, vIPVA;
float cSP, cMG, mSP, mMG;

cSP = 0.1;
cMG = 0.03;
mSP = 0.05;
mMG = 0.05;
vIPVA = 0;

printf("Digite o valor do veiculo: ");
scanf("%i",&vVeiculo);

printf("\nDigite 0 para carro, ou 1 para moto: ");
scanf("%i",&tVeiculo);

printf("\nDigite 0 para SP, ou 1 para MG: ");
scanf("%i",&Estado);

printf("\nDigite o ano do veiculo: ");
scanf("%i",&Ano);

Idade = 2015 - Ano;

        if(Idade > 20){
            printf("\nIsento, o veiculo tem %i anos", Idade);
            return 0;
        }

        if (Estado == 0 && tVeiculo == 0){
        vIPVA = vVeiculo * cSP;
        }
        else if(Estado == 0 && tVeiculo == 1){
        vIPVA = vVeiculo * mSP;
        }
        else if(Estado == 1 && tVeiculo == 0){
        vIPVA = vVeiculo * cMG;
        }
        else if(Estado == 1 && tVeiculo == 1){
        vIPVA = vVeiculo * mMG;
        }

        printf("IPVA %i", vIPVA);


    if(vIPVA > 1000){
        printf("\nDigite 0 para parcelar, ou 1 para não parcelar: ");
        scanf("%i",&pParcela);

        if(pParcela == 0){
            printf("\nDigite quantas parcelas, max 3: ");
            scanf("%i",&nParcelas);

            if(nParcelas == 2){
                printf("\nValor de cada parcela: %i", vIPVA/2);
            }
            else{
                printf("\nValor de cada parcela: %i", vIPVA/3);
            }
        }
    }

return 0;
}

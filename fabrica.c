#import <stdio.h>

int main(){

    int i, NPecas[10], TPecas,NPecasM[10],NpecasF[10],Classe[10],NFuncionario[10],Salario[10], sOrdenado[10];
    int TPecas=0, MIndex=0,FIndex=0,TPecasM=0;TPecasF=0, pMes=0;
    float MPecasM=0,MPecasF=0;
    char Funcionario[10],Sexo[10];

    for (i=0;i<10;i++)
    {
        printf("INSIRA o nome ");
        scanf("%s",&Funcionario[i]);

        printf("INSIRA O NUMERO ");
        scanf("%i",&NFuncionario[i]);

        printf("Insira o Sexo ");
        scanf("%c",&Sexo[i]);

        printf("Insira o nuemro de peças produzidas ");
        scanf("%i",NPecas);

        if (NPecas<=30)
        {
            Classe[i]=1;
            Salario[i]= 788;
        }
        if (NPecas>30 && NPecas<=35)
        {
            Classe[i]=2;
            Salario[i]= 788 + ((788 * 0.03)*(Npecas-30));
        }
        if (NPecas>35)
        {
            Classe[i]=3;
            Salario[i]= 788 + ((788 * 0.05)*(Npecas-35));
        }

    }

    for (i=0;i<10;i++)
    {
        TPecas=TPecas+NPecas[i];
    }

    for (i=0;i<10;i++)
    {
        if(Sexo[i]=='M')
        {
            NPecasM[MIndex]=NPecas[i];
            if(MIndex<9){MIndex++;}

            TPecasM=TPecasM+NPecasM[MIndex];
        }
        if(Sexo[i]=='F')
        {
            NPecasF[FIndex]=NPecas[i];
            if(FIndex<9){FIndex++;}

            TPecasF=TPecasF+NPecasF[FIndex];
        }
    }

    MPecasM=TPecasM/MIndex;
    MPecasF=TPecasF/FIndex;

    pMes = TPecasF + TPecasM;

    for (i=0;i<10;i++){
        printf("%s", Funcionario[i]);

    }



return 0;
}

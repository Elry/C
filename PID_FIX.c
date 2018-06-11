#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

  int i, exe[9], quantia, op, corrigi, add, invalido, fim, inicio, *pid, verifica, ret, sum;
  char *nome[9][10], *ver[1][10], *termino[9][10];
  invalido = 0;
  inicio = 0;
  sum = 0;

  do{
    printf("Insira a quantia de processos: ");
    scanf("%i",&quantia);

    if(quantia > 5 || quantia < 1){
      printf("Valores incorretos");
    }

  }while(quantia > 5 || quantia < 1);

  fim = quantia;

  pid = &nome;
  *pid = 99;

  for(i=0;i<quantia;i++){
    printf("Insira o nome do processo %i: ", (i+1));
    scanf("%s",&nome[i][10]);
    termino[i][10] = " ";
  }

  printf("\n");

  for(i=0;i<quantia;i++){
    printf("Quantas vezes o processo %i sera executado: ", (i+1));
    scanf("%i",&exe[i]);
  }

  printf("\n\n");

 do{
  do{
    printf("\n\n\t1. Digite 1 para inserir outro processo");
    printf("\n\t2. Digite 2 para corrigir um processo");
    printf("\n\t3. Digite 3 para listar os processos");
    printf("\n\t4. Digite 4 para apagar processos");
    printf("\n\t5. Digite 5 para executar simulacao");
    printf("\n\t6. Digite 6 para ver os creditos");
    printf("\n\t7. Digite 7 para sair");
    printf("\n");
    scanf("%i",&op);

    if(op < 1 || op > 7){
      printf("\nValor invalido");
    }

   }while(op < 1 || op > 7);


  switch(op){
    case 1:
      system("clear");

      if(quantia >= 5){
        printf("Numero maximo de processos ja atingido");
        break;
      }
      else{


        printf("Digite quantos itens serao adicionados: ");
        scanf("%i",&add);

        quantia = quantia + add;
        fim = quantia;
      }

      if(quantia <= 5){
        for(i=(quantia-add);i<quantia;i++){
            printf("\nInsira o nome do processo %i: ", i+1);
            scanf("%s",&nome[i][10]);
            printf("\nInsira quantidade de execucoes do processo %i: ", i+1);
            scanf("%i",&exe[i]);
        }
      }

      else if((add+quantia) > 5){
        printf("Quantia maxima ultrapassada");
      }
     break;

     case 2:
      system("clear");

      printf("Insira o nome do processo a ser corrigido: ");
      scanf("%s",ver[0]);

      do{
          printf("\nDigite 1 para corrigir o nome");
          printf("\nDigite 2 para alterar a quantia de execucoes");
          printf("\nDigite 3 para alterar ambos");
          printf("\n");
          scanf("%i",&corrigi);

          if(corrigi > 3 || corrigi < 1){
            printf("Opcao invalida");
          }
      }while(corrigi > 3 || corrigi < 1);

      for(i=0;i<quantia;i++){
        if(strcmp(ver[0],&nome[i][10]) == 0){
            if(corrigi == 1){
                printf("\nInsira o novo nome do processo %c: ", nome[i][10]);
                scanf("%s",&nome[i][10]);
            }
            else if(corrigi == 2){
                printf("\nInsira as vezes que o processo %c sera executado: ", nome[i][10]);
                scanf("%i",&exe[i]);
            }
            else if(corrigi == 3){
                printf("\nInsira o novo nome do processo %c: ", nome[i][10]);
                scanf("%s",&nome[i][10]);
                printf("\nInsira as vezes que o processo %c sera executado: ", nome[i][10]);
                scanf("%i",&exe[i]);
            }
        }
        else{
            invalido++;
        }
      }
      if(invalido == quantia){
        printf("\nNome Invalido");
      }
      invalido = 0;
     break;

     case 3:
        system("clear");
        if(pid != 0){
            printf("\t ___________________________________________\n");
            printf("\t| Inicio | Nome  | PID | Execucoes | Termino|");
            printf("\n\t|___________________________________________|");

            for(i=0;i<quantia;i++){
                printf("\n\t|   %i ", inicio);
                printf("\t | %c    ", nome[i][10]);
                printf(" | %d ", ++*pid);
                if(nome[i][10] == " "){
                    printf(" |\t0  |        |\n");
                }
                else{
                    printf(" | \t%i  ", exe[i]);
                    printf("|\t %i  |\n", fim);
                    fim++;
                }
                printf("\t|-------------------------------------------|");

                inicio++;
            }
            inicio = 0;
            fim = quantia;
            *pid = 99;
        }
        else{
            printf("A tabela de processos esta vazia.");
            break;
        }
     break;

     case 4:
        system("clear");

        printf("Insira o nome do processo a ser apagado: ");
        scanf("%s",&ver[0]);

        for(i=0;i<quantia;i++){
            if(strcmp(ver[0],&nome[i][10]) == 0){
                 nome[i][10] = " ";
                 //exe[i] = 0;
            }
            else{
                invalido++;
            }
        }

        if(invalido == quantia){
            printf("\nNome invalido");

        }

        invalido = 0;
     break;

     case 5:
      system("clear");

      printf("\n\t _________________________________");
      printf("\n\t|Nome | PID | Execucoes | Termino |");
      printf("\n\t ---------------------------------");

      for(i=0;i<quantia;i++){
        sum = exe[i] + sum;
      }

      do{
        for(i=0;i < quantia;i++){
            printf("\n\t");
            printf("|  %c  |",nome[i][10]);
            printf("\t%d | ",(*pid+1));
            printf("\t  %i     |",exe[i]);
            sum--;
            //exe[i]--;


            if(exe[i]==0){
                termino[i][10] = nome[i][10];
                printf("    %c \t  |", termino[i][10]);
            }
            printf("\n\t ----------------------------------");
        }
        }while(exe[i] != 0);
    break;

     case 6:
       system("clear");

       printf("\n\tFeito por: ");
       printf("\nAdriano Benatti  R.A: 0040481511047");
       printf("\nAndre Amorim  R.A: 0040481511025");
       printf("\nMilton Neto  R.A: 0040481511026");
       printf("\nRafael Garcia R.A: 0040481411028");
       printf("\n\n");
     break;

     case 7:
       system("exit");
     break;

     default:
         system("clear");
         printf("Opcao invalida");
      break;
  }
 }while(op != 7);
}

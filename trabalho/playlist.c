#include <stdio.h>
#include <stdlib.h>

struct playlist_t{                            // usar do while :) 
    char musica [30];
    char estilo [30];
   
};

int main() {


struct playlist_t playlist[30];
int opcao=0;
int j =0;

do {
printf("--- P L A Y L I S T --- \n");
printf("Sua playlist tem o total de %i musicas.\n", j);
printf("para adicionar musica digite - 1\n");
printf("para ver sua playlist digite - 2\n");
printf("para sair digite - 3\n");
printf("digite a sua opcao:  ");
scanf("%i",&opcao);
  getchar();
           switch (opcao) {
             case 1: 
             //printf("%i\n", j);
                
                 printf("digite o nome da musica: ");
                     scanf("%s",playlist[j].musica);
                     printf("digite o genero da musica:  ");
                     scanf("%s",playlist[j].estilo);  
                     
                     j++;
                     break;  

             case 2: 
             printf("--- S U A  P L A Y L I S T ---");
             for (int i=0; i<j; i++){
                    printf("\nmusica %d\n", i+1);
                     printf("%s\n",playlist[i].musica);
                     printf("%s\n",playlist[i].estilo);
                    
              } break;
             

             case 3: 
             printf("ate logo!"); break;
             
             default:  printf("\nopcao invalida! aperte enter para voltar para o menu.");
             printf("\n");
             getchar ();}
 
 }  while (opcao !=3); 



    return 0;
}
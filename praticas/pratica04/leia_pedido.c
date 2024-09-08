#include <stdio.h>

int main (void){
  char produto[21];
  int quantidade = 0;
  float valor = 0.0f;

  printf("Digite seu produto: ");
  scanf("%s", produto);
  getchar();
  
  printf("Digite a quantidade: ");
  scanf("%i", &quantidade);
  getchar();
  
  printf("Digite o valor unitário: ");
  scanf("%f", &valor);

  printf("==============================\n");
  printf("         P E D I D O\n");
  printf("==============================\n");
  printf("%-15s %-3s %10s\n", "Produto", "Qtd", "Valor Unit");
  printf("%-15s %03i %10.2f\n", produto, quantidade, valor);
  printf("==============================\n");

  
  return 0;
}
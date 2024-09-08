#include <stdio.h>

int main(void){
  float preco = 0.00f;
  double fracao = 0;

  printf("Digite um preço: ");
  scanf("%f", &preco);
  printf("Você digitou: %.2f\n", preco);

  printf("Digite uma fração: ");
  scanf("%lf", &fracao);
  printf("Você digitou: %.1f\n", fracao);


  
  return 0;
}
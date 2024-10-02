#include <stdio.h>

int main (void){

  int numero1 = 0;
  int numero2 = 0;
  float numero3 = 0.0f;

  printf("Digite um número inteiro: ");
  scanf("%i", &numero1);
  printf("Digite outro número inteiro: ");
  scanf("%i", &numero2);
  printf("Digite um número flutuante: ");
  scanf("%f", &numero3);

  int soma = numero1 + numero2;

  printf("A soma de %i com %i é igual a %i\n", numero1, numero2, soma);

  int subtracao = numero1 - numero2;

  printf("A subtração de %i com %i é igual a %i\n", numero1, numero2, subtracao);

  int multiplicacao = numero1 * numero2;

  printf("A multiplicação de %i com %i é igual a %i\n", numero1, numero2, multiplicacao);

  int divisao = numero1 / numero2;

  printf ("A divisão de %i com %i é igual a %i\n", numero1, numero2, divisao);
  
  int resto_divisao = numero1 % numero2;

  printf("O resto da divisão de %i por %i é igual %i\n", numero1,numero2, resto_divisao);
  
  float divisao_fracionada = numero1 / numero3;

  printf("A divisão fracionada de %i por %.1f é igual a %.2f\n", numero1, numero3, divisao_fracionada);
  
  
  return 0;
}
#include <stdio.h>

int main (void) {
  //Entrada
  int numero;
  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &numero);

  //Processamento
  //numero = numero + 1;
  int incremento = numero;
  incremento++; //ou ++incremento;
  int pre_incremento = ++incremento;
  int pos_incremento = incremento++;
  
  //numero =  numero -1;
  int decremento = numero;
  decremento-- ;//ou --decremento;
  int pre_decremento = --decremento;
  int pos_decremento = decremento--;

  //Saída
  printf("Incremento de %i é %i\n", numero, incremento);
  printf("Pre incremento de %i é %i\n", numero, pre_incremento);
  printf("Pos incremento de %i é %i\n", numero, pos_incremento);
  printf("Decremento de %i é %i\n", numero, decremento);
  printf("Pre decremento de %i é %i\n", numero, pre_decremento);
  printf("Pos decremento de %i é %i\n", numero, pos_decremento);
  
  
  return 0;
}
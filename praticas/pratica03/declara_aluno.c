#include <stdio.h>

int main(){
  unsigned long int matricula = 00000000;
  int idade = 99;
  float altura = 9.90;
  float peso = 990.0;
  char sexo = 'F';

  printf("Matrícula: %08lu\n", matricula);
  printf("Idade: %02i anos\n", idade);
  printf("Altura: %03.2f m\n", altura);
  printf("Peso: %04.1f kg\n", peso);
  printf("Sexo: %c\n", sexo);
  
  
  return 0;
}
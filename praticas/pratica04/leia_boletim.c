#include <stdio.h>

int main (void){
  int matricula = 0;
  float a1 = 0.0f;
  float a2 = 0.0f;
  float media = 0.0f;
  

  printf("Digite sua matrícula: ");
  scanf("%i", &matricula);
  printf("Digite sua nota A1: ");
  scanf("%f", &a1);
  printf("Digite sua nota A2: ");
  scanf("%f", &a2);
  media = (a1+a2) / 2;
  printf("Matricula\tA1\tA2\tMedia\n");
  printf("%i\t%.1f\t%.1f\t%.1f\n", matricula, a1, a2, media);
  

  
  return 0;
}
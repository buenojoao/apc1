#include <stdio.h> // biblioteca de entrada e saída no console

int main(void) {
  //imprime um texto na tela
  printf ("um texto qualquer\nentre aspas duplas\n");

  //imprime um numero inteiro
  printf("%i\n", 10 );
  printf("%i %i\n", 50, 100);
  printf("%5i\n", 0001);
  printf("%05i%%\n", 21);

  //imprime um numero decimal
  printf("%f\n", 8.5);
  printf("%.3f\n", 3.14159);
  printf("%8.1f\n", 110.5);
  printf("%8.2f\n", 2556.86);

  //imprime um caractere
  printf("%c\n", 'D');
  printf("%c\n", 69); 

  //imprime uma string
  printf("%s\n", "Bom dia à todos!");
  printf("%30s!\n", "quero café");
  printf("%-30s!\n", "quero café");

  return 0;
}
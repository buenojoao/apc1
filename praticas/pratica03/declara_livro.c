#include <stdio.h>

int main(){
  unsigned long int isbn = 000000000000;
  int num_paginas = 000;
  float preco = 0000.00;
  long int publicado_em = 0000;

  printf("ISBN: %013lu\n", isbn);
  printf("Num. Paginas: %03i\n", num_paginas);
  printf("Preco: %07.2f\n", preco);
  printf("Publicado em: %04i\n", publicado_em);
  
  
  return 0;
}
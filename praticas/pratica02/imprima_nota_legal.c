#include <stdio.h>

int main(){
  printf("%s\n","===================================");
  printf("%27s\n", "N O T A    L E G A L");
  printf("%s\n","===================================");
  printf("%s \t \t %s \t %s\n", "Produto", "Qtd", "Valor Unit");
  printf("%s \t \t %03i \t %10.2f\n", "Camiseta", 2, 39.99 );
  printf("%-8s \t \t %03i \t %10.2f\n", "Calca", 1, 89.90);
  printf("%-12s \t %03i \t %10.2f\n", "Meia Social", 3, 19.99);
  printf("%s\n","===================================");
  printf("%s %28.2f\n", "Total:", 229.85);
  return 0;
}
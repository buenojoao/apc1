#include <stdio.h>

int main(){
  printf("%s\n", "==============================");
  printf("%25s\n", "N O T A    L E G A L");
  printf("%s\n", "==============================");
  printf("%-15s %-3s %10s\n", "Produto", "Qtd", "Valor Unit");
  printf("%-15s %03i %10.2f\n", "Camiseta", 2, 39.99);
  printf("%-15s %03i %10.2f\n", "Calca", 1, 89.99);
  printf("%-15s %03i %10.2f\n", "Meia Social", 3, 19.99);
  printf("%s\n", "==============================");
  printf("%-23s %.2f\n", "Total:", 229.85);
  
  
  return 0;
}
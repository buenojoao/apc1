#include <stdio.h>

int main (void) {

    int ano = 0;

    printf("Digite um ano: ");
    scanf("%i", &ano);
    
    int ano_eh_bissexto = ano % 4 || ano % 400 == 0;
    
    
    return 0;
}
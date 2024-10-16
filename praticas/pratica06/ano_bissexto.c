#include <stdio.h>

int main (void) {

    int ano = 0;

    printf("Digite um ano: ");
    int deu_certo = scanf("%i", &ano);
    
    int ano_eh_bissexto = ano % 4 == 0 || ano % 400 == 0;
    if (ano_eh_bissexto) {
        printf("O ano eh bissexto!");
    } else {
        printf("O ano nao eh bissexto!");
    }
    
    return 0;
}
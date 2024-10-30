#include <stdio.h>

int main (void) {

    int numero, i;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for(i=numero; i>1; i--) {
        fatorial = fatorial * i;
    }
    printf("O fatorial de %i e %i", numero, fatorial);


    return 0;
}
#include <stdio.h>

int main (void) {

    int numero, maior, menor;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    maior = numero;
    menor = numero;

    while(1) {
        if(numero == 0) break;

        if(numero>maior){
            maior = numero;
        }
        if(numero<menor){
            menor = numero;
        }

        scanf("%i", &numero);
    }
    
    printf("%i, %i", maior, menor);



    return 0;
}
#include <stdio.h> 

int main (void ) {
    int numeros [10];

    for (int i=0; i<10; i++) {
        printf("Entre com %io. numero: ", i+1);
        scanf("%i", &numeros[i]);
    }

    int numero;
    printf("Entre com o numero que quer encontrar: ");
    scanf("%i", &numero);

    int achou = -1;

    for (int i=0; i<10; i++) {
        if (numeros[i] == numero) {
            achou = i; 
            break;
        }
    }

    if (achou<0) {
        printf("O numero nao foi encontrado!");
    } else {
        printf("O numero foi encontrado na posicao %i\n", achou);
    }





    return 0;
}
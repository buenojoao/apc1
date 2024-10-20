#include <stdio.h>

int main (void) {

    char operacao;

    printf("Entre com a operacao desejada: ");
    int deu_certo = scanf(" %c", &operacao);

    float numero1, numero2;

    printf("Entre com os numeros que deseja:");
    int deu_certo2 = scanf("%f %f", &numero1, &numero2);

    float soma = numero1 + numero2;
    float subtracao = numero1 - numero2;
    float multiplicacao = numero1 * numero2;
    float divisao = numero1 / numero2;

    switch (operacao) {
        case '+': printf("Resultado: %.2f", soma); break;
        case '-': printf("Resultado: %.2f", subtracao); break;
        case '*': printf("Resultado: %.2f", multiplicacao); break;
        case '/':
        if (numero2 != 0){
            printf("Resultado: %.2f", divisao);
        } else {
            printf("Erro!!! Divisao por 0 gera indeterminacao."); break;
        }
        default: printf("Operacao invalida"); break;
    }

    return 0;
}
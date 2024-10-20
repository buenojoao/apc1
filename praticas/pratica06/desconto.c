#include <stdio.h>

int main(void) {

    float valor_bruto = 0;
    float valor_desconto = 0;

    printf("Digite o valor do produto (nao utilize virgula): ");
    float deu_certo = scanf("%f", &valor_bruto);
    
    if (valor_bruto <= 100.00f) {
        valor_desconto = valor_bruto * 0.01;
        printf("Seu produto agora sai por R$%.2f!", valor_bruto - valor_desconto);
    } else if (valor_bruto <= 500.00f) {
        valor_desconto = valor_bruto * 0.05;
        printf("Seu produto agora sai por R$%.2f!", valor_bruto - valor_desconto);
    } else {
        valor_desconto = valor_bruto * 0.1;
        printf("Seu produto agora sai por R$%.2f!", valor_bruto - valor_desconto);
    }

    return 0;
}
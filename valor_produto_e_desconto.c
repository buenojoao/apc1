#include <stdio.h> 

int main (void) {

int parcelas = 0;
float desconto = 0.0f;
float preco = 0.0f;

    printf("Insira o valor do produto: ");
    scanf("%f", &preco);
    printf("escolha o numero de parcelas para pagamento: ");
    scanf("%i", &parcelas);

    switch (parcelas)
    {
    case 1: desconto = 0.05f;
        break;
    case 2: desconto = 0.05f;
        break;
    case 3: desconto = 0.07f;
        break;
    case 4: desconto = 0.10f;
        break;
    case 5: desconto = 0.10f;
        break;    
    default: printf("Insira um valor inteiro entre 1 e 5");
        break;
    }

float desconto_final = desconto * 100;
float preco_final = preco - (preco * desconto);

    printf("Seu desconto e de %.0f \n", desconto_final);
    printf("O valor total do seu produto ficou %.2f", preco_final);

    return 0;
}


#include <stdio.h> 

int main (void) {

    int dia = 0;

    printf("Digite um dia da semana de 1 a 7: ");
    int deu_certo=scanf("%i", &dia);

    switch (dia) {
        case 1: printf("Domingo"); break;
        case 2: printf("Segunda-feira"); break;
        case 3: printf("Terca-feira"); break;
        case 4: printf("Quarta-feira"); break;
        case 5: printf("Quinta-feira"); break;
        case 6: printf("Sexta-feira"); break;
        case 7: printf("Sabado"); break;
        default: printf("Dia informado invalido. Tente novamente"); break;
    } 

    return 0;
}

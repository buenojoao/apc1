#include <stdio.h>
#include <math.h>

int main (void) {

    int a, b, c;

    printf("Declare seu 'a', 'b', e 'c': ");
    int deu_certo = scanf("%i %i %i", &a, &b, &c);

    int delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        printf("A equacao nao possui raizes reais");
    } else {
        int x1 = (-b + sqrt(delta)) / 2 * a;
        int x2 = (-b -sqrt(delta)) / 2 * a;
        printf("As raizes da equacao sao %i e %i", x1, x2);
    }

    return 0;
}
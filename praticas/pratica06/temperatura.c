#include <stdio.h>

int main (void) {

    float temp = 0.0f;

    printf("Informe a temperatura atual: ");
    int deu_certo=scanf("%f", &temp);

    if (temp >= 40.0f) {
        printf("Muito quente.");
    } else if (temp >= 30.0f) {
        printf("Quente.");
    } else if (temp >= 20.0f) {
        printf("Agradavel.");
    } else {
        printf("Frio.");
    }

    return 0;
}
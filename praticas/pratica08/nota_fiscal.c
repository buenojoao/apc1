#include <stdio.h>

int main (void) {
    float total = 0.0f;
    float nota_fiscal [5] [3];

    for (int i=0; i<5; i++) {
        printf("Valor do %io. produto: ", i+1);
        scanf("%f", &nota_fiscal[i][0]);
        printf("Quantidade do %io. produtos: ", i+1);
        scanf("%f", &nota_fiscal[i][1]);
            nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
            total = total + nota_fiscal[i][2];
    }

    for (int i=0; i<5; i++) {
        for (int j=0; j<3; j++) {
            printf("%.2f ", nota_fiscal[i][j]);
        } printf("\n");
    }
    printf("\n");
    printf("Total: %.2f", total);

    return 0;
}
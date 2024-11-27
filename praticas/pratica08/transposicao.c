#include <stdio.h> 

int main (void) {
    char frase [31];

    printf("Entre com uma frase: ");
    scanf("%c", frase[31]);

    char matriz [6][5];
    int k = 0;

    for(int i=0; i<6; i++) {
        for(int j=0; j<5; j++) {
            matriz [i][j] = k;
            k++;
        }
    }

    printf("A transposicao da frase eh ");

    for(int j=0; j<5; j++) {
        for(int i=0; i<6; i++) {
            printf("%c, %c,", matriz[i][j]);
        }
    }


    return 0;
}
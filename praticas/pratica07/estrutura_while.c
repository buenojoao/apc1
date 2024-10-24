#include <stdio.h>

int main (void) {
    int nota;

    printf("Insira sua nota: ");
    scanf("%i", &nota);

    while(nota < 1 || nota > 10) {
        printf("Nota invalida. Tente novamente! \n");
        scanf("%i", &nota);
    }


    return 0;
}
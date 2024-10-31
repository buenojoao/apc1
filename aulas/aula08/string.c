#include <stdio.h>

int main(void) {
    char string[30];

    printf("Entre com o seu nome: ");
    scanf("%s", string);

    //string[2] = 0;

    printf("Ola %s!\n", string);

    string[2] = 0;

    for(int i=0; i<30; i++) {
        printf("%c", string[i]);
    }


    return 0;
}
#include <stdio.h>

int main (void){

    int num;
    int i;

    printf("Entre com um numero: ");
    scanf("%i", &num);

    for(i=1; i<100; i++){
        if (i % num == 0){
            printf("%i", i);
        }
    }




    return 0;
}
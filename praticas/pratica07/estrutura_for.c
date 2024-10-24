#include <stdio.h>

int main (void){
int i = 0;

for (int i=0; i<10; i++){
    printf("%i", i);
}
for (int i=10; i>0; i--){
    printf("%i", i);
}
for (;;) {
    printf("Ao infinito e alem!");
}

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int opcao = 0;

    while (opcao != 5)
    {
        system("clear");
        printf("Menu principal!\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Fazer recarga\n");
        printf("3 - Ver recados\n");
        printf("4 - Ultimas ligacoes\n");
        printf("5 - Sair\n");
        printf("Entre com uma opcao => ");
        scanf("%i", &opcao);
        while (getchar() != '\n'); 

        switch (opcao)
        {
        case 1: {  
            system("clear");
            printf("CONSULTA SALDO\n\n");
            printf("Seu saldo eh de R$10,00.\n\n");
                break;}
        case 2:
        printf("Escolha um valor de recarga: \n\n");
            break;
        case 3:
        printf("Voce naum tem recados.\n\n");
            break;
        case 4:
        printf("99999-0000\n99999-1111\n\n");
            break;
        case 5:
        printf("Ate logo!\n\n");
            break;
        default:
        printf("Opcao invalida. Tente novamente.\n\n"); opcao = 0;
            break;
        }

        if (opcao != 5) {
            opcao = 0;
            printf("Pressione ENTER para continuar...");
            getchar();
        }
    }

    return 0;
}
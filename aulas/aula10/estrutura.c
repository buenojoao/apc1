#include <stdio.h>

int main (void) {
    struct contato_t
    {
        char nome[61];
        long int telefone;
        char email[61];
    };
    
    struct contato_t contato;

    printf("Entre com o nome do contato: ");
    scanf("%[^\n]s", contato.nome);
    while(getchar() != '\n');
    printf("Entre como o telefone do contato: ");
    scanf("%li", &contato.telefone);
    while(getchar() != '\n');
    printf("Entre com o email do contato: ");
    scanf("%[^\n]s", contato.email);
    while(getchar() != '\n');

    printf("Dados do contato: ");
    printf("Nome.......: %s\n", contato.nome);
    printf("Telefone...: %li\n", contato.telefone);
    printf("Email......: %s\n", contato.email);

    struct contato_t outro_contato;
    outro_contato = contato;
    printf("Nome.......: %s\n", outro_contato.nome);
    printf("Telefone...: %li\n", outro_contato.telefone);
    printf("Email......: %s\n", outro_contato.email);

    struct contato_t contatos[10];

    for(int i=0; i<10; i++) {
        
    }







    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-53 - Confirmar saida com s                    *");
    printf("\n***************************************************************\n");

    // seu codigo
    char sair;
    do {
        printf("\n--- Menu ---\n");
        printf("(opcoes do sistema)\n");
        printf("Deseja sair? (s para sair): ");
        scanf(" %c", &sair);
    } while (sair != 's');

    printf("Saindo do sistema!\n");

    return 0;
}

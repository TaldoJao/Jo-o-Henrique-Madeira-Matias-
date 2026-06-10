#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-45 - Menu ate escolher sair                   *");
    printf("\n***************************************************************\n");

    // seu codigo
    int opcao;
    opcao = 0;

    while (opcao != 3) {
        printf("\n1 - Opcao 1\n");
        printf("2 - Opcao 2\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu opcao 1!\n");
        } else if (opcao == 2) {
            printf("Voce escolheu opcao 2!\n");
        } else if (opcao != 3) {
            printf("Opcao invalida!\n");
        }
    }
    printf("Saindo...\n");

    return 0;
}

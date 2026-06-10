#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-48 - Menu com opcao de sair                   *");
    printf("\n***************************************************************\n");

    // seu codigo
    int opcao;
    do {
        printf("\n1 - Mostrar mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a mensagem!\n");
        }
    } while (opcao != 2);

    return 0;
}

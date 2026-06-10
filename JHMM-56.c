#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-56 - Menu do Fast-Food Digital                *");
    printf("\n***************************************************************\n");

    // seu codigo
    int combo;
    printf("Escolha seu combo (1 a 4): ");
    scanf("%d", &combo);

    switch (combo) {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n");
            break;
        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;
        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00\n");
            break;
        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00\n");
            break;
        default:
            printf("Opcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}

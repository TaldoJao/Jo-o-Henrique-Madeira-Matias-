#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-16 - Multiplo de 3 e/ou 5                     *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num;
    printf("Digite o numero do pedido: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("Voce ganhou refrigerante e sobremesa!\n");
    } else if (num % 3 == 0) {
        printf("Voce ganhou um refrigerante!\n");
    } else if (num % 5 == 0) {
        printf("Voce ganhou uma sobremesa!\n");
    } else {
        printf("Sem brinde desta vez.\n");
    }

    return 0;
}

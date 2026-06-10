#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-37 - Soma de numeros ate digitar zero         *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num, soma = 0;
    printf("Digite um numero (0 para parar): ");
    scanf("%d", &num);

    while (num != 0) {
        soma = soma + num;
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &num);
    }
    printf("Soma total: %d\n", soma);

    return 0;
}

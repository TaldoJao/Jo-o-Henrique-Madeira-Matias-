#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-52 - Soma ate o numero ser multiplo de 10     *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num, soma = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    } while (soma % 10 != 0);

    printf("Soma total: %d\n", soma);

    return 0;
}

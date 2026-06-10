#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-50 - Numero positivo obrigatorio              *");
    printf("\n***************************************************************\n");

    // seu codigo
    float num;
    do {
        printf("Digite um numero positivo para deposito: ");
        scanf("%f", &num);
        if (num <= 0) {
            printf("Valor invalido! Apenas valores positivos!\n");
        }
    } while (num <= 0);

    printf("Deposito de R$ %.2f realizado!\n", num);

    return 0;
}

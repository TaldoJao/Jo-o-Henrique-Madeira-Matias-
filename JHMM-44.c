#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-44 - Contar digitos de um numero              *");
    printf("\n***************************************************************\n");

    // seu codigo
    long long num;
    int qtd = 0;
    printf("Digite um numero positivo: ");
    scanf("%lld", &num);

    while (num > 0) {
        num = num / 10;
        qtd++;
    }
    printf("Quantidade de digitos: %d\n", qtd);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-42 - Quantidade de numeros impares digitados  *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num, i = 0, qtdImpar = 0;
    while (i < 10) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num % 2 != 0) {
            qtdImpar++;
        }
        i++;
    }
    printf("Quantidade de impares: %d\n", qtdImpar);

    return 0;
}

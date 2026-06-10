#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-02 - Soma de dois numeros                     *");
    printf("\n***************************************************************\n");

    // seu codigo
    float a, b, soma;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    soma = a + b;
    printf("Soma: %.2f\n", soma);

    return 0;
}

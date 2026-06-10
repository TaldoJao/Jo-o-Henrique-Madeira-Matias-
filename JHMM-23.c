#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-23 - Maior de dois numeros                    *");
    printf("\n***************************************************************\n");

    // seu codigo
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if (a > b) {
        printf("O maior e: %.2f\n", a);
    } else if (b > a) {
        printf("O maior e: %.2f\n", b);
    } else {
        printf("Os numeros sao iguais!\n");
    }

    return 0;
}

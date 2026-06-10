#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-39 - Verificar se um numero e positivo        *");
    printf("\n***************************************************************\n");

    // seu codigo
    float num;
    printf("Digite um numero positivo: ");
    scanf("%f", &num);

    while (num <= 0) {
        printf("Numero invalido! Digite um numero positivo: ");
        scanf("%f", &num);
    }
    printf("Numero valido: %.2f\n", num);

    return 0;
}

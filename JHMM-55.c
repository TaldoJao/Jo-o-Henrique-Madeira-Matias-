#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-55 - Ler numeros e mostrar o maior            *");
    printf("\n***************************************************************\n");

    // seu codigo
    float num, maior = 0;
    do {
        printf("Digite um numero positivo (-1 para parar): ");
        scanf("%f", &num);
        if (num > maior) {
            maior = num;
        }
    } while (num >= 0);

    printf("O maior numero positivo foi: %.2f\n", maior);

    return 0;
}

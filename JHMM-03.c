#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-03 - Media de dois numeros                    *");
    printf("\n***************************************************************\n");

    // seu codigo
    float a, b, media;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    media = (a + b) / 2;
    printf("Media: %.2f\n", media);

    return 0;
}

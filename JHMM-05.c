#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-05 - Calculo de area do retangulo             *");
    printf("\n***************************************************************\n");

    // seu codigo
    float base, altura, area;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    area = base * altura;
    printf("Area do retangulo: %.2f\n", area);

    return 0;
}

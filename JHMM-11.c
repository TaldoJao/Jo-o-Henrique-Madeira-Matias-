#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-11 - Calcular media de tres notas             *");
    printf("\n***************************************************************\n");

    // seu codigo
    float n1, n2, n3, media;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("Media: %.2f\n", media);

    return 0;
}

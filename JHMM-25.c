#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-25 - Notas e aprovacao                        *");
    printf("\n***************************************************************\n");

    // seu codigo
    float media;
    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7.0) {
        printf("APROVADO!\n");
    } else if (media >= 5.0) {
        printf("RECUPERACAO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}

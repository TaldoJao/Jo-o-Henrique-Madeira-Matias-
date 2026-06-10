#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-21 - Numero positivo ou negativo              *");
    printf("\n***************************************************************\n");

    // seu codigo
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("Numero positivo (Lucro)\n");
    } else if (num < 0) {
        printf("Numero negativo (Prejuizo)\n");
    } else {
        printf("Numero zero\n");
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-10 - Conversor de metros para centimetros     *");
    printf("\n***************************************************************\n");

    // seu codigo
    float metros, centimetros;
    printf("Digite a distancia em metros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("%.2f metros = %.2f centimetros\n", metros, centimetros);

    return 0;
}

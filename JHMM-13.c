#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-13 - Calcular volume do cubo                  *");
    printf("\n***************************************************************\n");

    // seu codigo
    float lado, volume;
    printf("Digite o lado do cubo: ");
    scanf("%f", &lado);
    volume = lado * lado * lado;
    printf("Volume do cubo: %.2f\n", volume);

    return 0;
}

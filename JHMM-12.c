#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-12 - Calcular velocidade media                *");
    printf("\n***************************************************************\n");

    // seu codigo
    float distancia, tempo, velocidade;
    printf("Digite a distancia (km): ");
    scanf("%f", &distancia);
    printf("Digite o tempo (horas): ");
    scanf("%f", &tempo);
    velocidade = distancia / tempo;
    printf("Velocidade media: %.2f km/h\n", velocidade);

    return 0;
}

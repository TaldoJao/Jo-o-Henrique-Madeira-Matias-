#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-06 - Calcular IMC                             *");
    printf("\n***************************************************************\n");

    // seu codigo
    float peso, altura, imc;
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);

    return 0;
}

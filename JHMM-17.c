#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-17 - Sensor do Parque Tematico                *");
    printf("\n***************************************************************\n");

    // seu codigo
    float altura;
    printf("Digite a altura da crianca em cm: ");
    scanf("%f", &altura);

    if (altura >= 140) {
        printf("Luz VERDE - Acesso liberado!\n");
    } else {
        printf("Luz VERMELHA - Acesso barrado!\n");
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-09 - Calcular area do circulo                 *");
    printf("\n***************************************************************\n");

    // seu codigo
    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = 3.14159 * raio * raio;
    printf("Area do circulo: %.2f\n", area);

    return 0;
}

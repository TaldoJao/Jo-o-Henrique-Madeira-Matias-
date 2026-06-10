#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-07 - Calcular salario com bonus               *");
    printf("\n***************************************************************\n");

    // seu codigo
    float salario, bonus, total;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o percentual de bonus (%%): ");
    scanf("%f", &bonus);
    total = salario + (salario * bonus / 100);
    printf("Salario com bonus: R$ %.2f\n", total);

    return 0;
}

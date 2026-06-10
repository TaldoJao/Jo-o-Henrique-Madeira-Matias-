#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-08 - Calcular troco                           *");
    printf("\n***************************************************************\n");

    // seu codigo
    float preco, pagamento, troco;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o valor pago: ");
    scanf("%f", &pagamento);
    troco = pagamento - preco;
    printf("Troco: R$ %.2f\n", troco);

    return 0;
}

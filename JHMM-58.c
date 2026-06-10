#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-58 - Calculadora de Bolso 4 Operacoes         *");
    printf("\n***************************************************************\n");

    // seu codigo
    float a, b;
    char op;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            printf("Resultado: %.2f\n", a + b);
            break;
        case '-':
            printf("Resultado: %.2f\n", a - b);
            break;
        case '*':
            printf("Resultado: %.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Resultado: %.2f\n", a / b);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("Operacao matematica nao reconhecida\n");
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-35 - Numeros de Fibonacci                     *");
    printf("\n***************************************************************\n");

    // seu codigo
    int n, i, a = 0, b = 1, prox;
    printf("Quantos termos da sequencia de Fibonacci? ");
    scanf("%d", &n);

    printf("Fibonacci: ");
    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            prox = a + b;
            a = b;
            b = prox;
            printf("%d ", b);
        }
    }
    printf("\n");

    return 0;
}

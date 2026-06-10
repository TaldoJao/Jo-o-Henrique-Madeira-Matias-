#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-43 - Soma dos pares entre 1 e 100             *");
    printf("\n***************************************************************\n");

    // seu codigo
    int i = 2, soma = 0;
    while (i <= 100) {
        soma = soma + i;
        i = i + 2;
    }
    printf("Soma dos pares de 1 a 100: %d\n", soma);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-28 - Soma dos 100 primeiros numeros naturais  *");
    printf("\n***************************************************************\n");

    // seu codigo
    int i, soma = 0;
    for (i = 1; i <= 100; i++) {
        soma = soma + i;
    }
    printf("A soma de 1 a 100 e: %d\n", soma);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-32 - Quadrado dos numeros de 1 a 10           *");
    printf("\n***************************************************************\n");

    // seu codigo
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d ao quadrado = %d\n", i, i * i);
    }

    return 0;
}

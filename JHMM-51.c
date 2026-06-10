#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-51 - Contagem regressiva de 10 ate 1          *");
    printf("\n***************************************************************\n");

    // seu codigo
    int i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);

    return 0;
}

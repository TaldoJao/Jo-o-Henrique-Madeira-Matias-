#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-29 - Numeros pares de 0 a 50                  *");
    printf("\n***************************************************************\n");

    // seu codigo
    int i;
    for (i = 0; i <= 50; i = i + 2) {
        printf("%d\n", i);
    }

    return 0;
}

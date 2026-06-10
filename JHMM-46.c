#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-46 - Contar de 1 a 10 com do while            *");
    printf("\n***************************************************************\n");

    // seu codigo
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}

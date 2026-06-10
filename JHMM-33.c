#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-33 - Multiplos de 3 entre 1 e 30              *");
    printf("\n***************************************************************\n");

    // seu codigo
    int i;
    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

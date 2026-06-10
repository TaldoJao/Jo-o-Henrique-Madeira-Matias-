#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-22 - Par ou impar                             *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d e PAR\n", num);
    } else {
        printf("%d e IMPAR\n", num);
    }

    return 0;
}

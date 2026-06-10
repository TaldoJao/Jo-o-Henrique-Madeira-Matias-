#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-20 - Ano bissexto                             *");
    printf("\n***************************************************************\n");

    // seu codigo
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d e bissexto!\n", ano);
    } else {
        printf("%d nao e bissexto.\n", ano);
    }

    return 0;
}

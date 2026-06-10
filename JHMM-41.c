#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-41 - Numero primo com while                   *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num, i = 2, primo = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 2) primo = 0;

    while (i < num && primo == 1) {
        if (num % i == 0) {
            primo = 0;
        }
        i++;
    }

    if (primo == 1) {
        printf("%d e primo!\n", num);
    } else {
        printf("%d nao e primo.\n", num);
    }

    return 0;
}

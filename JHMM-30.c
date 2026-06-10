#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-30 - Fatorial de um numero                    *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num, i;
    long long fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fat = fat * i;
    }
    printf("Fatorial de %d = %lld\n", num, fat);

    return 0;
}

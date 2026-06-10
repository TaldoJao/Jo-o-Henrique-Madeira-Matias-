#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-54 - Validar numero entre 1 e 5               *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num;
    do {
        printf("Digite um nivel de dificuldade (1 a 5): ");
        scanf("%d", &num);
        if (num < 1 || num > 5) {
            printf("Valor invalido! Digite entre 1 e 5.\n");
        }
    } while (num < 1 || num > 5);

    printf("Nivel %d selecionado!\n", num);

    return 0;
}

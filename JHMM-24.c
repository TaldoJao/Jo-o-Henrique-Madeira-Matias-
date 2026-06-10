#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-24 - Pode votar?                              *");
    printf("\n***************************************************************\n");

    // seu codigo
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Pode votar!\n");
    } else {
        printf("Nao pode votar ainda.\n");
    }

    return 0;
}

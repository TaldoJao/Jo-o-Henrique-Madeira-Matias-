#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-49 - Pedir senha ate acertar                  *");
    printf("\n***************************************************************\n");

    // seu codigo
    int senha;
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha != 1111) {
            printf("Senha incorreta!\n");
        }
    } while (senha != 1111);

    printf("Acesso liberado!\n");

    return 0;
}

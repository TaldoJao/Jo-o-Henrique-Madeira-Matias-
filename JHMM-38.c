#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-38 - Senha correta                            *");
    printf("\n***************************************************************\n");

    // seu codigo
    char senha[20];
    printf("Digite a senha: ");
    scanf("%s", senha);

    while (strcmp(senha, "1234") != 0) {
        printf("Senha errada! Tente novamente: ");
        scanf("%s", senha);
    }
    printf("Acesso liberado!\n");

    return 0;
}

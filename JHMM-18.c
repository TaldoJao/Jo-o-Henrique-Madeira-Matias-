#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-18 - Login simples                            *");
    printf("\n***************************************************************\n");

    // seu codigo
    char usuario[50], senha[50];
    printf("Digite o usuario: ");
    scanf("%s", usuario);
    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "1234") == 0) {
        printf("Acesso permitido!\n");
    } else {
        printf("Acesso negado!\n");
    }

    return 0;
}

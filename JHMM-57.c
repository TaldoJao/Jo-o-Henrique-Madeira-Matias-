#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-57 - Central do Brinquedo Eletronico          *");
    printf("\n***************************************************************\n");

    // seu codigo
    char cor[20];
    printf("Digite a cor que acendeu: ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0) {
        printf("O urso diz: Vamos brincar la fora!\n");
    } else if (strcmp(cor, "Amarelo") == 0) {
        printf("O urso diz: Estou ficando com soninho...\n");
    } else if (strcmp(cor, "Vermelho") == 0) {
        printf("O urso diz: Estou com fome, hora do lanche!\n");
    } else {
        printf("Cor desconhecida\n");
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-60 - Validador de Dias Uteis                  *");
    printf("\n***************************************************************\n");

    // seu codigo
    int dia;
    printf("Digite o dia da semana (1=Domingo, 2=Segunda... 7=Sabado): ");
    scanf("%d", &dia);

    switch (dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.\n");
            break;
        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.\n");
            break;
        default:
            printf("Numero de dia invalido.\n");
    }

    return 0;
}

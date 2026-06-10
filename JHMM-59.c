#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-59 - Assistente de Direcao (GPS Sem Mapa)     *");
    printf("\n***************************************************************\n");

    // seu codigo
    char letra;
    printf("Digite uma letra maiuscula (N, S, L, O): ");
    scanf(" %c", &letra);

    switch (letra) {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;
        case 'S':
            printf("Seguir para o Sul.\n");
            break;
        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;
        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;
        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}

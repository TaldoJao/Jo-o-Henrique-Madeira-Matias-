#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-15 - Quantas caixas cabem no caminhao         *");
    printf("\n***************************************************************\n");

    // seu codigo
    float altCam, largCam, compCam;
    float altCx, largCx, compCx;
    int qtd;

    printf("Altura do caminhao: ");
    scanf("%f", &altCam);
    printf("Largura do caminhao: ");
    scanf("%f", &largCam);
    printf("Comprimento do caminhao: ");
    scanf("%f", &compCam);

    printf("Altura da caixa: ");
    scanf("%f", &altCx);
    printf("Largura da caixa: ");
    scanf("%f", &largCx);
    printf("Comprimento da caixa: ");
    scanf("%f", &compCx);

    qtd = (int)((altCam / altCx) * (largCam / largCx) * (compCam / compCx));
    printf("Cabem %d caixas no caminhao\n", qtd);

    return 0;
}

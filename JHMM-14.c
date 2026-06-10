#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-14 - Tipo de Triangulo                        *");
    printf("\n***************************************************************\n");

    // seu codigo
    int a, b, c;
    printf("Digite o lado 1: ");
    scanf("%d", &a);
    printf("Digite o lado 2: ");
    scanf("%d", &b);
    printf("Digite o lado 3: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Triangulo Equilatero\n");
    } else if (a == b || b == c || a == c) {
        printf("Triangulo Isosceles\n");
    } else {
        printf("Triangulo Escaleno\n");
    }

    return 0;
}

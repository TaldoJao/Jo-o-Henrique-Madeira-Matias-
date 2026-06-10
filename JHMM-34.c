#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    printf("\n***************************************************************");
    printf("\n* Aluno: JOAO HENRIQUE MADEIRA MATIAS - RA 0028808            *");
    printf("\n* Programa JHMM-34 - Verificar se um numero e primo           *");
    printf("\n***************************************************************\n");

    // seu codigo
    int num, i, primo = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 2) {
        primo = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("%d e primo!\n", num);
    } else {
        printf("%d nao e primo.\n", num);
    }

    return 0;
}

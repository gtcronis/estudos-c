#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int base, altura, i, j;

    printf("Digite o tamanho da base: ");
    scanf("%d", &base);

    printf("Digite o tamanho da altura: ");
    scanf("%d", &altura);

    if (base <= 0 || altura <= 0) {
        printf("Retângulo inválido\n");
    } else {
        for (i = 0; i < altura; i++) {
            for (j = 0; j < base; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int altura, i, j;

    printf("Digite o tamanho da altura: ");
    scanf("%d", &altura);

    if (altura <= 0) {
        printf("Triângulo inválido\n");
    } else {
        for (i = 1; i <= altura; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
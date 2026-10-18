#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int num, i;
    long long fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Parâmetro inválido.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %lld.\n", num, fatorial);
    }

    return 0;
}
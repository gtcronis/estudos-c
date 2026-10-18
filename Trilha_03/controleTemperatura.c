#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int temp;
    int maior = -1000;
    int menor = 1000;
    int temRegistroValido = 0;

    printf("Digite as temperaturas (0 para encerrar):\n");

    while (1) {
        scanf("%d", &temp);

        if (temp == 0) {
            break;
        }

        if (temp < -50 || temp > 60) {
            printf("Temperatura inválida\n");
            continue;
        }

        if (temp > maior) {
            maior = temp;
        }
        if (temp < menor) {
            menor = temp;
        }

        temRegistroValido = 1;
    }

    if (temRegistroValido) {
        printf("Maior temperatura: %d\n", maior);
        printf("Menor temperatura: %d\n", menor);
    }

    return 0;
}
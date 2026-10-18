#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int opcao;
    float n1, n2;

    do {
        printf("\nMenu de Opções:\n");
        printf("1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\n0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Fim.\n");
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("Opção inválida\n");
            continue;
        }

        printf("Digite o primeiro valor: ");
        scanf("%f", &n1);

        printf("Digite o segundo valor: ");
        scanf("%f", &n2);

        if (opcao == 1) {
            printf("Resultado: %.1f + %.1f = %.1f\n", n1, n2, n1 + n2);
        } else if (opcao == 2) {
            printf("Resultado: %.1f - %.1f = %.1f\n", n1, n2, n1 - n2);
        } else if (opcao == 3) {
            printf("Resultado: %.1f * %.1f = %.1f\n", n1, n2, n1 * n2);
        } else if (opcao == 4) {
            if (n2 == 0) {
                printf("Divisão por zero não permitida\n");
            } else {
                printf("Resultado: %.1f / %.1f = %.1f\n", n1, n2, n1 / n2);
            }
        }

    } while (opcao != 0);

    return 0;
}
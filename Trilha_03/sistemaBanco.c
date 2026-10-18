#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int opcao;
    float saldo = 0.0, valor;

    do {
        printf("\nMenu de Opções:\n");
        printf("1. Consultar Saldo\n2. Realizar Depósito\n3. Realizar Saque\n0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo atual: R$ %.0f\n", saldo);
        } else if (opcao == 2) {
            printf("Digite o valor do depósito: ");
            scanf("%f", &valor);

            if (valor < 0) {
                printf("Valor inválido\n");
            } else {
                saldo += valor;
                printf("Saldo atual: R$ %.0f\n", saldo);
            }
        } else if (opcao == 3) {
            printf("Digite o valor do saque: ");
            scanf("%f", &valor);

            if (valor < 0) {
                printf("Valor inválido\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente\n");
            } else {
                saldo -= valor;
                printf("Saldo atual: R$ %.0f\n", saldo);
            }
        } else if (opcao == 0) {
            break;
        } else {
            printf("Opção inválida\n");
        }

    } while (opcao != 0);

    return 0;
}
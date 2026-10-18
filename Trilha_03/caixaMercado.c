#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float valor, total = 0.0;
    int parcelas;

    printf("Digite os valores das compras (0 para finalizar):\n");

    while (1) {
        scanf("%f", &valor);

        if (valor == 0) {
            break;
        }

        if (valor < 0) {
            printf("Valor inválido: %.0f\n", valor);
            continue;
        }

        total += valor;
    }

    if (total > 0) {
        printf("Total da compra: R$ %.0f\n", total);
        printf("Digite a quantidade de parcelas: ");
        scanf("%d", &parcelas);

        if (parcelas <= 1) {
            printf("Pagamento à vista: R$ %.0f\n", total);
        } else {
            printf("Parcelado em %dx de R$ %.2f\n", parcelas, total / parcelas);
        }
    }

    return 0;
}
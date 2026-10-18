#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float ganhos, gastos;

    printf("Digite o total de ganhos (R$): ");
    scanf("%f", &ganhos);

    printf("Digite o total de gastos (R$): ");
    scanf("%f", &gastos);

    if (ganhos >= gastos) {
        printf("Você está dentro do orçamento!\n");
    } else {
        printf("Você está fora do orçamento! Não gaste mais!\n");
    }

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    char nome[50];
    float valorCompra, porcentagemDesconto;

    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    printf("Digite o valor da compra (R$): ");
    scanf("%f", &valorCompra);

    printf("Digite a porcentagem do cupom de desconto (%%): ");
    scanf("%f", &porcentagemDesconto);

    float valorDesconto = valorCompra * (porcentagemDesconto / 100.0);
    float totalFinal = valorCompra - valorDesconto;

    printf("\nOlá %s, sua compra de R$ %.2f foi confirmada!\n", nome, valorCompra);
    printf("Foi aplicado um desconto de %.1f%%.\n", porcentagemDesconto);
    printf("O total final ficou em R$ %.2f\n", totalFinal);

    return 0;
}
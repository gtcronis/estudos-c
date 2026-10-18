#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float valorReal;

    printf("Digite o valor em reais (R$): ");
    scanf("%f", &valorReal);

    float valorDolar = valorReal / 5.50;

    printf("\nValor em real R$ %.0f.\n", valorReal);
    printf("Valor em dólar $ %.2f.\n", valorDolar);

    return 0;
}
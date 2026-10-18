#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float gramas;

    printf("Digite o total de gramas comprado: ");
    scanf("%f", &gramas);

    if (gramas <= 0) {
        printf("Peso inválido\n");
    } else {
        float preco100g;

        if (gramas >= 1000) {
            preco100g = 3.00; // Desconto de R$ 0,50 a partir de 1kg
        } else {
            preco100g = 3.50;
        }

        float total = (gramas / 100.0) * preco100g;
        printf("O total é R$ %.2f\n", total);
    }

    return 0;
}
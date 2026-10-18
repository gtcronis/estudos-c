#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    char tamanho;
    float preco = 0.0;
    float cupomDesconto;

    printf("Escolha o tamanho do açaí (P - R$13.50 | M - R$15.00 | G - R$17.50): ");
    scanf(" %c", &tamanho);

   
    if (tamanho == 'P' || tamanho == 'p') {
        preco = 13.50;
    } else if (tamanho == 'M' || tamanho == 'm') {
        preco = 15.00;
    } else if (tamanho == 'G' || tamanho == 'g') {
        preco = 17.50;
    } else {
        printf("Tamanho inválido!\n");
        return 1;
    }

    printf("Digite a porcentagem de desconto (%%): ");
    scanf("%f", &cupomDesconto);

    float valorDesconto = preco * (cupomDesconto / 100.0);
    float totalFinal = preco - valorDesconto;

    printf("\nTotal R$ %.2f\n", totalFinal);

    return 0;
}
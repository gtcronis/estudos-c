#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int curso, isento;
    float desconto, valorBase = 0.0;

    printf("Escolha o Curso:\n");
    printf("1 - SI (Sistemas de Informação)\n");
    printf("2 - ADS (Análise e Desenvolvimento de Sistemas)\n");
    printf("3 - CS (Ciência da Computação)\n");
    printf("4 - EC (Engenharia da Computação)\n");
    printf("5 - ES (Engenharia de Software)\n");
    printf("Opção: ");
    scanf("%d", &curso);

    if (curso == 1) {
        valorBase = 900.00;
    } else if (curso == 2) {
        valorBase = 750.00;
    } else if (curso == 3) {
        valorBase = 1150.00;
    } else if (curso == 4) {
        valorBase = 1300.00;
    } else if (curso == 5) {
        valorBase = 950.00;
    } else {
        printf("Curso não encontrado\n");
        return 0;
    }

    printf("Isento? (1 - Sim | 0 - Não): ");
    scanf("%d", &isento);

    printf("Digite a porcentagem de desconto (%%): ");
    scanf("%f", &desconto);

    printf("Valor da mensalidade:\n");

    if (isento == 1) {
        printf("R$ 0.00\n");
    } else {
        float valorFinal = valorBase - (valorBase * (desconto / 100.0));
        printf("R$ %.2f\n", valorFinal);
    }

    return 0;
}
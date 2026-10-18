#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int pessoas;

   
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &pessoas);


    float kgCarne = pessoas * 0.3;
    float kgLinguica = pessoas * 0.2;
    float kgFrango = pessoas * 0.15;

    float custoCarne = kgCarne * 50.00;
    float custoLinguica = kgLinguica * 28.00;
    float custoFrango = kgFrango * 22.00;

    float custoTotal = custoCarne + custoLinguica + custoFrango;
    float custoPorPessoa = custoTotal / pessoas;

    printf("\nQuantidades:\n");
    printf("Carne: %.1f kg - Linguiça: %.1f kg - Frango: %.1f kg\n\n", kgCarne, kgLinguica, kgFrango);

    printf("Custo total:\n");
    printf("Carne: R$ %.2f - Linguiça: R$ %.2f - Frango: R$ %.2f\n\n", custoCarne, custoLinguica, custoFrango);

    printf("Custo total do churrasco: R$ %.2f\n", custoTotal);
    printf("Cada pessoa deve contribuir com: R$ %.2f\n", custoPorPessoa);

    return 0;
}
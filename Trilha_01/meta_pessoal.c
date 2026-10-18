#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    char descricaoMeta[100];
    float valorMeta, salario, despesas;

    printf("Digite a descrição da sua meta: ");
    fgets(descricaoMeta, sizeof(descricaoMeta), stdin);

    printf("Digite o valor necessário para a meta (R$): ");
    scanf("%f", &valorMeta);

    printf("Digite o seu salário mensal (R$): ");
    scanf("%f", &salario);

    printf("Digite o total das despesas mensais (R$): ");
    scanf("%f", &despesas);

    float saldoAposDespesas = salario - despesas;
    float reservaFixa = saldoAposDespesas * 0.30;
    float disponivelMeta = saldoAposDespesas - reservaFixa;
    float prazoMeses = valorMeta / disponivelMeta;

    printf("\nMeta: %s (R$ %.2f)\n", descricaoMeta, valorMeta);
    printf("Salário: R$ %.2f - Despesas: R$ %.2f\n", salario, despesas);
    printf("Saldo após despesas: R$ %.2f\n", saldoAposDespesas);
    printf("Reserva fixa (30%%): R$ %.2f\n", reservaFixa);
    printf("Valor disponível para a meta: R$ %.2f por mês\n", disponivelMeta);
    printf("Prazo estimado para atingir a meta: %.2f meses\n", prazoMeses);

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float tamanhoPistaMetros;
    int quantidadeVoltas;
    float tempoPrimeiraVoltaSegundos;

    printf("Digite o tamanho da pista (em metros): ");
    scanf("%f", &tamanhoPistaMetros);

    printf("Digite a quantidade de voltas: ");
    scanf("%d", &quantidadeVoltas);

    printf("Digite o tempo da primeira volta (em segundos): ");
    scanf("%f", &tempoPrimeiraVoltaSegundos);

    float distanciaTotalKm = (tamanhoPistaMetros * quantidadeVoltas) / 1000.0;
    float previsaoMinutos = (tempoPrimeiraVoltaSegundos * quantidadeVoltas) / 60.0;

    printf("\nAnálise Preditiva Concluída\n");
    printf("Distância total a ser percorrida: %.2f km.\n", distanciaTotalKm);
    printf("Previsão de conclusão: %.1f minutos.\n", previsaoMinutos);

    return 0;
}
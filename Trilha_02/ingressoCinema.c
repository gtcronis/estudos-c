#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int inteiras, meias;
    int diaSemana, nacional;

    printf("Quantidade de ingressos inteiros: ");
    scanf("%d", &inteiras);

    printf("Quantidade de ingressos meias: ");
    scanf("%d", &meias);

    printf("Dia da semana:\n");
    printf("1 - Domingo | 2 - Segunda | 3 - Terça | 4 - Quarta | 5 - Quinta | 6 - Sexta | 7 - Sábado\n");
    printf("Opção: ");
    scanf("%d", &diaSemana);

    printf("O filme é nacional? (1 - Sim | 0 - Não): ");
    scanf("%d", &nacional);

    float precoInteira = 28.50;
    float precoMeia = precoInteira / 2.0;

    
    if (nacional == 1) {
        precoInteira = 5.00;
        precoMeia = 5.00;
    } 

    else if (diaSemana == 4) {
        precoInteira = 14.50;
        precoMeia = 14.50;
    }

    float totalPagar = (inteiras * precoInteira) + (meias * precoMeia);

    printf("Total à pagar:\n");
    printf("R$ %.2f\n", totalPagar);

    return 0;
}
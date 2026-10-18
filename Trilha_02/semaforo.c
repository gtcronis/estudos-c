#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int opcao;

    printf("Escolha a cor do semáforo:\n");
    printf("1 - Vermelho\n");
    printf("2 - Verde\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Espere\n");
    } else if (opcao == 2) {
        printf("Atravesse\n");
    } else {
        printf("Farol inoperante\n");
    }

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int cor1, cor2;

    printf("Cores Primárias disponíveis:\n1 - Vermelho\n2 - Azul\n3 - Amarelo\n");

    printf("Digite a primeira cor (1, 2 ou 3): ");
    scanf("%d", &cor1);

    printf("Digite a segunda cor (1, 2 ou 3): ");
    scanf("%d", &cor2);

  
    if (cor1 < 1 || cor1 > 3 || cor2 < 1 || cor2 > 3) {
        printf("Apenas cores primárias são aceitas.\n");
    } else {
        printf("A combinação resulta em:\n");

        if ((cor1 == 1 && cor2 == 2) || (cor1 == 2 && cor2 == 1)) {
            printf("Roxo\n");
        } else if ((cor1 == 1 && cor2 == 3) || (cor1 == 3 && cor2 == 1)) {
            printf("Laranja\n");
        } else if ((cor1 == 2 && cor2 == 3) || (cor1 == 3 && cor2 == 2)) {
            printf("Verde\n");
        } else if (cor1 == 1) {
            printf("Vermelho\n");
        } else if (cor1 == 2) {
            printf("Azul\n");
        } else if (cor1 == 3) {
            printf("Amarelo\n");
        }
    }

    return 0;
}
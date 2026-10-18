#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float num1, num2;
    int operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\nMenu de Operações:\n");
    printf("1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Resto\n6. Potência\n");
    printf("Escolha a operação (1 a 6): ");
    scanf("%d", &operacao);

    if (operacao == 1) {
        printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
    } else if (operacao == 2) {
        printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
    } else if (operacao == 3) {
        printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);
    } else if (operacao == 4) {
        if (num2 == 0) {
            printf("Divisão por zero não permitida\n");
        } else {
            printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
        }
    } else if (operacao == 5) {
        printf("%.1f mod %.1f = %.1f\n", num1, num2, (float)((int)num1 % (int)num2));
    } else if (operacao == 6) {
      
        float resultado = 1.0;
        int expoente = (int)num2;
        int i;
        for (i = 0; i < expoente; i++) {
            resultado *= num1;
        }
        printf("%.1f ^ %.1f = %.1f\n", num1, num2, resultado);
    } else {
        printf("Operação não suportada\n");
    }

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int pos, i;
    long long f1 = 1, f2 = 1, fProximo;

    printf("Digite a posição desejada na sequência de Fibonacci: ");
    scanf("%d", &pos);

    if (pos <= 0) {
        printf("Posição inválida.\n");
    } else if (pos == 1 || pos == 2) {
        printf("O valor na posição %d da sequência de Fibonacci é %d\n", pos, 1);
    } else {
        for (i = 3; i <= pos; i++) {
            fProximo = f1 + f2;
            f1 = f2;
            f2 = fProximo;
        }
        printf("O valor na posição %d da sequência de Fibonacci é %lld\n", pos, f2);
    }

    return 0;
}
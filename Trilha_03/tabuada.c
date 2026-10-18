#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int num, i;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    char nome[50];
    float nota1, nota2, nota3;

    printf("Digite o nome do estudante: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3.0;

    printf("\nEstudante %s ficou com média %.1f\n", nome, media);

    return 0;
}
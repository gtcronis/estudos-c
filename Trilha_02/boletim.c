#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float nota1, nota2, nota3;
    int faltas;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

   
    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10 || faltas < 0) {
        printf("valore inválidos\n");
    } else {
        float media = (nota1 + nota2 + nota3) / 3.0;
        printf("Média: %.1f.\n", media);

        if (faltas > 4) {
            printf("Situação: Reprovado por Falta\n");
        } else if (media == 0) {
            printf("Situação: Desistente\n");
        } else if (media >= 8.0 && media <= 10.0) {
            printf("Situação: Aprovado com sucesso\n");
        } else if (media >= 6.0 && media < 8.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Recuperação\n");
        }
    }

    return 0;
}
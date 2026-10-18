#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    char nome[50];
    float altura, peso;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite sua altura em metros (ex: 1.89): ");
    scanf("%f", &altura);

    printf("Digite seu peso em kg (ex: 94.5): ");
    scanf("%f", &peso);

    float imc = peso / (altura * altura);

    printf("\n%s, seu IMC é de %.4f\n", nome, imc);

    return 0;
}
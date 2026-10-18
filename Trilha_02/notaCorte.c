#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float notaCandidato, notaCorte, notaMinAprovacao;

    printf("Digite a nota do candidato: ");
    scanf("%f", &notaCandidato);

    printf("Digite a nota de corte: ");
    scanf("%f", &notaCorte);

    printf("Digite a nota mínima para aprovação: ");
    scanf("%f", &notaMinAprovacao);

    printf("Situação candidato:\n");

    if (notaCandidato < notaCorte) {
        printf("Reprovado\n");
    } else if (notaCandidato >= notaMinAprovacao) {
        printf("Aprovado\n");
    } else {
        printf("Lista de Espera\n");
    }

    return 0;
}
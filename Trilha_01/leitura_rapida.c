#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    char nome[50];
    char livro[100];
    int paginas, tempoSegundosPorPagina;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    getchar(); 
    printf("Digite o nome do livro: ");
    fgets(livro, sizeof(livro), stdin);

    printf("Digite o total de páginas do livro: ");
    scanf("%d", &paginas);

    printf("Digite o tempo de leitura por página (em segundos): ");
    scanf("%d", &tempoSegundosPorPagina);

    float tempoTotalSegundos = paginas * tempoSegundosPorPagina;
    float tempoHoras = tempoTotalSegundos / 3600.0;

    printf("\n%s, você finalizará a leitura do livro %sem aproximadamente %.2f horas.\n", nome, livro, tempoHoras);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <windows.h>

#define MAX_PROD 1000

int main() {
    SetConsoleOutputCP(65001);

    char nomes[MAX_PROD][50];
    int quantidades[MAX_PROD];
    int total_cadastrados = 0;
    int opcao, prod_idx, qtd_op, i;

    do {
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (total_cadastrados < MAX_PROD) {
                scanf("%s", nomes[total_cadastrados]);
                scanf("%d", &quantidades[total_cadastrados]);
                total_cadastrados++;
                printf("Produto adicionado com sucesso!\n");
            } else {
                printf("Limite de produtos atingido!\n");
            }
        } else if (opcao == 2) {
            if (total_cadastrados == 0) {
                printf("Nenhum produto cadastrado.\n");
            } else {
                scanf("%d", &prod_idx);
                scanf("%d", &qtd_op);
                if (prod_idx >= 1 && prod_idx <= total_cadastrados) {
                    quantidades[prod_idx - 1] += qtd_op;
                    printf("Entrada realizada com sucesso!\n");
                }
            }
        } else if (opcao == 3) {
            if (total_cadastrados == 0) {
                printf("Nenhum produto cadastrado.\n");
            } else {
                scanf("%d", &prod_idx);
                scanf("%d", &qtd_op);
                if (prod_idx >= 1 && prod_idx <= total_cadastrados) {
                    if (qtd_op <= quantidades[prod_idx - 1]) {
                        quantidades[prod_idx - 1] -= qtd_op;
                        printf("Saída realizada com sucesso!\n");
                    } else {
                        printf("Quantidade indisponível em estoque!\n");
                    }
                }
            }
        } else if (opcao == 4) {
            if (total_cadastrados == 0) {
                printf("Nenhum produto cadastrado.\n");
            } else {
                printf("Estoque atual:\n");
                for (i = 0; i < total_cadastrados; i++) {
                    printf("Produto %d: %s - %d unidades\n", i + 1, nomes[i], quantidades[i]);
                }
            }
        } else if (opcao == 0) {
            printf("Encerrando o programa...\n");
        }

    } while (opcao != 0);

    return 0;
}
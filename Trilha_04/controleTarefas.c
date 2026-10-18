#include <stdio.h>
#include <windows.h>

#define MAX_TAREFAS 100

int main() {
    SetConsoleOutputCP(65001);

    char tarefas[MAX_TAREFAS][100];
    int concluidas[MAX_TAREFAS] = {0};
    int total_tarefas = 0;
    int opcao, idx, i;

    do {
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (total_tarefas < MAX_TAREFAS) {
                scanf(" %[^\n]", tarefas[total_tarefas]);
                concluidas[total_tarefas] = 0;
                total_tarefas++;
                printf("Tarefa adicionada com sucesso!\n");
            }
        } else if (opcao == 2) {
            if (total_tarefas == 0) {
                printf("Nenhuma tarefa cadastrada.\n");
            } else {
                printf("Lista de tarefas:\n");
                for (i = 0; i < total_tarefas; i++) {
                    if (concluidas[i] == 1) {
                        printf("%d- [X] %s\n", i + 1, tarefas[i]);
                    } else {
                        printf("%d- [ ] %s\n", i + 1, tarefas[i]);
                    }
                }
            }
        } else if (opcao == 3) {
            scanf("%d", &idx);
            if (idx >= 1 && idx <= total_tarefas) {
                concluidas[idx - 1] = 1;
                printf("Tarefa %d marcada como concluída.\n", idx);
            }
        } else if (opcao == 4) {
            if (total_tarefas == 0) {
                printf("Nenhuma tarefa cadastrada.\n");
            } else {
                printf("Tarefas pendentes:\n");
                for (i = 0; i < total_tarefas; i++) {
                    if (concluidas[i] == 0) {
                        printf("%d- [ ] %s\n", i + 1, tarefas[i]);
                    }
                }
            }
        } else if (opcao == 0) {
            printf("Encerrando o programa...\n");
        }

    } while (opcao != 0);

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    char palavraOriginal[50];
    char palavraSoletrada[50];
    char letra;
    int pos = 0;

    printf("Digite a palavra original: ");
    scanf("%s", palavraOriginal);

    printf("Soletre a palavra caractere por caractere (digite 0 para encerrar):\n");

    while (1) {
        scanf(" %c", &letra);

        if (letra == '0') {
            break;
        }

        palavraSoletrada[pos] = letra;
        pos++;
    }

    palavraSoletrada[pos] = '\0'; 

    printf("Palavra original: %s\n", palavraOriginal);
    printf("Palavra soletrada: %s\n", palavraSoletrada);

    return 0;
}
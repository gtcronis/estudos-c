#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    
    char nome[50] = "Gabriel";
    char curso[50] = "Dominando Algoritmos com C";
    int semestre = 2;
    char hobby[50] = "cozinhar";

    printf("Prazer, eu sou o(a) %s!\n", nome);
    printf("Atualmente estou no %dº semestre de %s e meu hobby favorito é %s.\n", semestre, curso, hobby);

    return 0;
}
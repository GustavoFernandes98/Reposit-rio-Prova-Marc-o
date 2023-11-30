//escreva uma funcao que recebe como parametro um vetor de strings (matriz de char)
// calcule o tamanho medio entre todas as strings armazenadas



#include <stdio.h>
#include <string.h>

double calcular_tamanho_medio(char *matriz[] , int tamanho_matriz) {
    double tamanho_total = 0;

    for(int i = 0; i < tamanho_matriz; i++) {
        tamanho_total += strlen(matriz[i]);
    }

    return tamanho_total / tamanho_matriz;
}

int main() {
    char *matriz[] = {"String1", "String2", "String3"};
    int tamanho_matriz = sizeof(matriz) / sizeof(matriz[0]);

    double tamanho_medio = calcular_tamanho_medio(matriz, tamanho_matriz);

    printf("O tamanho medio das strings eh: %.2f\n", tamanho_medio);

    return 0;
}

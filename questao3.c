// escreva uma funcao que recebe como parametro duas strings e calcule o tamanho medio entre as duas 


#include <stdio.h>
#include <string.h>

double tamanhoMedio(char *str1, char *str2) {
    int tamanhoStr1 = strlen(str1);
    int tamanhoStr2 = strlen(str2);
    double tamanhoMedio = (tamanhoStr1 + tamanhoStr2) / 2.0;
    return tamanhoMedio;
}

int main() {
    char str1[] = " Primeiro Exemplo de String";
    char str2[] = "Segundo Exemplo de String";
    double resultado = tamanhoMedio(str1, str2);
    printf("O tamanho medio entre as duas strings eh: %.2f\n", resultado);
    return 0;
}


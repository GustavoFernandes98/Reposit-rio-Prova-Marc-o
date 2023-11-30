// escreva uma funcao que receba como parametro um numero e retorne o fatorial dele calculado

#include <stdio.h>

int fatorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * fatorial(num - 1);
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    int resultado = fatorial(num);
    printf("O fatorial de %d eh: %d\n", num, resultado);
    return 0;
}
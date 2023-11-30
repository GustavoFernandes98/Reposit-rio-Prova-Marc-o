// escreva uma funcao que receb como parametro dois numeros e retorne:
// SOMA (se o primeiro for menor que o segundo)
// MULTIPLICACAO (entre eles se forem iguais)
// SUBTRACAO (se o primeiro for maior que o segundo)

#include <stdio.h>

int calcular(int num1, int num2) {
    if (num1 < num2)
        return num1 + num2;
    else if (num1 == num2)
        return num1 * num2;
    else
        return num1 - num2;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = calcular(num1, num2);
    printf("O resultado da operacao eh: %d\n", resultado);

    return 0;
}
// Escreva uma funcao que recebe como parametro uma string e verifique se ela é palindromo ou nao 

#include <stdio.h>
#include <string.h>

int palindromo(char *str) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    char str[] = "ovo";
    if (palindromo(str)) {
        printf("A string '%s' eh um palindromo.\n", str);
    } else {
        printf("A string '%s' nao eh um palindromo.\n", str);
    }
    return 0;
}
#include <stdio.h>

// Função para inverter os caracteres de uma string
void inverterString(char *str) {
   
    int comprimento = 0;
    while (str[comprimento] != '\0') {
        comprimento++;
    }

    // Inverte os caracteres da string
    for (int i = 0; i < comprimento / 2; i++) {
        char temp = str[i];
        str[i] = str[comprimento - i - 1];
        str[comprimento - i - 1] = temp;
    }
}

int main() {
   
    char string[] = "Bom dia pessoal";

    printf("String original: %s\n", string);
    inverterString(string);
    printf("String invertida: %s\n", string);

    return 0;
}

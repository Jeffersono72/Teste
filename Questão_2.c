#include <stdio.h>

// Verifica se pertence a sequencia Fibonacci
int verificaFibonacci(int numero) {
    int a = 0, b = 1, prox;
    while (b < numero) {
        prox = b;
        b = a + b;
        a = prox;
    }
    return (b == numero);
}

void imprimirResultado(int numero_informado){
    
     // Chama a função e imprime o resultado
    if (verificaFibonacci(numero_informado))
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero_informado);
    else
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero_informado);

}

int main() {
    int numero_informado;
    printf("Digite um numero: ");
    scanf("%d", &numero_informado);
    imprimirResultado(numero_informado);
    return 0;
}


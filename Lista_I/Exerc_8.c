//Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o
//somatório de 1 até n: 1 + 2 + 3 + ... + n.

#include <stdio.h>

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main(int argc, char *argv[]) {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        int resultado = somatorio(n);
        printf("O somatório de 1 até %d é: %d\n", n, resultado);
    } else {
        printf("Por favor, insira um número inteiro positivo.\n");
    }

    return 0;
}


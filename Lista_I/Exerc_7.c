//Faça uma função que leia um número não determinado de valores positivos e retorna
//a média aritmética dos mesmos.

#include <stdio.h>

float calcularMedia() {
    float soma = 0.0;
    int count = 0;
    float valor;

    printf("Digite valores positivos (digite um valor negativo para encerrar):\n");
    while (1) {
        scanf("%f", &valor);
        if (valor < 0) {
            break;
        }
        soma += valor;
        count++;
    }

    if (count == 0) {
        return 0.0; // Evita divisão por zero
    }
    return soma / count;
}

int main(int argc, char *argv[]) {
    float media = calcularMedia();
    if (media > 0) {
        printf("A média aritmética dos valores positivos é: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }
    return 0;
}
//Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a
//taboada de 1 até N. Mostre a tabuada na forma:
//1 x N = N
//2 x N = 2N
//...
//N x N = N2

#include <stdio.h>

void tabuada(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d x %d = %d\n", i, N, i * N);
    }
}

int main(int argc, char *argv[]) {
    int N;

    printf("Digite um valor inteiro positivo N: ");
    scanf("%d", &N);

    if (N > 0) {
        tabuada(N);
    } else {
        printf("Por favor, insira um valor inteiro positivo.\n");
    }

    return 0;
}


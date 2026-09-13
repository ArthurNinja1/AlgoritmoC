//Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
//vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros.

#include <stdio.h> 

void preencherVetor(int *ponteiro, int *fim, int valor) {
    while(ponteiro < fim) {
        *ponteiro = valor;
        ponteiro++;
    }
}

int main(int argc, char *argv[]) {
    int vetor[10];
    int valor = 4;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int *ponteiro = vetor;
    int *fim = vetor + tamanho; 

    preencherVetor(ponteiro, fim, valor);

    printf("Vetor preenchido: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
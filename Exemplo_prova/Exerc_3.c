//Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
//vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros

#include <stdio.h>
#define TAM 4

void adicionarAoVetor(int vetor[4], valor, tamanho) {
    int *ptr = vetor[0];
    int *ptrfinal = vetor[TAM];
    while (ptr < ptrfinal) {
        *ptr = valor;
        ptr++;
    }
}

int main(int argc, char **argv) {
    int vetor[TAM];
    int valor = 3;
    for (int i = 0; i < TAM; i++) {
        printf(" %d ", vetor[i])
    }
    return 0;
}
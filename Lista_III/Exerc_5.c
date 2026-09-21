//Crie uma função que varra um vetor de inteiros uma única vez e retorne três
//informações simultaneamente (Devem ser apresentadas na Main).
//-Assinatura: void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max,
//float *media);
//-O main deve passar um vetor e os endereços das variáveis onde os resultados
//serão armazenados. Toda a varredura do vetor deve ser feita via aritmética de
//ponteiros (*(vetor + i) ou avançando um ponteiro auxiliar).

#include <stdio.h>
#define TAM 5

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media);

int main(int argc, char **argv) {
    int vetor[TAM] = {21, 24, 10, 30, 28};
    int min, max;
    float media;

    extrair_estatisticas(vetor, TAM, &min, &max, &media);
    printf("\nMenor: %d\n", min);
    printf("Maior: %d\n", max);
    printf("Media: %.2f\n", media);

    return 0;
}

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media) {
    int soma = 0;
    *min = *vetor;
    *max = *vetor;

    for (int i = 0; i < tamanho; i++) {

        if (*(vetor+i) < *min) {
            *min = *(vetor + i);
        }

        if (*(vetor + i) > *max) {
            *max = *(vetor + i);
        }

        soma += *(vetor + i);
    }
    *media = (float)soma/ tamanho;
}

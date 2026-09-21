//Escreva uma função que receba um vetor de inteiros, seu tamanho e um número X
//(informado pelo usuário). A função deve buscar X no vetor e retornar um ponteiro para
//a primeira posição de memória onde X foi encontrado.
//-Se X não estiver no vetor, a função deve retornar NULL.
//-Apresente o resultado na main.

#include <stdio.h>
#define TAM 10

int *buscaNoVetor (int vetor[], int tamanho, int valor);

int main(int argc, char *argv[]) {

  int entrada;
  int vetor[TAM] = {10,20,30,40,50,60,70,80,90,100};
  
  printf("\nDe um valor para ser retornado seu ponteiro no vetor:  ");
  
  if (scanf("%d", &entrada) != 1) {
    printf("\nvalor digitado invalido...");
    return 0;
  }

  int *endereco = buscaNoVetor(vetor, TAM, entrada);
  if (endereco != NULL) {
    printf("\nO valor está no endereco %p.", (void *)endereco);
  } else {
    printf("\nValor não encontrado\n");
  }

  return 0;
}

int *buscaNoVetor(int vetor[], int tamanho, int valor) {

  int *endereco = NULL;
  
  for (int i = 0; i < tamanho; i++) {
    
    if (vetor[i] == valor) {
      endereco = &vetor[i];
    }
  }
  return endereco;
}
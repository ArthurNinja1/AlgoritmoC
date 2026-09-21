
//Crie uma função void inverte_vetor(int *vetor, int tamanho) que inverta a ordem dos
//elementos de um vetor original.
//-Você deve criar dois ponteiros locais dentro da função: um inicio apontando
//para o primeiro elemento e um fim apontando para o último.
//Instituto Federal de Mato Grosso do Sul
//Lista de Exercícios
//Faça um laço onde o inicio avança (++) e o fim recua (--) trocando os valores de
//lugar até que os ponteiros se cruzem no meio do vetor. Não utilize variáveis
//inteiras como índice.

#include <stdio.h>
#define TAM 5

void inverte_vetor(int *vetor, int tamanho);

int main (int argc, char *argv[]) {
  int vetor[TAM] = {1,2,3,4,5};
  printf("\nvetor original: ");
  for (int i = 0; i < TAM; i++){
    printf("%d ", vetor[i]);
  } 

  inverte_vetor(vetor, TAM);
  printf("\nVetor invertido: ");
  for (int i = 0; i < TAM; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
  return 0;
}

void inverte_vetor(int *vetor, int tamanho) {
  int *inicio = vetor;
  int *fim = (vetor + tamanho - 1);
  while (inicio < fim)
    {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}
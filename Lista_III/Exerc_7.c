//Implemente um algoritmo de ordenação simples (como Bubble Sort) para um vetor
//de inteiros usando ponteiros.
//-A lógica que inverte dois elementos de lugar não pode estar dentro da função de
//ordenação. Crie uma função auxiliar void swap(int *a, int *b).
//-O algoritmo principal deve percorrer o vetor usando ponteiros, e sempre que
//dois valores precisarem ser invertidos, seus endereços devem ser enviados para a
//função swap

#include <stdio.h>

void swap(int *a, int *b);
void bubble_sort(int *vetor, int tamanho);

int main(int argc, char **argv) {
    int tamanho = 10;
    int vetor[10] = {4,2,1,9,6,7,5,8,3,10};

    bubble_sort(vetor, tamanho);
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}

void bubble_sort(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int *ptr = vetor;

        for (int j = 0; j < tamanho; j++) {
            
            if (*ptr > *(ptr + 1)) {
                swap(ptr, ptr + 1);
            }

            ptr++;
        }   
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp; 
}
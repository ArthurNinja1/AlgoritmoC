//Escreva uma função que procure a ocorrência de um vetor menor dentro de um vetor
//maior.
//-Assinatura: int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s);
//A função deve procurar se a sequência exata de números do vetor sub existe
//dentro de vetor. Se encontrar, retorne um ponteiro apontando para o início dessa
//ocorrência no vetor original. Se não encontrar, retorne NULL.

#include <stdio.h>
int *buscar_subvetor(int *vetor, int tam_v, int *sub, int tam_s);

int main(int argc, char **argv) {
    int tamV = 10;
    int tamSV = 4;
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int subvetor[4] = {4,5,6,7};

    int *resultado = buscar_subvetor(vetor, tamV, subvetor, tamSV);

    if (resultado != NULL)
    {
        printf("Subvetor encontrado!\n");
        printf("Comeca no valor: %d\n", *resultado);
    }
    else
    {
        printf("Subvetor nao encontrado.\n");
    }

}

int *buscar_subvetor(int *vetor, int tam_v, int *sub, int tam_s) {
    for (int i = 0; i <= tam_v - tam_s; i++) {
        int encontrou = 1;

        for (int j = 0; j < tam_s; j++) {
            if (vetor[i + j] != sub[j]) {
                encontrou = 0;
                break;
            }
        }

        if (encontrou) {
            return &vetor[i];
        }
    }

    return NULL;
}
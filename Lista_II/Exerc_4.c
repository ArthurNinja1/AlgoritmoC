//Crie um programa que contenha uma matriz de float com três linhas e três colunas.
//Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>

int main(int argc, char *argv[]) {
    float matriz[3][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco de matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }
    return 0;
}
//Crie um programa que contenha um array com cinco elementos inteiros. Leia esse
//array do teclado e imprima o endereço das posições contendo valores pares.

#include <stdio.h>

int main(int argc, char *argv[]) {
    int array[5];
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enderecos das posicoes com valores pares:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("Endereco de array[%d]: %p\n", i, (void*)&array[i]);
        }
    }
    return 0;
}
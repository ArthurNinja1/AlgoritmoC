//Crie um programa que contenha um array de inteiros com cinco elementos.
//Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro
//de cada valor lido.

#include <stdio.h>

int main(int argc, char *argv[]) {
    int array[5] = {1,2,3,4,5};
    int *ptr = array;
    for (int i = 0; i < 5; i++) {
        printf("Dobro de array[%d]: %d\n", i, *(ptr + i) * 2);
    }
    return 0;
}
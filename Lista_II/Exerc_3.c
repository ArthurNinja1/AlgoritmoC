//Crie um programa que contenha um array de float com 10 elementos. Imprima o
//endereço de cada posição desse array.
#include <stdio.h>

int main(int argc, char *argv[]) {
    float array[10];
    float *p;

    for (int i = 0; i < 10; i++) {
        p = &array[i];
        printf("Endereço da posição %d: %p\n", i, (void *)p);
    }

    return 0;
}
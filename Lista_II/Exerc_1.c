//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços
//e exiba o maior endereço.

#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b;
    int *p1 = &a;
    int *p2 = &b;

    if (p1 > p2) {
        printf("O maior endereço é: %p\n", (void *)p1);
    } else {
        printf("O maior endereço é: %p\n", (void *)p2);
    }

    return 0;
}
//Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que leia
//a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
//apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
//triplo, e d, o quádruplo.

#include <stdio.h>

int main(void) {
    int a, *b, **c, ***d;

    printf("Digite um valor: ");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("\nDobro: %d\n", *b + *b);
    printf("Triplo: %d\n", **c + **c + **c);
    printf("Quadruplo: %d\n", ***d + ***d + ***d + ***d);

    return 0;
}
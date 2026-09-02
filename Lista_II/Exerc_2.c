//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
//teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b;
    int *p1 = &a;
    int *p2 = &b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (p1 > p2) {
        printf("O conteúdo do maior endereço é: %d\n", *p1);
    } else {
        printf("O conteúdo do maior endereço é: %d\n", *p2);
    }

    return 0;
}
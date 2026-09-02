//Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses
//valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar
//qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário
//que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um
//triângulo é menor do que a soma do comprimento dos outros dois lados. O
//procedimento deve identificar o tipo de triângulo formado observando as seguintes
//definições:
//a. Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
//b. Triângulo Isósceles: os comprimentos de 2 lados são iguais.
//c. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.

#include <stdio.h>

void verificarTriangulo(float x, float y, float z) {
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("O triângulo é Equilátero.\n");
        } else if (x == y || y == z || x == z) {
            printf("O triângulo é Isósceles.\n");
        } else {
            printf("O triângulo é Escaleno.\n");
        }
    } else {
        printf("Os valores fornecidos não podem formar um triângulo.\n");
    }
}

int main(int argc, char *argv[]) {
    float x, y, z;

    printf("Digite os comprimentos dos lados do triângulo:\n");
    printf("Lado X: ");
    scanf("%f", &x);
    printf("Lado Y: ");
    scanf("%f", &y);
    printf("Lado Z: ");
    scanf("%f", &z);

    verificarTriangulo(x, y, z);

    return 0;
}
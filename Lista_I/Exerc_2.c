//Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo
//da fórmula de báskara e imprima as suas raízes, caso seja possível calcular.

#include <stdio.h>
#include <math.h>

void calcularBhaskara(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Não é possível calcular as raízes reais.\n");
    } else {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes da equação são: %.4f e %.4f\n", raiz1, raiz2);
    }
}

int main(int argc, char *argv[]) {
    float a, b, c;

    printf("Digite os valores de a, b e c da equação ax^2 + bx + c = 0:\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    calcularBhaskara(a, b, c);

    return 0;
}
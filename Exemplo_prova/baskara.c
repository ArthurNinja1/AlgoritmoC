//Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo
//da fórmula de báskara e imprima as suas raízes, caso seja possível calcular.

#include <stdio.h>
#include <math.h>

float X1, X2;
int baskara(int A, int B, int C);

int main(int argc, char **argv) {
    int A,B,C;
    printf("De o valor A B e C de baskara seprado por espaço: ");
    scanf("%d %d %d", &A, &B, &C);

    if (baskara(A,B,C)) {
        printf("\nValor de X1 = %.2f e X2 = %.2f", X1, X2);
    }
    return 0;
}

int baskara(int A, int B, int C) {
    float delta = (B * B) - 4 * A * C;
    
    if (delta >= 0) {
        X1 = (-B + sqrt(delta)) / (2 * A);
        X2 = (-B - sqrt(delta)) / (2 * A);
    } else {
        printf("\nDelta negativo!");
        X1 = 0;
        X2 = 0;
        return 0;
    }
    return 1;
}
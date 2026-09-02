//Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna
//o valor de S.
//S = 1 + 1/1! + ½! + 1/3! + 1 /N!

#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

float calcularS(int n) {
    float S = 1.0; // Começa com o termo 1
    for (int i = 1; i <= n; i++) {
        S += 1.0 / fatorial(i);
    }
    return S;
}
//Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
//representará a operação que se deseja efetuar com os números. Assim, se o símbolo
//for “ + ” , deverá ser realizada uma adição, se for “−”, uma subtração, se for “/”, uma
//Instituto Federal de Mato Grosso do Sul
//Lista de Exercícios
//divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da
//operação para o programa principal

#include <stdio.h>

float calcular(float a, float b, char operador) {
    switch (operador) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
                return 0;
            }
        default:
            printf("Erro: Operador inválido.\n");
            return 0;
    }
}

int main(int argc, char *argv[]) {
    float num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    float resultado = calcular(num1, num2, operador);
    printf("O resultado da operação é: %.2f\n", resultado);

    return 0;
}
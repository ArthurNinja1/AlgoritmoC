//Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito
//quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito,
//6 = 1 + 2 + 3, que são seus divisores). A função deve retornar o valor inteiro 1 para
//verdadeiro e 0 caso contrário.

#include <stdio.h>

int verificarPerfeito(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma == n;
}

int main(int argc, char *argv[]) {
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    if (verificarPerfeito(n)) {
        printf("%d é perfeito.\n", n);
    } else {
        printf("%d não é perfeito.\n", n);
    }

    return 0;
}
//Crie uma função que receba 3 valores inteiros por parâmetro e retorne o maior deles.
//Em seguida, no programa principal, exiba o valor retornado na tela.

#include <stdio.h>

int maiorDeTres(int valor1, int valor2, int valor3);

int main(int argc, char **argv) {
    int i,j,k;
    printf("de tres valores separados por um espaco: ");
    scanf("%d %d %d", &i, &j, &k);

    int maior = maiorDeTres(i,j,k);
    printf("o maior valor eh: %d", maior);
    return 0;
}

int maiorDeTres(int valor1, int valor2, int valor3) {

    int maior = valor1;

    if (valor2 > maior) {
        maior = valor2;
    }

    if (valor3 > maior) {
        maior = valor3;
    }
    
    return maior;
}
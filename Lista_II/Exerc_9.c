//Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros.

#include <stdio.h>

int main(int argc, char *argv[]) {
    char vetor[] = "Ola mundo";
    int tamanho = (sizeof(vetor) / sizeof(vetor[0]));
    char *ponteiro = vetor;
    char *final = vetor + tamanho - 1;
    
    while(ponteiro < final) {
        printf("%c", *ponteiro);
        ponteiro++;
    }
    
    
    return 0;
}
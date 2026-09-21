//Uma matriz bidimensional em C é armazenada na memória como um vetor contínuo.
//-Declare uma matriz int matriz[3][3] e preencha-a com valores de 1 a 9.
//-Crie um ponteiro simples int *ptr = &matriz[0][0];
//-Utilizando apenas este ponteiro simples e aritmética de ponteiros (ou seja,
//proibido usar laços aninhados com índices [i][j]), percorra os 9 elementos na
//memória e calcule a soma apenas dos elementos da diagonal principal.
//Dica: A diagonal principal ocorre em saltos regulares de memória.


#include <stdio.h>
#define TAM 3

int main(int argc, char *argv[]) {
    int matriz[TAM][TAM] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("\nos valores da diagonal principal são: ");
    int *ptr = &matriz[0][0];
    for (int i = 0; i < TAM; i++) {
        printf("%d,", *ptr);
        ptr += (TAM + 1);
    }


    return 0;
}


//Escreva um programa que contenha uma estrutura representando uma data válida.
//Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
//armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as
//duas datas.

#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};
typedef struct Data Data;

int diferencaDia(Data vetor[2]);

int main(int argc, char **argv) {
    Data vetor[2];
    for (int i = 0; i < 2; i++) {
        printf("\nDe o dia da %d data: ", i+1);
        scanf("%d", &vetor[i].dia);

        printf("\nDe o mes da %d data: ", i+1);
        scanf("%d", &vetor[i].mes);

        printf("\nDe o ano da %d data: ", i+1);
        scanf("%d", &vetor[i].ano);
    }

    int resultado = diferencaDia(vetor);
    printf("\nA diferenca e de %d dias.\n", resultado);
}


int diferencaDia(Data vetor[2]) {

    int dias1 = 0;
    int dias2 = 0;

    int diasMes[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    // Converte primeira data para dias
    dias1 = vetor[0].ano * 365;

    for (int i = 0; i < vetor[0].mes - 1; i++) {
        dias1 += diasMes[i];
    }

    dias1 += vetor[0].dia;

    // Converte a segunda data
    dias2 = vetor[1].ano * 365;

    for (int i = 0; i < vetor[1].mes - 1; i++) {
        dias2 += diasMes[i];
    }

    dias2 += vetor[1].dia;

    // Retorna diferenca positiva
    if (dias1 > dias2) {
        return dias1 - dias2;
    }

    return dias2 - dias1;
}

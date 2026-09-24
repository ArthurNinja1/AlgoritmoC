//Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
//dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.

#include <stdio.h>

struct Atleta {
    char nome[50];
    char esporte[100];
    int idade;
};

typedef struct Atleta Atleta;

void atletaMaisVelho(Atleta vetor[5]);

int main(int argc, char **argv) {
    Atleta vetorAtletas[5];

    for (int i = 0; i < 5; i++) {
        printf("\nNome do %d atleta: ", i+1);
        scanf(" %49[^\n]", vetorAtletas[i].nome);

        printf("Esporte do %d atleta: ", i+1);
        scanf(" %99[^\n]", vetorAtletas[i].esporte);

        printf("Idade do %d atleta: ", i+1);
        scanf("%d", &vetorAtletas[i].idade);
    }
    atletaMaisVelho(vetorAtletas);

    return 0;
}

void atletaMaisVelho(Atleta vetor[5]) {

    
    Atleta temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (vetor[i].idade < vetor[j].idade) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("\nOrdem do mais velho para o mais novo: ");
    for (int i = 0; i < 5; i++) {
        printf("\n%d : %s %d anos", i+1, vetor[i].nome, vetor[i].idade);
    }
}
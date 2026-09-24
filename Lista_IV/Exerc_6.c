//Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
//atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de
//cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.
#include <stdio.h>

struct Atleta {
    char nome[50];
    char esporte[100];
    int idade;
    float altura;
};

typedef struct Atleta Atleta;

void atletaMaisVelho(Atleta vetor[5]);
void atletaMaisAlto(Atleta vetor[5]);

int main(int argc, char **argv) {
    Atleta vetorAtletas[5];

    for (int i = 0; i < 5; i++) {
        printf("\nNome do %d atleta: ", i+1);
        scanf(" %49[^\n]", vetorAtletas[i].nome);

        printf("Esporte do %d atleta: ", i+1);
        scanf(" %99[^\n]", vetorAtletas[i].esporte);

        printf("Idade do %d atleta: ", i+1);
        scanf("%d", &vetorAtletas[i].idade);


        printf("Altura do %d atleta: ", i+1);
        scanf("%f", &vetorAtletas[i].altura);
    }
    atletaMaisAlto(vetorAtletas);
    atletaMaisVelho(vetorAtletas);

    return 0;
}

void atletaMaisVelho(Atleta vetor[5]){
    int maiorIdade = vetor[0].idade;
    int posMaiorIdade = 0;

    for (int i = 0; i < 5; i++) {
        if (vetor[i].idade > maiorIdade) {
            maiorIdade = vetor[i].idade;
            posMaiorIdade = i;
        }
    }

    printf("\no atleta mais velhor eh o %s, tendo %d anos.", vetor[posMaiorIdade].nome, maiorIdade);
}
void atletaMaisAlto(Atleta vetor[5]) {
    float maiorAltura = vetor[0].altura;
    int posMaiorAltura = 0;

    for (int i = 0; i < 5; i++) {
        if (vetor[i].altura > maiorAltura) {
            maiorAltura = vetor[i].altura;
            posMaiorAltura = i;
        }
    }

    printf("\no atleta mais alto eh o %s, tendo %.2f de altura.", vetor[posMaiorAltura].nome, maiorAltura);
}
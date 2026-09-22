//Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
//pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba
//os nomes da pessoa mais nova e da mais velha.

#include <stdio.h>

struct Pessoa{
    char nome[40];
    int nascimento;
};
typedef struct Pessoa Pessoa;

int lerVetor(Pessoa vetor[]);

int main(int argc, char **argv) {
    Pessoa vetorPessoa[6];
    
    for (int i = 0; i < 6; i++) {
        
        printf("Nome da %d pessoa: ", i+1);
        scanf(" %39[^\n]", vetorPessoa[i].nome);

        printf("De o ano de nascimento da %d pessoa: ", i+1);
        scanf("%d", &vetorPessoa[i].nascimento);
    }

    lerVetor(vetorPessoa);

    return 0;
}

int lerVetor(Pessoa vetor[]) {
    char nome[40];
    int maior = vetor[0].nascimento;
    int menor = vetor[0].nascimento;
    int posMaior = 0;
    int posMenor = 0;

    for (int i = 0; i < 6; i++) {
        if (vetor[i].nascimento < maior) {
            maior = vetor[i].nascimento;
            posMaior = i;
        }
        if (vetor[i].nascimento > menor) {
            menor = vetor[i].nascimento;
            posMenor = i;
        }
    } 
    printf("\nPessoa mais velha: %s", vetor[posMaior].nome);
    printf("\nPessoa mais nova: %s\n", vetor[posMenor].nome);

    return 0;
}
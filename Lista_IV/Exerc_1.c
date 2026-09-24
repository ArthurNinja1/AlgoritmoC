#include <stdio.h>
#include <string.h>


struct Pessoa
{
    char nome[50];
    int idade;
    char endereco[50];
};

typedef struct Pessoa Pessoa;


int main (int argc, char *argv[]) {
    int idade;
    char nome[50], endereco[50];
    Pessoa pessoa;

    printf("\nSeu nome: ");
    if (scanf("%49s", pessoa.nome) == 1) {
        printf("\nSua Idade: ");
        if (scanf("%d", &pessoa.idade) == 1) {
            printf("\nSeu endereco: ");
            if (scanf("%49s", pessoa.endereco) == 1){
                printf("\nNome: %s", pessoa.nome);
                printf("\nIdade: %d", pessoa.idade);
                printf("\nEndereco: %s\n", pessoa.endereco);
            }
        }
    }
    return 0;
}
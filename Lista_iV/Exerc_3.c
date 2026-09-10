//rie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
//conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora,
//escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura.
//Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os
//cinco.


#include <stdio.h>

struct Matricula
{
    int matricula;
    char nome[50];
    float nota_um;
    float nota_dois;
    float nota_tres;
};


typedef struct Matricula matricula;


int main(int argc, char *argv[]) {
    matricula BancoAlunos[5];
    for (int index = 0; index < 5;  index++) {
        matricula aluno;
        printf("\n-- Adicionar dados do %d aluno:", index);
        
        printf("\nNumero de matricula: ");
        scanf("%d", &aluno.matricula);

        printf("\nNome do Aluno: ");
        scanf("%49s", aluno.nome);

        printf("\nNota um do aluno: ");
        scanf("%f", &aluno.nota_um);

        printf("\nNota dois do aluno: ");
        scanf("%f", &aluno.nota_dois);

        printf("\nNota tres do aluno: ");
        scanf("%f", &aluno.nota_tres);

        BancoAlunos[index] = aluno;
    }
    
    float maior_media = 0;
    int index_maior_media;

    for (int index = 0; index < 5; index++) {
        float media = ((BancoAlunos[index].nota_dois + BancoAlunos[index].nota_dois +  BancoAlunos[index].nota_tres) / 3);
        if (media > maior_media) {
            maior_media = media;
            index_maior_media = index;
        }
    }

    printf("\nO aluno %s possui a maior media de: %.2f", BancoAlunos[index_maior_media].nome, maior_media);
    printf("\n\nCom as notas:");
    printf("\nNota um: %.2f", BancoAlunos[index_maior_media].nota_um);
    printf("\nNota dois: %.2f", BancoAlunos[index_maior_media].nota_dois);
    printf("\nNota tres: %.2f\n", BancoAlunos[index_maior_media].nota_tres);
    return 0;
}


// Crie uma struct chamada Produto que armazene os seguintes dados:
//-Um código para o produto (número inteiro).
//-A quantidade em estoque (número inteiro).
//-O preço unitário (número com ponto flutuante, float ou double).
//Escreva uma função chamada cadastrarProdutos que receba um array de Produto como
//parâmetro. Dentro desta função, você deverá solicitar ao usuário que insira os dados
//para 4 produtos.
//Na função main, declare um array de Produto com 4 posições.
//Chame a função cadastrarProdutos, passando o array que você criou para que ele seja
//preenchido.
//Após o retorno da função, crie um laço na main para percorrer o array e exibir na tela os
//dados de todos os produtos que foram cadastrados, de forma organizada.


#include <stdio.h>
struct Produto {
    int id_produto;
    int quantia;
    float preco_uni;
};
typedef struct Produto Produto;

void cadastrarProdutos(Produto produtos[4]) {
    for (int i = 0; i < 4; i++) {
        printf("Codigo do produto ah cadastrar: ");
        scanf("%d", &produtos[i].id_produto);

        printf("Quantia do produto ah cadastrar: ");
        scanf("%d", &produtos[i].quantia);

        printf("Preco do produto ah cadastrar: ");
        scanf("%f", &produtos[i].preco_uni);
    }
}
int main(int argc, char **argv) {
    Produto produtos[4];
    cadastrarProdutos(produtos);

    for (int i = 0; i < 4; i++) {
        printf("Produto: %d | Unidades: %d | Preco: %.2f", produtos[i].id_produto, produtos[i].quantia, produtos[i].preco_uni);
    }
    return 0;
}
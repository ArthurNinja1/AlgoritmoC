#include <stdio.h>
#include <math.h>

struct Ponto
{
    float X;
    float Y;
};
typedef struct Ponto ponto;

struct Retangulo
{
    ponto superior_esquerdo;
    ponto inferior_direito;    
};
typedef struct Retangulo retangulo;

void Calcular_Retangulo(ponto superior_esquerdo, ponto inferior_direito);

int main (int argc, char *argv[]) {
    retangulo forma;
    float X,Y;
    printf("de o ponto X e Y do canto superior esquerdo: ");
    if(scanf("%f %f", &X, &Y) != 2) {
        return 0;
    }
    forma.superior_esquerdo.X = X;
    forma.superior_esquerdo.Y = Y;
    printf("de o ponto X e Y do canto inferior direito: ");
    if (scanf("%f %f", &X, &Y) != 2) {
        return 0;
    }
    forma.inferior_direito.X = X;
    forma.inferior_direito.Y = Y;

    Calcular_Retangulo(forma.superior_esquerdo, forma.inferior_direito);
    return 0;
}

void Calcular_Retangulo(ponto superior_esquerdo, ponto inferior_direito) {
    float larguraBase = fabs(superior_esquerdo.X - inferior_direito.X);
    float altura = fabs(superior_esquerdo.Y - inferior_direito.Y);

    float Area = (larguraBase * altura);
    float Perimetro = (2 *(larguraBase + altura));
    float ComprimentoDiagonal = sqrt((altura * altura) + (larguraBase * larguraBase));
    printf("\nO retangulo digitado tem:");
    printf("\nArea = %.4f", Area);
    printf("\nPerimetro = %.4f", Perimetro);
    printf("\nComprimento da Diagonal principal = %.4f\n", ComprimentoDiagonal);
}
//Em C, funções retornam apenas um valor. Crie um programa que contorne isso
//usando ponteiros.
//-Implemente uma função chamada calcular_esfera que receba o raio de uma
//esfera e devolva sua área e seu volume.
//-Assinatura sugerida: void calcular_esfera(float raio, float *area, float *volume);
//-Na main, peça ao usuário o raio, chame a função e imprima os resultados.
//(Fórmulas: Área = 4 * PI * R² | Volume = (4/3) * PI * R³).

#include <stdio.h>

#define PI 3.141595

void calcular_esfera(float raio, float *area, float *volume);

int main(int argc, char *argv[]) {

    float area, volume, raio;

    float *pArea = &area;
    float *pVolume = &volume;

    printf("De o valor do raio da esfera: ");

    if (scanf("%f", &raio) != 1) {
        printf("\nValor invalido inserido.\n");
        return 0;
    }

    calcular_esfera(raio, pArea, pVolume);

    printf("A area da esfera eh: %f\n", area);
    printf("O volume da esfera eh: %f\n", volume);

    return 0;
}

void calcular_esfera(float raio, float *area, float *volume) {

    *area = 4 * PI * (raio * raio);

    *volume = (4.0 / 3.0) * PI * (raio * raio * raio);
}
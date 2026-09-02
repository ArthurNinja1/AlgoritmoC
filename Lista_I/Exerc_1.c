//Faça uma função que recebe por parâmetro o raio de uma esfera e calcule o seu
//volume (v = 4/3.P .R3).

#include <stdio.h>
#include <math.h>
#define PI 3.14159

float calcularVolume(float raio) {
    return (4.0 / 3.0) * PI * pow(raio, 3);
}

int main(int argc, char *argv[]) {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float volume = calcularVolume(raio);
    printf("O volume da esfera é: %.4f\n", volume);

    return 0;
}
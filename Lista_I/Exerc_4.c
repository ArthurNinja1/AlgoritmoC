//Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna
//essa idade expressa em dias.

#include <stdio.h>

int calcularIdadeEmDias(int anos, int meses, int dias) {
    return (anos * 365) + (meses * 30) + dias;
}

int main(int argc, char *argv[]) {
    int anos, meses, dias;

    printf("Digite a idade da pessoa:\n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    int idadeEmDias = calcularIdadeEmDias(anos, meses, dias);
    printf("A idade da pessoa em dias é: %d\n", idadeEmDias);

    return 0;
}
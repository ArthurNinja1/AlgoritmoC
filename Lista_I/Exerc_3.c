//Faça um procedimento que recebe por parâmetro o tempo de duração de uma fábrica
//expressa em segundos e imprima esse tempo em horas, minutos e segundos

#include <stdio.h>

void imprimirTempo(int segundos) {
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segundosRestantes = segundos % 60;

    printf("Tempo: %d horas, %d minutos e %d segundos\n", horas, minutos, segundosRestantes);
}

int main(int argc, char *argv[]) {
    int segundos;

    printf("Digite o tempo de duração da fábrica em segundos: ");
    scanf("%d", &segundos);

    imprimirTempo(segundos);

    return 0;
}
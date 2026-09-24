//Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
//hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
//posições dessa estrutura e imprima a maior hora.

#include <stdio.h>

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

int converterParaSegundos(Horario h) {
    return h.hora * 3600 + h.minuto * 60 + h.segundo;
}

int main() {
    Horario horarios[5];
    int indiceMaior = 0;

    printf("Leitura de 5 Horarios\n");

    for (int i = 0; i < 5; i++) {
        printf("\nDigite o %d horário (HH MM SS): ", i + 1);
        scanf("%d %d %d", &horarios[i].hora, &horarios[i].minuto, &horarios[i].segundo);
    }

    for (int i = 1; i < 5; i++) {
        if (converterParaSegundos(horarios[i]) > converterParaSegundos(horarios[indiceMaior])) {
            indiceMaior = i;
        }
    }

    printf("\nA maior hora digitada foi: %02d:%02d:%02d\n",
           horarios[indiceMaior].hora,
           horarios[indiceMaior].minuto,
           horarios[indiceMaior].segundo);

    return 0;
}
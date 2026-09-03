// Elabore uma função que receba duas strings como parâmetros e verifique se a
// segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os
// caracteres das strings.

#include <stdio.h>
#include <string.h>

int verificarOcorencia(char *str1, char *str2) {
    char *p1, *p2;
    for (p1 = str1; *p1 != '\0'; p1++) {
        p2 = str2;
        while (*p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (*p2 == '\0') {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    if (verificarOcorencia(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string nao ocorre dentro da primeira.\n");
    }
    return 0;
}
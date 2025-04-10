#include <stdio.h>

const int MOVIMENTOS_BISPO = 5;
const int MOVIMENTOS_TORRE = 5;
const int MOVIMENTOS_RAINHA = 8;

int main() {
    int index;

    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    for (index = 0; index < MOVIMENTOS_BISPO; index++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    printf("Movimento da Torre (5 casas para a direita):\n");
    index = 0;
    while (index < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        index++;
    }

    printf("\n");

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    index = 0;
    do {
        printf("Esquerda\n");
        index++;
    } while (index < MOVIMENTOS_RAINHA);

    printf("\n");

    return 0;
}

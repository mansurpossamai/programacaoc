#include <stdio.h>

int main() {
    // Definindo o número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // Variável de controle comum

    // ---------------- TORRE ----------------
    // A torre se move em linha reta (horizontal ou vertical)
    // Simulando movimento da Torre 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ---------------- BISPO ----------------
    // O bispo se move em diagonal
    // Simulando movimento do Bispo 5 casas na diagonal (Cima Direita) usando WHILE
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ---------------- RAINHA ----------------
    // A rainha se move em todas as direções
    // Simulando movimento da Rainha 8 casas para a esquerda usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    return 0;
}

#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define OCUPADO 3
#define AGUA 0

int main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Coordenadas do navio horizontal
    int linhaH = 2;  // Linha inicial
    int colunaH = 4; // Coluna inicial

    // Valida se o navio horizontal cabe no tabuleiro
    if (colunaH + TAM_NAVIO <= TAM_TABULEIRO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linhaH][colunaH + i] = OCUPADO;
        }
    } else {
        printf("Erro: navio horizontal fora dos limites.\n");
        return 1;
    }

    // Coordenadas do navio vertical
    int linhaV = 5;  // Linha inicial
    int colunaV = 6; // Coluna inicial

    // Valida se o navio vertical cabe no tabuleiro e não sobrepõe o outro
    int podeColocar = 1;
    if (linhaV + TAM_NAVIO <= TAM_TABULEIRO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaV + i][colunaV] != AGUA) {
                podeColocar = 0;
                break;
            }
        }

        if (podeColocar) {
            for (int i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[linhaV + i][colunaV] = OCUPADO;
            }
        } else {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
    } else {
        printf("Erro: navio vertical fora dos limites.\n");
        return 1;
    }

    // Exibe o tabuleiro no console
    printf("Tabuleiro Batalha Naval:\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

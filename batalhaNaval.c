#include <stdio.h>

// Tamanho do tabuleiro
#define TAMANHO_TABULEIRO 10

// Função para posicionar navio verticalmente
void posicionar_navio_vertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y] = 1;
        printf("Navio vertical: (%d, %d)\n", x + i, y);
    }
}

// Função para posicionar navio horizontalmente
void posicionar_navio_horizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 1;
        printf("Navio horizontal: (%d, %d)\n", x, y + i);
    }
}

int main() {
    // Inicializa o tabuleiro com zeros
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Posiciona navios
    posicionar_navio_vertical(tabuleiro, 1, 2, 3); // Exemplo: navio vertical de tamanho 3 na posição (1,2)
    posicionar_navio_horizontal(tabuleiro, 5, 3, 4); // Exemplo: navio horizontal de tamanho 4 na posição (5,3)

    return 0;
}

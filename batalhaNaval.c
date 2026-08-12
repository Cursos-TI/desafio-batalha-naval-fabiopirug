#include <stdio.h>

// Definindo o tamanho do tabuleiro de Batalha Naval (Matriz 5x5)
#define TAMANHO_TABULEIRO 5

int main() {
    // 1. Inicializa o tabuleiro zerado (0 representa água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // 2. Posicionamento dos Navios (Valores inseridos manualmente no código)
    // O valor 3 representa uma parte do navio posicionado

    // Navio 1: Posicionado na VERTICAL (Linhas 1, 2 e 3 na Coluna 1)
    tabuleiro[1][1] = 3;
    tabuleiro[2][1] = 3;
    tabuleiro[3][1] = 3;

    // Navio 2: Posicionado na HORIZONTAL (Linha 4 nas Colunas 2, 3 e 4)
    tabuleiro[4][2] = 3;
    tabuleiro[4][3] = 3;
    tabuleiro[4][4] = 3;

    // 3. Saída de Dados: Exibindo as coordenadas de forma clara e organizada
    printf("=== COORDENADAS DOS NAVIOS ===\n\n");

    printf("Navio Vertical:\n");
    printf("Parte 1: Coordenada [%d][%d]\n", 1, 1);
    printf("Parte 2: Coordenada [%d][%d]\n", 2, 1);
    printf("Parte 3: Coordenada [%d][%d]\n\n", 3, 1);

    printf("Navio Horizontal:\n");
    printf("Parte 1: Coordenada [%d][%d]\n", 4, 2);
    printf("Parte 2: Coordenada [%d][%d]\n", 4, 3);
    printf("Parte 3: Coordenada [%d][%d]\n", 4, 4);

    return 0;
}

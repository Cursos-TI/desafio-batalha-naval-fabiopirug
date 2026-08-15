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
    printf("Parte 3: Coordenada [%d][%d]\n", 3, 1);

    printf("Navio Horizontal:\n");
    printf("Parte 1: Coordenada [%d][%d]\n", 4, 2);
    printf("Parte 2: Coordenada [%d][%d]\n", 4, 3);
    printf("Parte 3: Coordenada [%d][%d]\n", 4, 4);
    printf("\n");

    // =========================================================
    // CÓDIGO NOVO - NÍVEL MESTRE: HABILIDADES ESPECIAIS
    // =========================================================

    // Declaração das matrizes de habilidades (Submatrizes 3x5)
    int matrizCone[3][5] = {0};
    int matrizOctaedro[3][5] = {0};
    int matrizCruz[3][5] = {0};

    // LÓGICA DO CONE: Loops aninhados para preencher o padrão triangular
    int centroCone = 2;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= (centroCone - i) && j <= (centroCone + i)) {
                matrizCone[i][j] = 1;
            }
        }
    }

    // LÓGICA DO OCTAEDRO: Loops aninhados para preencher o formato de losango
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 || i == 2) && j == 2) {
                matrizOctaedro[i][j] = 1;
            } else if (i == 1 && (j >= 1 && j <= 3)) {
                matrizOctaedro[i][j] = 1;
            }
        }
    }

    // LÓGICA DA CRUZ: Loops aninhados para preencher a linha e coluna centrais
    int linhaCruz = 1, colunaCruz = 2;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == linhaCruz || j == colunaCruz) {
                matrizCruz[i][j] = 1;
            }
        }
    }

    // EXIBIÇÃO DAS MATRIZES DE HABILIDADE

    // Exibição do Cone
    printf("Exemplo de saída de habilidade em cone:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrizCone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Exibição do Octaedro
    printf("Exemplo de saída de habilidade em octaedro:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrizOctaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Exibição da Cruz
    printf("Exemplo de saída de habilidade em cruz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrizCruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

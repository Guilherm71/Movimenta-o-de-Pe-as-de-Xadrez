#include <stdio.h>

// ==============================
// NÍVEL MESTRE (FUNÇÕES RECURSIVAS)
// ==============================

void moverTorreRecursiva(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreRecursiva(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainhaRecursiva(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(casas - 1);
}

// ==============================
// PROGRAMA PRINCIPAL
// ==============================
int main() {
    int i, j;

    printf("=====================================\n");
    printf("     DESAFIO DOS MOVIMENTOS\n");
    printf("=====================================\n\n");

    // ==============================
    // NÍVEL 1 - TORRE
    // ==============================
    printf("=== NÍVEL 1: TORRE ===\n");
    printf("Movimentos: 5 casas para a direita\n\n");

    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n-------------------------------------\n");

    // ==============================
    // NÍVEL 2 - BISPO
    // ==============================
    printf("=== NÍVEL 2: BISPO ===\n");
    printf("Movimentos: 5 casas na diagonal (cima e direita)\n\n");

    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n-------------------------------------\n");

    // ==============================
    // NÍVEL 3 - RAINHA
    // ==============================
    printf("=== NÍVEL 3: RAINHA ===\n");
    printf("Movimentos: 8 casas para a esquerda\n\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    printf("\n-------------------------------------\n");

    // ==============================
    // NÍVEL 4 - CAVALO
    // ==============================
    printf("=== NÍVEL 4: CAVALO ===\n");
    printf("Movimento: Duas casas para baixo e uma para a esquerda (formando um L)\n\n");

    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");
        for (j = 1; j <= 1; j++) {
            if (i == 2) {
                printf("Esquerda\n");
            }
        }
    }

    printf("\n-------------------------------------\n");

    // ==============================
    // NÍVEL 5 - NÍVEL MESTRE (RECURSÃO)
    // ==============================
    printf("=== NÍVEL 5: NÍVEL MESTRE ===\n");
    printf("Movimentos executados com RECURSIVIDADE\n\n");

    printf("Torre (recursiva):\n");
    moverTorreRecursiva(5);

    printf("\nBispo (recursivo):\n");
    moverBispoRecursivo(5);

    printf("\nRainha (recursiva):\n");
    moverRainhaRecursiva(8);

    printf("\nCavalo (L para cima e direita):\n");
    for (i = 1; i <= 2; i++) {
        printf("Cima\n");
        for (j = 1; j <= 1; j++) {
            if (i == 2) {
                printf("Direita\n");
            }
        }
    }

    printf("\n=====================================\n");
    printf("Desafio concluído com sucesso!\n");
    printf("=====================================\n");

    printf("\nPressione Enter para sair...");
    getchar();

    return 0;
}

#include <stdio.h>

// =========================================================
// FUNÇÕES RECURSIVAS — Torre, Bispo e Rainha
// =========================================================

// Função recursiva para o movimento da Torre (para a direita)
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // Condição de parada
    printf("Direita (%d)\n", atual);
    moverTorre(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (diagonal — cima e direita)
// Com loops aninhados dentro da recursão
void moverBispo(int casas, int passo) {
    if (passo > casas) return; // Condição de parada

    // Loop aninhado — movimento vertical (externo) e horizontal (interno)
    for (int vertical = 1; vertical <= 1; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita (%d)\n", passo);
        }
    }

    moverBispo(casas, passo + 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (para a esquerda)
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // Condição de parada
    printf("Esquerda (%d)\n", atual);
    moverRainha(casas, atual + 1); // Chamada recursiva
}

// =========================================================
// FUNÇÃO PRINCIPAL — Inclui também o movimento do Cavalo
// =========================================================

int main() {
    // ======================================
    // MOVIMENTO DA TORRE (Recursividade)
    // ======================================
    int casas_torre = 5;
    printf("=== Movimento da Torre ===\n");
    moverTorre(casas_torre, 1);

    // ======================================
    // MOVIMENTO DO BISPO (Recursividade + Loops Aninhados)
    // ======================================
    int casas_bispo = 5;
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casas_bispo, 1);

    // ======================================
    // MOVIMENTO DA RAINHA (Recursividade)
    // ======================================
    int casas_rainha = 8;
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casas_rainha, 1);

    // ======================================
    // MOVIMENTO DO CAVALO (Loops Complexos)
    // ======================================
    // Cavalo move-se em “L”: 2 casas para cima e 1 para a direita
    // Usando loops aninhados, múltiplas variáveis e controle de fluxo

    int vertical, horizontal;
    int casas_cima = 2;
    int casas_direita = 1;

    printf("\n=== Movimento do Cavalo ===\n");

    // Loop externo controla o movimento vertical
    for (vertical = 1; vertical <= casas_cima; vertical++) {
        if (vertical == 2) {
            // Quando chega na segunda casa para cima, prepara para virar à direita
            for (horizontal = 1; horizontal <= casas_direita; horizontal++) {
                printf("Direita (%d)\n", horizontal);
                // Se o cavalo já moveu 1 casa para a direita, interrompe
                if (horizontal == casas_direita) break;
            }
        }

        // Imprime o movimento para cima
        printf("Cima (%d)\n", vertical);

        // Caso especial: se o cavalo já foi para cima 2 vezes, interrompe o loop
        if (vertical == casas_cima) continue;
    }

    // ======================================
    // FIM DO PROGRAMA
    // ======================================
    printf("\nSimulação concluída!\n");

    return 0;
}
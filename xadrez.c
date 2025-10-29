#include <stdio.h>

int main() {
    // ==============================
    // MOVIMENTO DA TORRE (usando FOR)
    // ==============================
    int i; // variável de controle
    int casas_torre = 5; // número de casas que a torre vai se mover

    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ===============================
    // MOVIMENTO DO BISPO (usando WHILE)
    // ===============================
    int casas_bispo = 5;
    int contador = 1;

    printf("\n=== Movimento do Bispo ===\n");
    while (contador <= casas_bispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }

    // ===============================
    // MOVIMENTO DA RAINHA (usando DO-WHILE)
    // ===============================
    int casas_rainha = 8;
    int posicao = 1;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d)\n", posicao);
        posicao++;
    } while (posicao <= casas_rainha);

    // ===============================
    // MOVIMENTO DO CAVALO (usando LOOPS ANINHADOS)
    // ===============================
    // O Cavalo move-se em "L":
    // 2 casas para baixo e 1 casa para a esquerda.
    // Usaremos um loop for (externo) e um loop while (interno).

    int casas_baixo = 2;
    int casas_esquerda = 1;
    int passo_baixo, passo_esquerda;

    printf("\n=== Movimento do Cavalo ===\n");

    // Loop externo: movimenta o cavalo para baixo (2 casas)
    for (passo_baixo = 1; passo_baixo <= casas_baixo; passo_baixo++) {
        printf("Baixo (%d)\n", passo_baixo);

        // Loop interno: após mover duas vezes para baixo, move uma para a esquerda
        if (passo_baixo == casas_baixo) { // só move à esquerda depois do movimento para baixo
            passo_esquerda = 1;
            while (passo_esquerda <= casas_esquerda) {
                printf("Esquerda (%d)\n", passo_esquerda);
                passo_esquerda++;
            }
        }
    }

    // ===============================
    // FIM DO PROGRAMA
    // ===============================
    printf("\nSimulação concluída!\n");

    return 0;
}
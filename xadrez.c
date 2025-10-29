#include <stdio.h>

int main() {
    // ==============================
    // MOVIMENTO DA TORRE (usando FOR)
    // ==============================
    // A torre move-se em linha reta — aqui, 5 casas para a direita.

    int i; // variável de controle
    int casas_torre = 5; // número de casas que a torre vai se mover

    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ===============================
    // MOVIMENTO DO BISPO (usando WHILE)
    // ===============================
    // O bispo move-se na diagonal — aqui, 5 casas para cima e à direita.

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
    // A rainha pode mover-se em todas as direções — aqui, 8 casas para a esquerda.

    int casas_rainha = 8;
    int posicao = 1;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d)\n", posicao);
        posicao++;
    } while (posicao <= casas_rainha);

    // ===============================
    // FIM DO PROGRAMA
    // ===============================
    printf("\nSimulação concluída!\n");

    return 0;
}
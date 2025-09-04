#include <stdio.h>

int main() {
    // ----------------------------
    // Simulação de movimentos de xadrez
    // ----------------------------

    // Número de casas a mover
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // ----------------------------
    // Movimento da Torre (for)
    // Move-se 5 casas para a direita
    // ----------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre movimentos

    // ----------------------------
    // Movimento do Bispo (while)
    // Move-se 5 casas na diagonal para cima e à direita
    // ----------------------------
    printf("Movimento do Bispo:\n");
    int passos_bispo = 0;
    while (passos_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        passos_bispo++;
    }

    printf("\n"); // Espaço entre movimentos

    // ----------------------------
    // Movimento da Rainha (do-while)
    // Move-se 8 casas para a esquerda
    // ----------------------------
    printf("Movimento da Rainha:\n");
    int passos_rainha = 0;
    do {
        printf("Esquerda\n");
        passos_rainha++;
    } while (passos_rainha < casas_rainha);

    return 0;
}

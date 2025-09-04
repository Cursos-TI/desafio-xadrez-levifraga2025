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

    printf("\n"); // Espaço entre movimentos

    // ----------------------------
    // Movimento do Cavalo (for + while aninhado)
    // Move-se em "L": 2 casas para baixo e 1 casa para a esquerda
    // ----------------------------
    printf("Movimento do Cavalo:\n");
    int movimentos_cavalo_verticais = 2; // duas casas para baixo
    int movimentos_cavalo_horizontais = 1; // uma casa para a esquerda

    // Loop externo (for) para o movimento vertical
    for (int i = 0; i < movimentos_cavalo_verticais; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) para o movimento horizontal
    int contador_horizontal = 0;
    while (contador_horizontal < movimentos_cavalo_horizontais) {
        printf("Esquerda\n");
        contador_horizontal++;
    }

    return 0;
}

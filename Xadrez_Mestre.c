#include <stdio.h>

// ----------------------------
// Funções Recursivas para Torre, Bispo e Rainha
// ----------------------------

// Torre: Move-se horizontalmente para a direita
void moverTorreRecursivo(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Direita\n");
    moverTorreRecursivo(casas - 1); // chamada recursiva
}

// Bispo: Move-se na diagonal para cima e à direita usando recursão + loops aninhados
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // condição de parada

    // Loop aninhado para simular a diagonal
    int vertical, horizontal;
    for (vertical = 0; vertical < 1; vertical++) { // vertical = "Cima"
        for (horizontal = 0; horizontal < 1; horizontal++) { // horizontal = "Direita"
            printf("Cima, Direita\n");
        }
    }

    moverBispoRecursivo(casas - 1); // chamada recursiva
}

// Rainha: Move-se horizontalmente para a esquerda
void moverRainhaRecursivo(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1); // chamada recursiva
}

// ----------------------------
// Função para Cavalo com loops complexos
// Movimento em "L": 2 casas para cima, 1 casa para a direita
// ----------------------------
void moverCavaloComplexo(int vert, int horiz) {
    int i = 0, j = 0;
    while (i < vert) {          // Loop vertical
        printf("Cima\n");
        i++;

        j = 0;
        while (j < horiz) {     // Loop horizontal
            printf("Direita\n");
            j++;
            break;              // garante que só se mova 1 casa horizontal por "L"
        }
    }
}

int main() {
    // Número de casas a mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavaloVertical = 2; // Cavalo: 2 casas para cima
    int casasCavaloHorizontal = 1; // Cavalo: 1 casa para direita

    // ----------------------------
    // Movimento da Torre
    // ----------------------------
    printf("Movimento da Torre:\n");
    moverTorreRecursivo(casasTorre);
    printf("\n");

    // ----------------------------
    // Movimento do Bispo
    // ----------------------------
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // ----------------------------
    // Movimento da Rainha
    // ----------------------------
    printf("Movimento da Rainha:\n");
    moverRainhaRecursivo(casasRainha);
    printf("\n");

    // ----------------------------
    // Movimento do Cavalo
    // ----------------------------
    printf("Movimento do Cavalo:\n");
    moverCavaloComplexo(casasCavaloVertical, casasCavaloHorizontal);
    printf("\n");

    return 0;
}

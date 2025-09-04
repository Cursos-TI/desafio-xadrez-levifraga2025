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
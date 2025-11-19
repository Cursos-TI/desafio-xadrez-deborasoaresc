#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main() {

    // ============================================================
    // TORRE 
    // ============================================================
    int torreMov = 5;
    printf("=== Movimento da Torre ===\n");

    for (int i = 1; i <= torreMov; i++) {
        printf("Direita\n");
    }



    // ============================================================
    // BISPO 
    // ============================================================
    int bispoMov = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do Bispo ===\n");

    while (contadorBispo <= bispoMov) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }



    // ============================================================
    // RAINHA
    // ============================================================
    int rainhaMov = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da Rainha ===\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= rainhaMov);



    // ============================================================
    // FIM DO PROGRAMA
    // ============================================================
    return 0;
}

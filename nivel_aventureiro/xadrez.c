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
    // CAVALO 
    // ============================================================
    int movVertical = 2;   // duas casas para baixo
    int movHorizontal = 1; // uma casa para a esquerda

    printf("\n=== Movimento do Cavalo ===\n");

    // Primeiro loop: FOR → controla as duas casas para baixo
    for (int i = 1; i <= movVertical; i++) {
        printf("Baixo\n");

        // Loop interno: WHILE → controla a casa perpendicular (esquerda)
        int j = 1;
        while (j <= movHorizontal && i == movVertical) {
            // Esse while só executa ao final do movimento vertical
            printf("Esquerda\n");
            j++;
        }
    }



    // ============================================================
    // FIM DO PROGRAMA
    // ============================================================
    return 0;
}

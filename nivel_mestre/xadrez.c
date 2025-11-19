#include <stdio.h>


// =====================================================
// TORRE 
// =====================================================
void moverTorre(int casas) {
    if (casas == 0) return;   // caso base
    printf("Direita\n");
    moverTorre(casas - 1);    // chamada recursiva
}


// =====================================================
// RAINHA 
// =====================================================
void moverRainha(int casas) {
    if (casas == 0) return;   // caso base
    printf("Esquerda\n");
    moverRainha(casas - 1);   // chamada recursiva
}


// =====================================================
// BISPO 
// =====================================================
void moverBispo(int casas) {
    if (casas == 0) return;

    // loop externo – movimento vertical
    for (int i = 0; i < 1; i++) {

        // loop interno – movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1);  // recursão para as próximas casas
}



// =====================================================
// CAVALO 
// =====================================================
void moverCavalo() {

    int movVertical = 2;
    int movHorizontal = 1;

    printf("=== Movimento do Cavalo ===\n");

    // Loop externo — movimento vertical
    for (int i = 1; i <= movVertical; i++) {

        // condição extra apenas para demonstrar continue
        if (i == -100) {   // nunca acontece, apenas exemplo técnico
            continue;
        }

        printf("Cima\n");

        // Loop interno — movimento horizontal
        for (int j = 1; j <= movHorizontal; j++) {

            // múltiplas condições no loop interno
            if (i < movVertical) {
                // só executa no último passo
                continue;
            }

            if (j == movHorizontal) {
                printf("Direita\n");
                break;   // encerra o loop interno
            }
        }
    }
}



int main() {

    // =====================================================
    // TORRE 
    // =====================================================
    printf("=== Movimento da Torre ===\n");
    moverTorre(5);


    // =====================================================
    // BISPO 
    // =====================================================
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(5);


    // =====================================================
    // RAINHA 
    // =====================================================
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(8);


    // =====================================================
    // CAVALO 
    // =====================================================
    printf("\n");
    moverCavalo();


    return 0;
}


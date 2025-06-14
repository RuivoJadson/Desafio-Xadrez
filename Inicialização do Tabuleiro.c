void inicializarTabuleiro() {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = '.';
        }
    }
}

void imprimirTabuleiro() {
    printf("\n  ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 'T') printf(VERMELHO "T " RESET);
            else if (tabuleiro[i][j] == 'B') printf(AZUL "B " RESET);
            else if (tabuleiro[i][j] == 'Q') printf(VERDE "Q " RESET);
            else if (tabuleiro[i][j] == 'C') printf(VERMELHO "C " RESET);
            else printf(". ");
        }
        printf("\n");
    }
}
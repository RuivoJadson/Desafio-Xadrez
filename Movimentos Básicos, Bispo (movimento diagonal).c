void moverBispo(Posicao pos) {
    // Limpa movimentos anteriores
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 'x') tabuleiro[i][j] = '.';
        }
    }
    
    tabuleiro[pos.x][pos.y] = 'B';
    
    // Diagonal superior esquerda (do-while)
    int i = pos.x - 1, j = pos.y - 1;
    do {
        if (i >= 0 && j >= 0 && tabuleiro[i][j] == '.') {
            tabuleiro[i][j] = 'x';
            i--; j--;
        } else break;
    } while (i >= 0 && j >= 0);
    
    // Diagonal superior direita
    i = pos.x - 1; j = pos.y + 1;
    while (i >= 0 && j < TAMANHO) {
        if (tabuleiro[i][j] == '.') {
            tabuleiro[i][j] = 'x';
            i--; j++;
        } else break;
    }
    
    // Diagonal inferior esquerda
    i = pos.x + 1; j = pos.y - 1;
    while (i < TAMANHO && j >= 0) {
        if (tabuleiro[i][j] == '.') {
            tabuleiro[i][j] = 'x';
            i++; j--;
        } else break;
    }
    
    // Diagonal inferior direita
    i = pos.x + 1; j = pos.y + 1;
    while (i < TAMANHO && j < TAMANHO) {
        if (tabuleiro[i][j] == '.') {
            tabuleiro[i][j] = 'x';
            i++; j++;
        } else break;
    }
}
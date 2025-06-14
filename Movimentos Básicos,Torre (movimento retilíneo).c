void moverTorre(Posicao pos) {
    // Limpa movimentos anteriores
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 'x') tabuleiro[i][j] = '.';
        }
    }
    
    tabuleiro[pos.x][pos.y] = 'T';
    
    // Movimento horizontal (while)
    int i = pos.y - 1;
    while (i >= 0) {
        if (tabuleiro[pos.x][i] == '.') tabuleiro[pos.x][i] = 'x';
        else break;
        i--;
    }
    
    i = pos.y + 1;
    while (i < TAMANHO) {
        if (tabuleiro[pos.x][i] == '.') tabuleiro[pos.x][i] = 'x';
        else break;
        i++;
    }
    
    // Movimento vertical (for)
    for (int j = pos.x - 1; j >= 0; j--) {
        if (tabuleiro[j][pos.y] == '.') tabuleiro[j][pos.y] = 'x';
        else break;
    }
    
    for (int j = pos.x + 1; j < TAMANHO; j++) {
        if (tabuleiro[j][pos.y] == '.') tabuleiro[j][pos.y] = 'x';
        else break;
    }
}
void marcarMovimento(int x, int y, int dx, int dy) {
    if (x < 0 || x >= TAMANHO || y < 0 || y >= TAMANHO) return;
    if (tabuleiro[x][y] != '.') return;
    
    tabuleiro[x][y] = 'x';
    marcarMovimento(x + dx, y + dy, dx, dy);
}

void moverRainha(Posicao pos) {
    // Limpa movimentos anteriores
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 'x') tabuleiro[i][j] = '.';
        }
    }
    
    tabuleiro[pos.x][pos.y] = 'Q';
    
    // Movimentos retilíneos (como a torre)
    int direcoesTorre[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    for (int i = 0; i < 4; i++) {
        marcarMovimento(pos.x + direcoesTorre[i][0], 
                       pos.y + direcoesTorre[i][1], 
                       direcoesTorre[i][0], 
                       direcoesTorre[i][1]);
    }
    
    // Movimentos diagonais (como o bispo)
    int direcoesBispo[4][2] = {{1,1}, {1,-1}, {-1,1}, {-1,-1}};
    for (int i = 0; i < 4; i++) {
        marcarMovimento(pos.x + direcoesBispo[i][0], 
                       pos.y + direcoesBispo[i][1], 
                       direcoesBispo[i][0], 
                       direcoesBispo[i][1]);
    }
}
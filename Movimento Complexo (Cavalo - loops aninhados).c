void moverCavalo(Posicao pos) {
    // Limpa movimentos anteriores
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 'x') tabuleiro[i][j] = '.';
        }
    }
    
    tabuleiro[pos.x][pos.y] = 'C';
    
    // Todos os 8 movimentos possíveis em L
    int movimentos[8][2] = {{2,1}, {1,2}, {-1,2}, {-2,1}, 
                           {-2,-1}, {-1,-2}, {1,-2}, {2,-1}};
    
    for (int m = 0; m < 8; m++) {
        int novoX = pos.x + movimentos[m][0];
        int novoY = pos.y + movimentos[m][1];
        
        if (novoX >= 0 && novoX < TAMANHO && novoY >= 0 && novoY < TAMANHO) {
            if (tabuleiro[novoX][novoY] == '.') {
                tabuleiro[novoX][novoY] = 'x';
            }
        }
    }
}
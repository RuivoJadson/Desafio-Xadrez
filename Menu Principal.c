int main() {
    inicializarTabuleiro();
    Posicao pos;
    int peca;
    
    do {
        imprimirTabuleiro();
        
        printf("\nEscolha uma peça:\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Cavalo\n");
        printf("4. Rainha\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &peca);
        
        if (peca == 0) break;
        
        printf("Digite a posição (x y): ");
        scanf("%d %d", &pos.x, &pos.y);
        
        if (pos.x < 0 || pos.x >= TAMANHO || pos.y < 0 || pos.y >= TAMANHO) {
            printf("Posição inválida!\n");
            continue;
        }
        
        switch(peca) {
            case 1: moverTorre(pos); break;
            case 2: moverBispo(pos); break;
            case 3: moverCavalo(pos); break;
            case 4: moverRainha(pos); break;
            default: printf("Opção inválida!\n");
        }
        
    } while (peca != 0);
    
    return 0;
}
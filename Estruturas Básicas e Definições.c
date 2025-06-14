#include <stdio.h>
#include <stdbool.h>

#define TAMANHO 8

// Cores para melhor visualização
#define VERMELHO "\x1b[31m"
#define VERDE "\x1b[32m"
#define AZUL "\x1b[34m"
#define RESET "\x1b[0m"

typedef struct {
    int x;
    int y;
} Posicao;

char tabuleiro[TAMANHO][TAMANHO];
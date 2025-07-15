// Nível Novato - Movimentação das Peças

// Constantes para os movimentos
const int BISPO_PASSOS = 5;
const int TORRE_PASSOS = 5;
const int RAINHA_PASSOS = 8;

// Movimentação do Bispo: diagonal superior direita
printf("Movimentação do Bispo:\n");
for (int i = 0; i < BISPO_PASSOS; i++) {
    printf("Cima\n");
    printf("Direita\n");
}

printf("\n");

// Movimentação da Torre: direita
printf("Movimentação da Torre:\n");
for (int i = 0; i < TORRE_PASSOS; i++) {
    printf("Direita\n");
}

printf("\n");

// Movimentação da Rainha: esquerda
printf("Movimentação da Rainha:\n");
for (int i = 0; i < RAINHA_PASSOS; i++) {
    printf("Esquerda\n");
}

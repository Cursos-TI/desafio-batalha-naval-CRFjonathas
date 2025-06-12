#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define linha 10
#define coluna 10

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[linha][coluna] = {};
    

    int navio[3] = {3, 3, 3,}; //ARRAY NAVIO

        printf(" *  A  B  C  D  E  F  G  H  I  J \n"); // COORDENADAS DA LINHA HORIZONTAL
        

        for(int i = 1; i < 11; i++){ // ESTRUTURA DE REPETIÇÃO PARA A EXIBIÇÃO DE LINHAS (CONTAGEM DE 1 A 10 PARA EXIBIÇAO DAS COORDENADAS DO TABULEIRO)
            printf("%2d ", i); // COORDENADAS DA LINHA VERTICAL
            for(int j = 0; j < 10; j++){ // ESTRUTURA DE REPETIÇÃO PARA A EXIBIÇAO DE COLUNAS
                for(int k = 0; k < 3; k++){
                    tabuleiro[7][2 + k] = navio[k]; //POSICIONA NAVIO NA HORIZONTAL
                    for(int l = 0; l < 3; l++){
                        tabuleiro[3 + l][7] = navio[l]; //POSICIONA NAVIO NA VERTICAL
                        for(int m = 0; m < 3; m++){
                            tabuleiro[3 + m][1 + m] = navio[m]; // POSIOCIONA O NAVIO NA DIAGONAL
                            for(int n = 0; n < 3; n++){
                                tabuleiro[1 + n][7 - n] = navio[n]; // POSIOCIONA O NAVIO NA DIAGONAL CONTRARIA
                            }
                        }
                    }                
                }
                printf("%2d ", tabuleiro[i - 1][j]); // IMPRESSÃO DO TABULEIRO NO TERMINAL ("[i - 1]" PARA IMPRIMIR A LINHA 10)
            }
            printf("\n");
        }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

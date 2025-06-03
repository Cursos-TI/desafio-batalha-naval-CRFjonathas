#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char tabuleiro[11][11] = {
        {'*', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
        {'1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'2', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'3', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'4', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'5', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'6', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'7', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'8', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'9', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'10', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'}
    };
    

    char navio[3] = {'3', '3', '3'}; //ARRAY NAVIO

        for(int i = 0; i < 11; i++){
            for(int j = 0; j < 11; j++){
                for(int k = 0; k < 3; k++){
                    tabuleiro[3][4 + k] = navio[k]; //POSICIONA NAVIO NA HORIZONTAL
                    for(int l = 0; l < 3; l++){
                        tabuleiro[5 + l][7] = navio[l]; //POSICIONA NAVIONA VERTICAL
                    }                
                }
                printf("%2c ", tabuleiro[i][j]);
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

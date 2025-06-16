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

    int cone[3][5];
    int cruz[3][5];
    int octeadro[3][5];


        printf(" *  A  B  C  D  E  F  G  H  I  J \n"); // COORDENADAS DA LINHA HORIZONTAL
        

        for(int i = 1; i < linha + 1; i++){ // ESTRUTURA DE REPETIÇÃO PARA A EXIBIÇÃO DE LINHAS (CONTAGEM DE 1 A 10 PARA EXIBIÇAO DAS COORDENADAS DO TABULEIRO)   ---->   "linha + 1" = 11, ou seja,seria a mesma coisa que "for(int i = 1; i < 11; i++){"
            printf("%2d ", i); // COORDENADAS DA LINHA VERTICAL"
            for(int j = 0; j < coluna; j++){ // ESTRUTURA DE REPETIÇÃO PARA A EXIBIÇAO DE COLUNAS
                for(int k = 0; k < 3; k++){
                    tabuleiro[7][2 + k] = navio[k]; //POSICIONA NAVIO NA HORIZONTAL
                    for(int l = 0; l < 3; l++){
                        tabuleiro[3 + l][7] = navio[l]; //POSICIONA NAVIO NA VERTICAL
                        for(int m = 0; m < 3; m++){
                            tabuleiro[3 + m][1 + m] = navio[m]; // POSIOCIONA O NAVIO NA DIAGONAL
                            for(int n = 0; n < 3; n++){
                                tabuleiro[1 + n][7 - n] = navio[n]; // POSIOCIONA O NAVIO NA DIAGONAL CONTRARIA
                                for (int o = 0; o < 3; o++) {         // Linhas: 0 a 2
                                    for (int p = 0; p < 5; p++) {     // Colunas: 0 a 4
                                        // Condição: coluna dentro da "largura do cone" para cada linha
                                        if (p >= 2 - o && p <= 2 + o) {
                                            cone[o][p] = 5; // Parte do cone (valor afetado)
                                        } else {
                                            cone[o][p] = 0; // Fora da área de efeito
                                        }
                                        tabuleiro[0 + o][0 + p] = cone[o][p]; // POSIOCIONA A HABILIDADE CONE
                                        for(int q = 0; q < 3; q++){ // Linhas
                                            for(int r = 0; r < 5; r++){ // Colunas
                                                // Losango com centro em [1][2]
                                                if((q == 0 || q == 2) && r == 2){
                                                    octeadro[q][r] = 5;
                                                } else if (q == 1 && (r >= 1 && r <= 3)){
                                                    octeadro[q][r] = 5;
                                                } else{
                                                    octeadro[q][r] = 0;
                                                }
                                                tabuleiro[2 + q][5+ r] = octeadro[q][r]; // POSIOCIONA A HABILIDADE OCTEADRO
                                                for(int s = 0; s < 3; s++){ // Linhas
                                                    for(int t = 0; t < 5; t++){ // Colunas
                                                        // Ponto central (linha 1) ou coluna do meio (coluna 2)
                                                        if(s == 1 || t == 2){
                                                            cruz[s][t] = 5; // Parte da cruz (afetada)
                                                        } else {
                                                            cruz[s][t] = 0; // Fora da área de efeito
                                                        }
                                                        tabuleiro[6 + s][2 + t] = cruz[s][t]; // POSIOCIONA A HABILIDADE CRUZ
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }  
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

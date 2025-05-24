#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //inicializando tabuleiro e os navios (hardcoded)
    int tabuleiro[10][10];
    int navioH[3] = {2, 3, 4}; //navioHorizontal;
    int navioV[3] = {5, 6, 7}; //navioVertical;
    int navioD1 = 4; //navioDiagonal1;
    int navioD2 = 6; //navioDiagonal2;
    int ataqueCone[3][5];
    int ataqueCruz[5][5];
    int ataqueOctaedro[5][5];
    int nLinhasCone = 3;
    int nColunasCone;
    int inicio;
    int indexColunaDoMeio;

    //ATRIBUINDO 0 PARA TODOS OS ELEMENTOS DO TABULEIRO;
    for(int i = 0; i<10; i++){
        for (int j=0; j<10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //ATRIBUINDO VALORES PARA O ATAQUE CONE;
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            ataqueCone[i][j] = 0;
        }
    }

    //Atribuindo valor 5 nas casas do ataque cone
        for(int k = 0; k < nLinhasCone; k++){
            indexColunaDoMeio = nLinhasCone % 2 + 1;
            for(int l = 0; l < 5; l++){
                if(k == 0){
                    if(l == indexColunaDoMeio){
                        printf("%d ", ataqueCone[k][l] = 5);
                    } else {
                        printf("%d ", ataqueCone[k][l] = 0);
                    }
                } else if(k == 1) {
                    if(l == indexColunaDoMeio || (l == indexColunaDoMeio + 1) || (l == indexColunaDoMeio - 1)){
                        printf("%d ", ataqueCone[k][l] = 5);
                    } else {
                        printf("%d ", ataqueCone[k][l] = 0);
                    }
                } else {
                    printf("%d ", ataqueCone[k][l] = 5);
                }
            }
            printf(" \n");
    }



    //         if (inicio = nColunasCone % 2) {
    //         ataqueCone[i][inicio-1] = 5;
    //     }
    // printf("%d \n", ataqueCone[nLinhasCone][nColunasCone]);




    //COLOCANDO OS NAVIOS NAS POSICOES
        //navio horizontal:
    for(int k = 0; k < 3; k++){
        tabuleiro[2][navioH[k]] = 3;
    }
        //navio vertical:
    for(int k = 0; k<3; k++){
        tabuleiro[navioH[k]][8] = 3;
    }
        //navio diagonal 1:
        for(int k = 0; k<3; k++){
        if(navioD1+k <= 9) {
            if (tabuleiro[navioD1+k][2+k] == 0){
            tabuleiro[navioD1+k][2+k] = 3;
            } else {
                printf("As casas escolhidas ja estao ocupadas! Mostrando apenas navios posicionados corretamente:  \n");
            break;
            }
        } else {
            printf("O navioD1 esta fora do tabuleiro! Mostrando apenas navios posicionados corretamente:  \n");
            break;
        }
    }

        //navio diagonal 2:
        for(int k = 0; k<3; k++){
        if(navioD2+k <= 9) {
            if (tabuleiro[navioD2+k][2+k] == 0){
            tabuleiro[navioD2+k][2+k] = 3;
            } else {
                printf("As casas escolhidas ja estao ocupadas! Mostrando apenas navios posicionados corretamente:  \n");
            break;
            }
        } else {
            printf("O navioD2 esta fora do tabuleiro! Mostrando apenas navios posicionados corretamente:  \n");
            break;
        }
    }



//CRIANDO TABULEIRO
printf("   A B C D E F G H I J \n");
for(int i = 0; i < 10; i++){
    //BLOCO PARA IDENTAR MELHOR O TABULEIRO
    if(i<9) {
        printf(" %d ", i+1);
    } else {
        printf("%d ", i+1);
    }

    //MOSTRANDO O TABULEIRO
    for(int j = 0; j < 10; j++){
    printf("%d ", tabuleiro[i][j]);
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

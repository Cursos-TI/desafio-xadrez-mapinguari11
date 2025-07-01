#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int peca; //para o usuário escolher qual peça ele vai mover
    int movimentoBispo, movimentoTorre, movimentoRainha, movimentoCavalo; //para o usuário escolher quantas casas ele vai mover a peça
    int i = 0; //controle de repetições;

    printf("Escolha a peça para mover:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Digite um número: ");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        printf("Mover bispo na diagonal para cima. Quantas casas? (Digite um número entre 1 e 7) "); //Limitado em 7 casas porque o tabuleiro tem 8x8. Se uma peça está na primeira ou na última linha/coluna, o máximo de casas que ela pode andar é 7 e não 8 
        scanf("%d", &movimentoBispo);

        if (movimentoBispo < 1 || movimentoBispo > 7) {
            printf("Quantidade de casas inválida. Por favor, recomece.");
        } else {
            while (i < movimentoBispo)
            {
                printf("Bispo: Cima, Direita %d\n", i+1);
                i++;
            }
        }
        
        break;
    case 2:
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        printf("Mover torre para a direita. Quantas casas? (Digite um número entre 1 e 7) "); //Limitado em 7 casas porque o tabuleiro tem 8x8. Se uma peça está na primeira ou na última linha/coluna, o máximo de casas que ela pode andar é 7 e não 8
        scanf("%d", &movimentoTorre);

        if (movimentoTorre < 1 || movimentoTorre > 7) {
            printf("Quantidade de casas inválida. Por favor, recomece.");
        } else {
            do
            {
                printf("Torre: Direita - %d\n", i+1);
                i++;
            } while (i < movimentoTorre);
            
        }
        
        break;
    case 3:
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        printf("Mover rainha para a esquerda. Quantas casas? (Digite um número entre 1 e 7) "); //Limitado em 7 casas porque o tabuleiro tem 8x8. Se uma peça está na primeira ou na última linha/coluna, o máximo de casas que ela pode andar é 7 e não 8
        scanf("%d", &movimentoRainha);

        if (movimentoRainha < 1 || movimentoRainha > 7) {
            printf("Quantidade de casas inválida. Por favor, recomece.");
        } else {
            for ( i ; i < movimentoRainha; i++)
            {
                printf("Rainha: Esquerda - %d\n", i+1);
            }
        }
        break;
    case 4:
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
        printf("Digite 1 para mover o cavalo para baixo e esquerda. ");
        scanf("%d", &movimentoCavalo);

        if(movimentoCavalo != 1) {
            printf("Entrada inválida. Por favor, recomece.\n");
        } else {
            while(movimentoCavalo == 1) {
                for (int i = 0; i < 2; i++)
                {
                    printf("Cavalo: Baixo - %d\n", i+1);
                }
                printf("Cavalo: Esquerda - %d\n", movimentoCavalo);
                movimentoCavalo--;
            }
        }
        break;
    default: printf("Escolha inválida. Por favor, recomece.");
        break;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

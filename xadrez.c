#include <stdio.h>

void movimentarBispo(int casas) {
    
    if (casas > 0)
    {
        for (int i = 0; i < 1; i++) //garante que ocorra apenas uma vez
        {
            for (int j = 0; j < 1; j++) //garante que ocorra apenas uma vez
            {
                printf("Bispo: Direita - "); // sem \n para que o próximo printf entre na mesma linha, compondo a frase "Bispo: Direita - Cima"
            }
            printf("Cima\n");
        }
        
        movimentarBispo(casas - 1); //Chama novamente a função até que casas == 0. Quando entrar no if com casas == 0, a função para de ser executada
    }
    
}

void movimentarTorre(int casas) {
    if (casas > 0)
    {
        printf("Torre - Direita\n");

        movimentarTorre(casas - 1); //Chama novamente a função até que casas == 0. Quando entrar no if com casas == 0, a função para de ser executada
    }
    
}

void movimentarRainha(int casas) {
    if (casas > 0)
    {
        printf("Rainha - Esquerda\n");

        movimentarRainha(casas - 1); //Chama novamente a função até que casas == 0. Quando entrar no if com casas == 0, a função para de ser executada
    }
    
}

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
        printf("Mover bispo na diagonal para cima. Quantas casas? (Digite um número entre 1 e 7) "); //Limitado em 7 casas porque o tabuleiro tem 8x8. Se uma peça está na primeira ou na última linha/coluna, o máximo de casas que ela pode andar é 7 e não 8 
        scanf("%d", &movimentoBispo);
        printf("\n"); //para separar a saída da peça

        if (movimentoBispo < 1 || movimentoBispo > 7) {
            printf("Quantidade de casas inválida. Por favor, recomece.");
        } else {
            movimentarBispo(movimentoBispo);
        }
        
        break;
    case 2:
    // Implementação de Movimentação da Torre
        printf("Mover torre para a direita. Quantas casas? (Digite um número entre 1 e 7) "); //Limitado em 7 casas porque o tabuleiro tem 8x8. Se uma peça está na primeira ou na última linha/coluna, o máximo de casas que ela pode andar é 7 e não 8
        scanf("%d", &movimentoTorre);
        printf("\n"); //para separar a saída da peça

        if (movimentoTorre < 1 || movimentoTorre > 7) {
            printf("Quantidade de casas inválida. Por favor, recomece.");
        } else {
            movimentarTorre(movimentoTorre);
        }
        
        break;
    case 3:
    // Implementação de Movimentação da Rainha
        printf("Mover rainha para a esquerda. Quantas casas? (Digite um número entre 1 e 7) "); //Limitado em 7 casas porque o tabuleiro tem 8x8. Se uma peça está na primeira ou na última linha/coluna, o máximo de casas que ela pode andar é 7 e não 8
        scanf("%d", &movimentoRainha);
        printf("\n"); //para separar a saída da peça

        if (movimentoRainha < 1 || movimentoRainha > 7) {
            printf("Quantidade de casas inválida. Por favor, recomece.");
        } else {
            movimentarRainha(movimentoRainha);
        }
        break;
    case 4:
    // Nível Aventureiro - Movimentação do Cavalo
        printf("Digite 1 para mover o cavalo para cima e direita. ");
        scanf("%d", &movimentoCavalo);
        printf("\n"); //para separar a saída da peça

        if(movimentoCavalo != 1) {
            printf("Entrada inválida. Por favor, recomece.\n");
        } else {
            //Nível mestre
            for (int cima = 0, direita = 0; cima < 3 || direita < 2;)
            {
                if (cima < 3) 
                {
                    cima++;
                    if (cima == 2) continue; // pula a execução do print na 2ª vez
                    printf("Cavalo: Cima\n");

                } else if (direita < 2) {
                    direita++;
                    printf("Cavalo: Direita\n");
                    if (direita == 1) break; // força a saída do loop após a primeira vez
                }
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

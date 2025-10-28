#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

         printf(" Movimento do Bispo (%d casas para Cima, Direita)\n", movimentoBispo);

        int Bispo = 0;
            while (Bispo < movimentoBispo){
            
            if (Bispo < movimentoBispo ) // (o valor de "i" dividido "%" por "2" que dá o resultado = "0" sera o que eu preciso)
            {
            printf("Cima, Direita\n"); // Oque ira aparece na tela inicial do codigo indicando o movimento 
            }
                Bispo++;}
            
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

        printf(" Movimento da Torre (%d casas para Direita)\n", movimentoTorre);

        for (int i = 0; i < movimentoTorre; i++) // "int i"= torre, "0" valor inicial *ou seja parado*, "i"= torre, "<="= menor ou igual a "i", "5" vezes que sera repetido ou seja vezes movida, "i++" adiciona +1 ao valor anterior
        {
            printf("Direita\n"); // Oque ira aparece na tela inicial do codigo indicando o movimento 
        }
           
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

        printf(" Movimento da Rainha (%d casas para Esquerda)\n", movimentoRainha);

        int Rainha = 0 ;
            do
            {    
                printf("Esquerda\n"); 
            
                Rainha++;

            }while (Rainha < movimentoRainha);        

    printf("\n");




    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

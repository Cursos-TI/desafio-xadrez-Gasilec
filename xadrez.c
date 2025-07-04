#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Movimento do bispo - diagonal superior direita
void movimetobispo(int casas){
    if (casas > 0)
    {
        printf("\nCima\n");
        printf("Direita");

        movimetobispo(casas - 1);
    }
    
}    

//Movimento da torre - direita 
void movimetotorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        
        movimetotorre(casas - 1);
    }
    
}

//movimento da rainha - Esquerda
void movimetorainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");

        movimetorainha(casas - 1);
    }
    
}

int main() {

 //movimento das peças
 int bispo = 5;
 int torre = 5;
 int rainha = 8;


    printf("Movimentos do bispo: \n");
    movimetobispo(bispo);

    printf("\n\nMovimento da torre: \n\n");
    movimetotorre(torre);

    printf("\nMovimento da rainha: \n\n");
    movimetorainha(rainha);
    
//Movimento do cavalo - EM "L"
    printf("\nMovimento do cavalo: \n\n");
    int movimentocompleto = 1; // flag para controlar movimento em 'L'

    while (movimentocompleto--) //repete até zerar
    {
        for (int i = 0; i < 2; i++) // i execulta pra 0 e pra 1, depois sai do laço e execulta o prinf do wilhe
        {
            printf("Cima\n"); // imprime "Cima" duas vezes
        }
        printf ("Direita\n"); // imprime "Direira" uma vezes

        printf ("\n");
    }

    return 0;
}

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

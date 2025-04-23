#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void move_to_right_in_loop(int move_count)
{
    printf("\tDireita\n");
    move_count--;
    if (move_count > 0)
    {
        move_to_right_in_loop(move_count);
    }
}

void move_to_left_in_loop(int move_count)
{
    printf("\tEsquerda\n");
    move_count--;
    if (move_count > 0)
    {
        move_to_left_in_loop(move_count);
    }
}

void move_to_top_right_in_loop(int move_count)
{
    for (int y = 0; y < 1; y++)
    {
        printf("\tCima\n");
        for (int x = 0; x < 1; x++)
        {
            printf("\tDireita\n");
        }
    }
    move_count--;
    if (move_count > 0)
    {
        move_to_top_right_in_loop(move_count);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int tower_move_count = 5;
    const int bishop_move_count = 5;
    const int queen_move_count = 8;
    const int horse_move_count_y = 2;
    const int horse_move_count_x = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do bispo:\n");
    move_to_top_right_in_loop(bishop_move_count);

    // Implementação de Movimentação da Torre
    printf("Movimentação da torre:\n");
    move_to_right_in_loop(tower_move_count);

    // Implementação de Movimentação da Rainha
    printf("Movimentação da rainha:\n");
    move_to_left_in_loop(queen_move_count);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimentação do cavalo:\n");
    for (int i = 0, y = 0, x = 0; i < 10; i++)
    {
        if (y < horse_move_count_y)
        {
            printf("\tCima\n");
            y++;
            continue;
        }

        if (x == horse_move_count_x)
            break;
        printf("\tDireita\n");
        x++;
    }

    return 0;
}
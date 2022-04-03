#include "lib.h"

int Preencher(int n)
{
    int lin, col;

    for (lin = 0; lin < n; lin++)
    {
        for (col = 0; col < n; col++)
        {
            matriz[lin][col] = rand() % 99;
        }
    }
    return matriz[lin][col];
}

void checarMapa(int fim)
{
    int atual, lin, col, direita, esquerda, baixo, soma; // talvez fazer uma struct?
    int posicao[2];

    lin = 0, col = 0;
    atual = matriz[lin][col];
    soma = atual;

    do
    {
        direita = matriz[lin][col + 1];
        esquerda = matriz[lin][col - 1];
        baixo = matriz[lin + 1][col];

        direita = checarValor(direita, posicao, lin, col + 1, fim - 1);
        esquerda = checarValor(esquerda, posicao, lin, col - 1, fim - 1);
        baixo = checarValor(baixo, posicao, lin + 1, col, fim - 1);

        if (lin == fim - 1)
        {
            esquerda = -1;
        }
        if ((direita >= baixo) && (direita >= esquerda))
        {
            posicao[0] = lin;
            posicao[1] = col;
            atual = direita;
            soma += direita;
            col += 1;
        }
        else if ((baixo >= direita) && (baixo >= esquerda))
        {
            posicao[0] = lin;
            posicao[1] = col;
            atual = baixo;
            soma += baixo;
            lin += 1;
        }
        else if ((esquerda >= direita) && (esquerda >= baixo))
        {
            posicao[0] = lin;
            posicao[1] = col;
            atual = esquerda;
            soma += esquerda;
            col -= 1;
        }

    } while (lin + 1 != fim || col + 1 != fim);

    printf("\nSOMA: %d", soma);
}

int checarValor(int valor, int posicao[2], int lin, int col, int fim)
{
    if ((lin == posicao[0] && col == posicao[1]) || lin > fim || col < 0 || col > fim)
    {
        valor = -1;
    }
    return valor;
}

void Imprimir(int n)
{
    int lin, col;

    for (lin = 0; lin < n; lin++)
    {
        for (col = 0; col < n; col++)
        {
            printf("[ %02d ]", matriz[lin][col]);
        }
        printf("\n");
    }
}

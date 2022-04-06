#include "lib.h"

void Preencher()
{
    for (int lin = 0; lin < N; lin++)
    {
        for (int col = 0; col < N; col++)
        {
            matriz[lin][col].valor = rand() % 99;
            matriz[lin][col].pin = false;
        }
    }
}

void ChecarMapa(int fim)
{
    int soma, pant[2], lin, col;
    lin = 0, col = 0;

    matriz[lin][col].pin = true;
    soma = matriz[lin][col].valor;

    do
    {

        // Atualiza os valores de direita, esquerda e baixo

        p.direita = matriz[lin][col + 1].valor;
        p.esquerda = matriz[lin][col - 1].valor;
        p.baixo = matriz[lin + 1][col].valor;

        // Checa se os valores de direita, esquerda e baixo seguem as regras, caso não, viram -1

        p.direita = ChecarValor(p.direita, pant, lin, col + 1, fim - 1);
        p.esquerda = ChecarValor(p.esquerda, pant, lin, col - 1, fim - 1);
        p.baixo = ChecarValor(p.baixo, pant, lin + 1, col, fim - 1);

        // Checa todas as regras

        if (lin == fim - 1)
        {
            p.esquerda = -1;
        }
        if ((p.direita >= p.baixo) && (p.direita >= p.esquerda))
        {
            soma = ChecarMaior(p.direita, pant, soma, lin, col);
            col += 1;
        }
        else if ((p.baixo >= p.direita) && (p.baixo >= p.esquerda))
        {
            soma = ChecarMaior(p.baixo, pant, soma, lin, col);
            lin += 1;
        }
        else if ((p.esquerda >= p.direita) && (p.esquerda >= p.baixo))
        {
            soma = ChecarMaior(p.esquerda, pant, soma, lin, col);
            col -= 1;
        }

        matriz[lin][col].pin = true;

    } while (lin + 1 != fim || col + 1 != fim);

    printf("\nCAMINHO \n");

    Imprimir();

    printf("\nSOMA: %d\n", soma);
}

int ChecarValor(int valor, int p[2], int lin, int col, int fim)
{
    if ((lin == p[0] && col == p[1]) || lin > fim || col < 0 || col > fim)
    {
        valor = -1;
    }
    return valor;
}

// Checa o maior valor e o retorna

int ChecarMaior(int valor, int pant[2], int soma, int lin, int col)
{
    pant[0] = lin;
    pant[1] = col;
    soma += valor;

    return soma;
}

void Imprimir()
{
    for (int lin = 0; lin < N; lin++)
    {
        for (int col = 0; col < N; col++)
        {
            if (!matriz[lin][col].pin)
                printf("[ %02d ]", matriz[lin][col].valor);
            else
            {
                Vermelho();
                printf("[ %02d ]", matriz[lin][col].valor);
                Reset();
            }
        }
        printf("\n");
    }
}

void Vermelho()
{
    printf("\033[0;31m");
}

void Reset()
{
    printf("\033[0m");
}
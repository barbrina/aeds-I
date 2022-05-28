#include "Matriz.h"

void CriarMatriz(int linha, int coluna)
{
    for (int lin = 0; lin < linha; lin++)
    {
        for (int col = 0; col < coluna; col++)
        {
            matriz[lin][col].valor = 0;
        }
    }
}

void PreencherMatriz(int linha, int coluna)
{
    matriz[linha][coluna].valor = 1;
}

void ImprimirMatriz(int linha, int coluna)
{
    for (int lin = 0; lin < linha; lin++)
    {
        for (int col = 0; col < coluna; col++)
        {
            printf(" %d ", matriz[lin][col].valor);
        }
        printf("\n");
    }
}

int ChecarValor(int valor, int lin, int col, int linha, int coluna)
{
    if (lin > linha || col < 0 || col > coluna || lin < 0)
    {
        valor = -1;
    }
    return valor;
}
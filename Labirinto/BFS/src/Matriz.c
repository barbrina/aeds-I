#include "Matriz.h"

Data matriz[MAXTAM][MAXTAM];

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

void PercorreMatriz(int linha, int coluna, Fila *f)
{
    int lin = 0, col = 0;
    int fimlin, fimcol, interacoes = 1;

    Item aux;

    EnfileiraPosicao(aux, lin, col, f);
    matriz[lin][col].valor = 2;

    do
    {
        lin = f->first->prox->data.posicao[0];
        col = f->first->prox->data.posicao[1];

        Valores v;

        // Atualiza os valores de direita, esquerda e baixo

        v.direita = matriz[lin][col + 1].valor;
        v.esquerda = matriz[lin][col - 1].valor;
        v.baixo = matriz[lin + 1][col].valor;
        v.cima = matriz[lin - 1][col].valor;

        // Checa se os valores de direita, esquerda e baixo seguem as regras, caso não, viram -1

        v.direita = ChecarValor(v.direita, lin, col + 1, linha - 1, coluna - 1);
        v.esquerda = ChecarValor(v.esquerda, lin, col - 1, linha - 1, coluna - 1);
        v.baixo = ChecarValor(v.baixo, lin + 1, col, linha - 1, coluna - 1);
        v.cima = ChecarValor(v.cima, lin - 1, col, linha - 1, coluna - 1);

        if (v.direita == 0)
        {
            interacoes++;
            matriz[lin][col + 1].valor = 2;
            EnfileiraPosicao(aux, lin, col + 1, f);
        }
        if (v.baixo == 0)
        {
            interacoes++;
            matriz[lin + 1][col].valor = 2;
            EnfileiraPosicao(aux, lin + 1, col, f);
        }
        if (v.esquerda == 0)
        {
            interacoes++;
            matriz[lin][col - 1].valor = 2;
            EnfileiraPosicao(aux, lin, col - 1, f);
        }
        if (v.cima == 0)
        {
            interacoes++;
            matriz[lin - 1][col].valor = 2;
            EnfileiraPosicao(aux, lin - 1, col, f);
        }

        DesenfileiraPosicao(&aux, linha, coluna, f);

        fimlin = f->last->data.posicao[0];
        fimcol = f->last->data.posicao[1];

    } while (fimlin + 1 != linha || fimcol + 1 != coluna);

    printf("\nO número de interações é %d\n", interacoes);
}

int ChecarValor(int valor, int lin, int col, int linha, int coluna)
{
    if (lin > linha || col < 0 || col > coluna || lin < 0)
    {
        valor = -1;
    }
    return valor;
}

void EnfileiraPosicao(Item aux, int linha, int coluna, Fila *f)
{
    aux.posicao[0] = linha;
    aux.posicao[1] = coluna;
    Enfileira(f, aux);
}

void DesenfileiraPosicao(Item *aux, int linha, int coluna, Fila *f)
{

    aux->posicao[0] = linha;
    aux->posicao[1] = coluna;
    Desenfileira(f, aux);
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

int RetornaValor(int linha, int coluna)
{
    return (matriz[linha][coluna].valor);
}

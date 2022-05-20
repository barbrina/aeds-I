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

void PercorreMatriz(int linha, int coluna)
{
    int lin = 0, col = 0, interacoes = 1;

    Item aux;

    EmpilhaPosicao(aux, lin, col);
    matriz[lin][col].valor = 2;

    do
    {

        lin = p.top->data.posicao[0];
        col = p.top->data.posicao[1];

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

        // Checa todas as posições e adiciona ela a pilha

        if (v.baixo == 0)
        {
            interacoes++;
            matriz[lin + 1][col].valor = 2;
            EmpilhaPosicao(aux, lin + 1, col);
            lin += 1;
        }
        else if (v.direita == 0)
        {
            interacoes++;
            matriz[lin][col + 1].valor = 2;
            EmpilhaPosicao(aux, lin, col + 1);
            col += 1;
        }
        else if (v.esquerda == 0)
        {
            interacoes++;
            matriz[lin][col - 1].valor = 2;
            EmpilhaPosicao(aux, lin, col - 1);
            col -= 1;
        }
        else if (v.cima == 0)
        {
            interacoes++;
            matriz[lin - 1][col].valor = 2;
            EmpilhaPosicao(aux, lin - 1, col);
            lin -= 1;
        }
        else if (v.baixo == 2 || v.cima == 2 || v.direita == 2 || v.esquerda == 2) // Caso não dê mais para empilhar, desempilha
        {
            DesempilhaPosicao(&aux, lin, col);
            matriz[lin][col].valor = 1;
        }

    } while (lin != linha - 1 || col != coluna - 1);

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

void EmpilhaPosicao(Item aux, int linha, int coluna)
{
    aux.posicao[0] = linha;
    aux.posicao[1] = coluna;
    Push(&p, aux);
}

void DesempilhaPosicao(Item *aux, int linha, int coluna)
{
    aux->posicao[0] = linha;
    aux->posicao[1] = coluna;
    Pop(&p, aux);
}
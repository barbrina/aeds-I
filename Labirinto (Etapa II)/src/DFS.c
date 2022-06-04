#include "DFS.h"

void PercorreDFS(int linha, int coluna, Pilha *p,Data matriz[MAXTAM][MAXTAM])
{
    int lin = 0, col = 0, interacoes = 1;

    ItemP aux;

    EmpilhaPosicao(aux, lin, col, p);
    matriz[lin][col].valor = 2;

    do
    {

        lin = p->top->data.posicao[0];
        col = p->top->data.posicao[1];

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
            EmpilhaPosicao(aux, lin + 1, col, p);
            lin += 1;
        }
        else if (v.direita == 0)
        {
            interacoes++;
            matriz[lin][col + 1].valor = 2;
            EmpilhaPosicao(aux, lin, col + 1, p);
            col += 1;
        }
        else if (v.esquerda == 0)
        {
            interacoes++;
            matriz[lin][col - 1].valor = 2;
            EmpilhaPosicao(aux, lin, col - 1, p);
            col -= 1;
        }
        else if (v.cima == 0)
        {
            interacoes++;
            matriz[lin - 1][col].valor = 2;
            EmpilhaPosicao(aux, lin - 1, col, p);
            lin -= 1;
        }
        else if (v.baixo == 2 || v.cima == 2 || v.direita == 2 || v.esquerda == 2) // Caso não dê mais para empilhar, desempilha
        {
            DesempilhaPosicao(&aux, lin, col, p);
            matriz[lin][col].valor = 1;
        }

    } while (lin != linha - 1 || col != coluna - 1);

    printf("\nO número de interações é %d\n", interacoes);
}

void EmpilhaPosicao(ItemP aux, int linha, int coluna, Pilha *p)
{
    aux.posicao[0] = linha;
    aux.posicao[1] = coluna;
    Push(p, aux);
}

void DesempilhaPosicao(ItemP *aux, int linha, int coluna, Pilha *p)
{
    aux->posicao[0] = linha;
    aux->posicao[1] = coluna;
    Pop(p, aux);
}
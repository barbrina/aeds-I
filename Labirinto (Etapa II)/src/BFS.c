#include "BFS.h"

void PercorreBFS(int linha, int coluna, bool chave, Fila *f,Data matriz[MAXTAM][MAXTAM])
{
    int lin = 0, col = 0, tam = linha;
    int fimlin, fimcol, interacoes = 1;

    ItemF aux;

    int heur = 0;

    if (chave)
    {
        printf("Qual heurística deseja utilizar para realizar os cálculos?\n");
        printf("1-Manhattan\n");
        printf("2-Euclidiana.\n");
        printf("R:");
        scanf("%d", &heur);
    }

    EnfileiraPosicao(aux, lin, col, chave, tam, heur, f);
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

        if (v.baixo == 0)
        {
            interacoes++;
            matriz[lin + 1][col].valor = 2;
            EnfileiraPosicao(aux, lin + 1, col, chave, tam, heur, f);
        }
        if (v.direita == 0)
        {
            interacoes++;
            matriz[lin][col + 1].valor = 2;
            EnfileiraPosicao(aux, lin, col + 1, chave, tam, heur, f);
        }
        if (v.esquerda == 0)
        {
            interacoes++;
            matriz[lin][col - 1].valor = 2;
            EnfileiraPosicao(aux, lin, col - 1, chave, tam, heur, f);
        }
        if (v.cima == 0)
        {
            interacoes++;
            matriz[lin - 1][col].valor = 2;
            EnfileiraPosicao(aux, lin - 1, col, chave, tam, heur, f);
        }

        DesenfileiraPosicao(&aux, linha, coluna, f);

        fimlin = f->last->data.posicao[0];
        fimcol = f->last->data.posicao[1];

        if (heur != 0)
        {
            OrdenaFila(f);
        }

    } while (fimlin + 1 != linha || fimcol + 1 != coluna);

    printf("\nO número de interações é %d\n", interacoes);
}

void EnfileiraPosicao(ItemF aux, int linha, int coluna, bool chave, int tam, int heur, Fila *f)
{
    aux.posicao[0] = linha;
    aux.posicao[1] = coluna;

    if (heur != 0)
    {
        EnfileiraA_Estrela(f, aux, heur, tam);
    }
    else
    {
        Enfileira(f, aux);
    }
}

void DesenfileiraPosicao(ItemF *aux, int linha, int coluna, Fila *f)
{
    aux->posicao[0] = linha;
    aux->posicao[1] = coluna;
    Desenfileira(f, aux);
}
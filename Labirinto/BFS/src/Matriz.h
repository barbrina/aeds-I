#ifndef MATRIZ_H
#define MATRIZ_H
#include "Fila.h"

#define MAXTAM 7

typedef struct data
{
    int valor;
} Data;

typedef struct valores
{
    int direita;
    int esquerda;
    int baixo;
    int cima;
} Valores;

void CriarMatriz(int linha, int coluna);
void PercorreMatriz(int linha, int coluna, Fila *f);
int ChecarValor(int valor, int lin, int col, int linha, int coluna);
void PreencherMatriz(int linha, int coluna);
void EnfileiraPosicao(Item aux, int linha, int coluna, Fila *f);
void DesenfileiraPosicao(Item *aux, int linha, int coluna, Fila *f);
void ImprimirMatriz(int linha, int coluna);
int RetornaValor(int linha, int coluna);

#endif
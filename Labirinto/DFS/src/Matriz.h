#ifndef MATRIZ_H
#define MATRIZ_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Pilha.h"
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
void PreencherMatriz(int linha, int coluna);
void ImprimirMatriz(int linha, int coluna);

void PercorreMatriz(int linha, int coluna, Pilha *p);
int ChecarValor(int valor, int lin, int col, int linha, int coluna);
void EmpilhaPosicao(Item aux, int linha, int coluna, Pilha *p);
void DesempilhaPosicao(Item *aux, int linha, int coluna, Pilha *p);

#endif

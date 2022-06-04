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

void CriarMatriz(int linha, int coluna,Data matriz[MAXTAM][MAXTAM]);
void PreencherMatriz(int linha, int coluna,Data matriz[MAXTAM][MAXTAM]);
void ImprimirMatriz(int linha, int coluna,Data matriz[MAXTAM][MAXTAM]);
int ChecarValor(int valor, int lin, int col, int linha, int coluna);

#endif

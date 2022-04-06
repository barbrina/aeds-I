#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define N 7

typedef struct data
{
    int valor;
    bool pin;
} Data;

Data matriz[N][N];

typedef struct valores
{
    int direita;
    int esquerda;
    int baixo;
} Valores;

Valores p;

void Preencher();

void ChecarMapa();
int ChecarValor(int valor, int *posicao, int lin, int col, int fim);
int ChecarMaior(int valor, int *pant, int soma, int lin, int col);

void Imprimir();

void Vermelho();
void Reset();

#endif
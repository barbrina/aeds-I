#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int matriz[N][N];

int Preencher(int n);
void Imprimir(int n);

void checarMapa(int n);
int checarValor(int valor, int *posicao, int lin, int col, int fim);

#endif
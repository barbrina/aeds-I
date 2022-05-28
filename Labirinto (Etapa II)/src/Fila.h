#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "A_Estrela.h"

typedef struct ItemF ItemF;
typedef struct BlockF BlockF;
typedef struct Fila Fila;

struct ItemF
{
	int posicao[2];
	float heur;
};

struct BlockF
{
	ItemF data;
	BlockF *prox;
};

struct Fila
{
	BlockF *first;
	BlockF *last;
};

Fila f;

void FFVazia(Fila *f);
void Enfileira(Fila *f, ItemF d);
void Desenfileira(Fila *f, ItemF *d);
void EnfileiraA_Estrela(Fila *f, ItemF d, int heur, int tam);
void FImprime(Fila *f);
void OrdenaFila(Fila *f);

#endif

#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Item Item;
typedef struct Block Block;
typedef struct Fila Fila;

struct Item
{
	int posicao[2];
};

struct Block
{
	Item data;
	Block *prox;
};

struct Fila
{
	Block *first;
	Block *last;
};

Fila f;

void FFVazia(Fila *f);
void Enfileira(Fila *f, Item d);
void Desenfileira(Fila *f, Item *d);
void FImprime(Fila *f);

#endif
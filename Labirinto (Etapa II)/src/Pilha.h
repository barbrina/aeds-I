#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ItemP ItemP;
typedef struct BlockP BlockP;
typedef struct Pilha Pilha;

struct ItemP
{
    int posicao[2];
};

struct BlockP
{
    ItemP data;
    BlockP *prox;
};

struct Pilha
{
    BlockP *base;
    BlockP *top;
};

Pilha p;

void FPVazia(Pilha *p);
void Push(Pilha *p, ItemP d);
void Pop(Pilha *p, ItemP *d);
void PImprime(Pilha *p);

#endif
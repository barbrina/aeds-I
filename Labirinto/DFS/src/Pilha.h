#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Item Item;
typedef struct Block Block;
typedef struct Pilha Pilha;

struct Item
{
    int posicao[2];
};

struct Block
{
    Item data;
    Block *prox;
};

struct Pilha
{
    Block *base;
    Block *top;
};

Pilha p;

void FPVazia(Pilha *p);
void Push(Pilha *p, Item d);
void Pop(Pilha *p, Item *d);
void PImprime(Pilha *p);

#endif
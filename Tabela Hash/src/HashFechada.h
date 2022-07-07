#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define hash(v, M) (v % M)

typedef struct DataFechada DataFechada;
typedef struct HashFechada HashFechada;

struct DataFechada
{
    int key;
    bool data;
    int lista[20];
};

struct HashFechada
{
    DataFechada *table;
    int M;
    int colisoes;
};

void InserirValoresFechada(HashFechada *h, int *vetor);
void InitializeFechada(HashFechada *h, int M);
void ImprimeFechada(HashFechada *h);
void InsertFechada(HashFechada *h, int value);
int ReturnColisoesFechada(HashFechada *h);

#endif
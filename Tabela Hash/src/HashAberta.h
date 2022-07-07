#ifndef HASHABERTA_H
#define HASHABERTA_H

#include <stdio.h>
#include <stdlib.h>

#define hash(v, M) (v % M)
#define hash_2(v, key, M) (((v * key + M) + value % M) % M)

typedef struct DataAberta DataAberta;
typedef struct HashAberta HashAberta;

struct DataAberta
{
    int key;
    int value;
};

struct HashAberta
{
    DataAberta *table;
    int M;
    int colisoes;
};

void PreencherVetor(int *vetor);
void InserirValoresAberta(HashAberta *h, int *vetor);
void InitializeAberta(HashAberta *h, int M);
void ImprimeAberta(HashAberta *h);
void InsertAberta(HashAberta *h, int value);
int ReturnColisoesAberta(HashAberta *h);

#endif
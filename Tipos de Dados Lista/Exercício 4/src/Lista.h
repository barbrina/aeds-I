#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAXTAM 100

typedef struct dados
{
    int num;
} Dados;

typedef struct lista
{
    Dados vet[MAXTAM];
    int primeiro; // aponta para o primeiro index
    int ultimo;   // aponta para o último index

} Lista;

void FLVazia(Lista *l);
void Insere_lista(Lista *l, Dados nome);
void Percorre_lista(Lista *l);

void Imprime(Lista *l, int inicio, int fim);

void Vermelho();
void Reset();

#endif
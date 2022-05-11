#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXTAM 100

typedef struct dados
{
    char *dna;
} Dados;

typedef struct lista
{
    Dados vet[MAXTAM];
    int primeiro; // aponta para o primeiro index
    int ultimo;   // aponta para o último index

} Lista;

void FLVazia(Lista *l);
void insere_lista(Lista *l, Dados nome);
void percorre_lista(Lista *l, Lista *n);

void Imprime(Lista *l, int inicio, int fim);

void Vermelho();
void Reset();

#endif
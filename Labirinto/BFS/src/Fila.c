#include "Fila.h"

void FFVazia(Fila *f)
{
	f->first = (Block *)malloc(sizeof(Block));
	f->last = f->first;
	f->first->prox = NULL;
}

void Enfileira(Fila *f, Item d)
{
	f->last->prox = (Block *)malloc(sizeof(Block));
	f->last = f->last->prox;
	f->last->data = d;
	f->last->prox = NULL;
}

void Desenfileira(Fila *f, Item *d)
{
	Block *aux;

	if (f->first == f->last || f == NULL || f->first->prox == NULL)
	{
		printf("FILA VAZIA!\n");
		return;
	}

	aux = f->first->prox;
	f->first->prox = aux->prox;
	d->posicao[0] = aux->data.posicao[0];
	d->posicao[1] = aux->data.posicao[1];
	free(aux);
}

void FImprime(Fila *f)
{
	Block *aux;

	aux = f->first->prox;
	while (aux != NULL)
	{
		printf("%d,%d - ", aux->data.posicao[0], aux->data.posicao[1]);
		aux = aux->prox;
	}
	printf("\n");
}

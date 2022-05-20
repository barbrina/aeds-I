#include "Pilha.h"

void FPVazia(Pilha *p)
{
	p->base = (Block *)malloc(sizeof(Block));
	p->top = p->base;
	p->base->prox = NULL;
}

void Push(Pilha *p, Item d)
{
	Block *aux = (Block *)malloc(sizeof(Block));
	aux->data = d;
	aux->prox = p->top;
	p->top = aux;
}

void Pop(Pilha *p, Item *d)
{
	Block *aux;

	if (p->base == p->top || p == NULL)
	{
		return;
	}

	aux = p->top;
	p->top = aux->prox;
	*d = aux->data;
	free(aux);
}

void PImprime(Pilha *p)
{
	Block *aux;

	aux = p->top;
	while (aux != p->base)
	{
		printf("%d, %d\n", aux->data.posicao[0], aux->data.posicao[1]);
		aux = aux->prox;
	}
}
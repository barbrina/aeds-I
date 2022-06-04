#include "Pilha.h"

void FPVazia(Pilha *p)
{
	p->base = (BlockP *)malloc(sizeof(BlockP));
	p->top = p->base;
	p->base->prox = NULL;
}

void Push(Pilha *p, ItemP d)
{
	BlockP *aux = (BlockP *)malloc(sizeof(BlockP));
	aux->data = d;
	aux->prox = p->top;
	p->top = aux;
}

void Pop(Pilha *p, ItemP *d)
{
	BlockP *aux;

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
	BlockP *aux;

	aux = p->top;
	while (aux != p->base)
	{
		printf("%d, %d\n", aux->data.posicao[0], aux->data.posicao[1]);
		aux = aux->prox;
	}
}
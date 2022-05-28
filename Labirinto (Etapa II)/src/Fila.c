#include "Fila.h"

void FFVazia(Fila *f)
{
	f->first = (BlockF *)malloc(sizeof(BlockF));
	f->last = f->first;
	f->first->prox = NULL;
}

void Enfileira(Fila *f, ItemF d)
{
	d.heur = -1;
	f->last->prox = (BlockF *)malloc(sizeof(BlockF));
	f->last = f->last->prox;
	f->last->data = d;
	f->last->prox = NULL;
}


void EnfileiraA_Estrela(Fila *f, ItemF d, int heur, int tam)
{
	if(heur==1)
	{
		d.heur=Manhattan(d.posicao[0],d.posicao[1],tam);
	}
	else
	{
		d.heur=Euclidian(d.posicao[0],d.posicao[1],tam);
	}
	f->last->prox = (BlockF *)malloc(sizeof(BlockF));
	f->last = f->last->prox;
	f->last->data = d;
	f->last->prox = NULL;
}

void Desenfileira(Fila *f, ItemF *d)
{
	BlockF *aux;

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

void OrdenaFila(Fila*f)
{	
	BlockF *aux,*aux2,*aux3=NULL;
	ItemF guarda;

	aux=f->first->prox;

	while(aux->prox!=NULL)
	{
		aux2=f->first->prox;
		while(aux2->prox!=aux3)
		{
			if(aux2->data.heur>aux2->prox->data.heur)
			{
				guarda=aux2->data;
				aux2->data=aux2->prox->data;
				aux2->prox->data=guarda;
			}
				if(aux2->prox==aux3)
					aux3=aux2;
			aux2 = aux2->prox;
		}
		aux=aux->prox;
	}

}

void FImprime(Fila *f)
{
	BlockF *aux;

	aux = f->first->prox;
	while (aux != NULL)
	{
		printf("%d,%d - ", aux->data.posicao[0], aux->data.posicao[1]);
		aux = aux->prox;
	}
	printf("\n");
}

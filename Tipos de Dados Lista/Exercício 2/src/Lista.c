#include "Lista.h"

void FLVazia(Lista *l)
{
    Dados aux;
    for (int i = 0; i < MAXTAM; i++)
    {
        aux.nome = 0;
        l->vet[i] = aux;
    }
    l->primeiro = 0;
    l->ultimo = 0;
}

void insere_lista(Lista *l, Dados dado)
{
    if (l->ultimo == MAXTAM)
    {
        printf("Lista cheia.\n");
    }
    else
    {
        l->vet[l->ultimo] = dado;
        l->ultimo++;
    }
}

void remove_lista(Lista *l, Dados dado)
{
    if (l->ultimo == l->primeiro) // Para caso a lista esteja vazia
    {
        printf("Lista está vazia.\n");
    }
    else
    {
        for (int i = l->primeiro; i < l->ultimo; i++)
        {
            if (!strcmp(dado.nome, l->vet[i].nome)) // encontra o elemento
            {
                l->vet[i].visivel = false;
            }
        }
    }
}

void pesquisa_lista(Lista *l) // Percorre a lista comparando os nomes
{

    Dados dado;
    int i, j;

    for (i = l->primeiro; i < l->ultimo; i++)
    {
        j = i; // compara com o próximo nome
        for (j++; j < l->ultimo; j++)
        {
            if (!strcmp(l->vet[i].nome, l->vet[j].nome))
            {
                dado.nome = l->vet[i].nome;
                dado.visivel = l->vet[i].visivel;
                remove_lista(l, dado);
            }
        }
    }
}

void Imprime(Lista *l)
{
    printf("\nLista de Nomes:\n");

    for (int i = l->primeiro; i < l->ultimo; i++)
    {
        if (l->vet[i].visivel)
        {
            printf("%s", l->vet[i].nome);
        }
    }
}
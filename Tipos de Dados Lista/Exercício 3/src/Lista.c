#include "Lista.h"

void FLVazia(Lista *l)
{
    Dados aux;
    for (int i = 0; i < MAXTAM; i++)
    {
        aux.dna = 0;
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

void percorre_lista(Lista *l, Lista *n) // Percorre a lista procurando a substring no DNA
{

    int i = n->primeiro, j = l->primeiro;
    int soma = 0, soma_ant = soma;
    int inicio = 0;

    while (i < n->ultimo)
    {
        while (j < l->ultimo)
        {
            if (!strcmp(n->vet[i].dna, l->vet[j].dna))
            {
                soma++;
                i++;
                j++;
                if (soma == n->ultimo)
                {
                    i = n->ultimo;
                    j = l->ultimo;
                }
            }
            else
            {
                if (soma > soma_ant)
                {
                    soma_ant = soma;
                    inicio = j - soma;
                }
                j -= soma;
                soma = 0;
                j++;
                i = n->primeiro;
            }
        }
        if (soma > soma_ant)
        {
            soma_ant = soma;
            inicio = j - soma;
        }
        j = l->primeiro;
        n->primeiro = n->primeiro + 1;
    }

    int fim = inicio + soma_ant - 1;
    Imprime(l, inicio, fim);
}

void Imprime(Lista *l, int inicio, int fim)
{
    for (int i = l->primeiro; i < l->ultimo; i++)
    {
        if (i >= inicio && i <= fim)
        {
            Vermelho();
            printf("%s", l->vet[i].dna);
            Reset();
        }
        else
        {
            printf("%s", l->vet[i].dna);
        }
    }
}

void Vermelho()
{
    printf("\033[0;31m");
}

void Reset()
{
    printf("\033[0m");
}
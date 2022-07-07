#include "HashFechada.h"

void InserirValoresFechada(HashFechada *h, int *vetor)
{
    for (int n = 0; n < 20; n++)
    {
        InsertFechada(h, vetor[n]);
    }
}

void InitializeFechada(HashFechada *h, int M)
{
    h->table = (DataFechada *)malloc(M * sizeof(DataFechada));

    for (int i = 0; i < M; i++)
    {
        h->table[i].key = -1;
        h->table[i].data = false;
        for (int j = 0; j < 20; j++)
        {
            h->table[i].lista[j] = -1;
        }
    }

    h->M = M;
    h->colisoes = 0;
}

void ImprimeFechada(HashFechada *h)
{
    printf("HASH FECHADA: \n");
    for (int i = 0; i < h->M; i++)
    {
        if (h->table[i].key != -1)
        {
            printf("KEY:%d - VALUES: ", h->table[i].key);
            for (int j = 0; j < 20; j++)
            {
                if (h->table[i].lista[j] != -1)
                    printf("%d ", h->table[i].lista[j]);
            }
            printf("\n");
        }
    }
}

void InsertFechada(HashFechada *h, int value)
{
    int idx = hash(value, h->M);
    int i = 0;

    if (!h->table[idx].data)
    {
        h->table[idx].data = true;
        h->table[idx].lista[i] = value;
    }
    else
    {
        h->colisoes++;
        do
        {
            i++;
            if (h->table[idx].lista[i] == -1)
            {
                h->table[idx].lista[i] = value;
                break;
            }
        } while (h->table[idx].lista[i] == -1);
    }

    h->table[idx].key = idx;
}

int ReturnColisoesFechada(HashFechada *h)
{
    return h->colisoes;
}
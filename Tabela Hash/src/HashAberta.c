#include "HashAberta.h"

void PreencherVetor(int *vetor)
{
    for (int n = 0; n < 20; n++)
    {
        vetor[n] = rand() % 20;
        printf("[%d] %d\n", n, vetor[n]);
    }
}

void InserirValoresAberta(HashAberta *h, int *vetor)
{
    for (int n = 0; n < 20; n++)
    {
        InsertAberta(h, vetor[n]);
    }
}

void InitializeAberta(HashAberta *h, int M)
{
    h->table = (DataAberta *)malloc(M * sizeof(DataAberta));

    for (int i = 0; i < M; i++)
    {
        h->table[i].key = -1;
        h->table[i].value = 0;
    }

    h->M = M;
    h->colisoes = 0;
}

void ImprimeAberta(HashAberta *h)
{
    printf("HASH ABERTA: \n");
    for (int i = 0; i < h->M; i++)
        if (h->table[i].key != -1)
        {
            printf("KEY:%d - VALUE:%d\n", h->table[i].key, h->table[i].value);
        }
}

void InsertAberta(HashAberta *h, int value)
{
    int idx = hash(value, h->M);
    int aux = idx;
    int aux2;
    int i = 0;

    while (h->table[idx].key != -1)
    {
        idx = hash_2(value, idx, h->M);
        if (i == 0)
            aux2 = idx;
        else
        {
            if (idx == aux2)
            {
                break;
            }
        }

        h->colisoes++;
        if (idx == aux)
        {
            printf("Hash está cheia!\n");
            return;
        }
        i++;
    }

    h->table[idx].key = idx;
    h->table[idx].value = value;
}

int ReturnColisoesAberta(HashAberta *h)
{
    return h->colisoes;
}
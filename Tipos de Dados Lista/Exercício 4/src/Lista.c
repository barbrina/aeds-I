#include "Lista.h"



void FLVazia(Lista *l)
{
    Dados aux;
    for (int i = 0; i < MAXTAM; i++)
    {
        aux.num = 0;
        l->vet[i] = aux;
    }
    l->primeiro = 0;
    l->ultimo = 0;
}

void Insere_lista(Lista *l, Dados dado)
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

void Percorre_lista(Lista *l) // Percorre a lista somando os números
{
    int inicio, fim;
    int maior;
    int finalaux = 0;
    int final[2];

    for (int i = l->primeiro; i < l->ultimo; i++)
    {
        int soma = 0;
        int aux = soma;
        for (int j = i; j < l->ultimo; j++)
        {
            soma += l->vet[j].num;
            if (soma >= aux)
            {
                aux = soma;
                inicio = i;
                fim = j;
                maior = soma;
            }
            else
                maior = aux;
        }
        if (maior >= finalaux)
        {
            finalaux = maior;
            final[0] = inicio;
            final[1] = fim;
        }
        else
        {
            maior = finalaux;
        }
    }
    Imprime(l, final[0], final[1]);
    printf("A máxima soma é %d\n", finalaux);
}

void Imprime(Lista *l, int inicio, int fim)
{
    printf("\nValores:\n");

    for (int i = l->primeiro; i < l->ultimo; i++)
    {
        if (i >= inicio && i <= fim)
        {
            Vermelho();
            printf("%d ", l->vet[i].num);
            Reset();
        }
        else
        {
            printf("%d ", l->vet[i].num);
        }
    }
    printf("\n");
}

void Vermelho()
{
    printf("\033[0;31m");
}

void Reset()
{
    printf("\033[0m");
}
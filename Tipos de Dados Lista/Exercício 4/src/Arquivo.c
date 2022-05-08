#include "Arquivo.h"

void Abre_arq(Lista *l)
{
    FILE *arq;
    int numero;
    int result;

    // Abre um arquivo texto para Leitura

    arq = fopen("Lista.txt", "rt");

    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    int i = 0;
    while (!feof(arq))
    {
        result = fscanf(arq, "%d", &numero);
        if (result)
        {
            Dados aux;
            aux.num = numero;
            Insere_lista(l, aux);
        }
        i++;
    }
}
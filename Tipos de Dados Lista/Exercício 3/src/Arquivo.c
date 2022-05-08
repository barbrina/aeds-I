#include "Arquivo.h"

void Abre_arq(Lista *l, char *arquivo)
{
    FILE *arq;
    char DNA[3];
    char *result;

    // Abre um arquivo texto para Leitura

    arq = fopen(arquivo, "rt");

    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    int i = 0;
    while (!feof(arq))
    {
        result = fgets(DNA, 4, arq);
        if (result)
        {
            Dados aux;
            aux.dna = (char *)malloc(sizeof(DNA));
            strcpy(aux.dna, DNA);
            insere_lista(l, aux);
        }
        i++;
    }

    fclose(arq);
}
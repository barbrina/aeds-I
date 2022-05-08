#include "Arquivo.h"

void Abre_arq(Lista *l)
{
    FILE *arq;
    char Nome[30];
    char *result;

    // Abre um arquivo texto para Leitura

    arq = fopen("Nomes.txt", "rt");

    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    int i = 0;
    while (!feof(arq))
    {
        result = fgets(Nome, 30, arq);
        if (result)
        {
            Dados aux;
            aux.nome = (char *)malloc(sizeof(Nome));
            aux.visivel = true;
            strcpy(aux.nome, Nome);
            insere_lista(l, aux);
        }
        i++;
    }

    fclose(arq);
}
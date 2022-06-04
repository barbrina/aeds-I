#include "Arquivo.h"

void Abre_arq(Fila *f, Pilha *p,Data matriz[MAXTAM][MAXTAM])
{
    FILE *arq;
    char valor[4];
    char *result;

    // Abre um arquivo texto para Leitura

    arq = fopen("Matriz.txt", "rt");

    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    int i = 0;
    int linha = 0, coluna = 0;

    while (!feof(arq))
    {
        result = fgets(valor, 5, arq);
        if (valor[strlen(valor) - 1] == '\n') // Remove a nova linha
        {
            valor[strlen(valor) - 1] = '\0';
        }
        if (result)
        {
            if (i == 0)
            {
                linha = valor[0] - '0'; // Transforma em inteiro
                coluna = valor[2] - '0';
                CriarMatriz(linha, coluna,matriz);
            }
            else
            {
                int lin = valor[0] - '0'; // Transforma em inteiro
                int col = valor[2] - '0';
                PreencherMatriz(lin, col,matriz);
            }
        }
        i++;
    }

    ImprimirMatriz(linha, coluna,matriz);

    int metodo, a;
    bool chave = false;
    printf("Qual o método de busca desejado?\n1-BFS\n2-DFS\nR: ");
    scanf("%d", &metodo);
    if (metodo == 1)
    {
        printf("Você gostaria de utilizar o A*?\n1-Sim\n2-Não\nR: ");
        scanf("%d", &a);
        if (a == 1)
        {
            chave = true;
            PercorreBFS(linha, coluna, chave, f,matriz);
        }
        else
        {
            PercorreBFS(linha, coluna, chave, f,matriz);
        }
    }
    else
    {
        PercorreDFS(linha, coluna, p,matriz);
    }

    printf("\nImprimindo a matriz depois de percorrida:\n\n");
    ImprimirMatriz(linha, coluna,matriz);

    fclose(arq);
}
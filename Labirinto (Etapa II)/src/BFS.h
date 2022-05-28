#ifndef BFS_H
#define BFS_H
#include "Fila.h"
#include "Matriz.h"

#define MAXTAM 7

void PercorreBFS(int linha, int coluna, bool chave);
void EnfileiraPosicao(ItemF aux, int linha, int coluna, bool chave, int tam, int heur);
void DesenfileiraPosicao(ItemF *aux, int linha, int coluna,int heur);

#endif
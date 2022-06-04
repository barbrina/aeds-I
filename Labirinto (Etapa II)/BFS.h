#ifndef BFS_H
#define BFS_H
#include "Fila.h"
#include "Matriz.h"

#define MAXTAM 7

void PercorreBFS(int linha, int coluna, bool chave, Fila *f);
void EnfileiraPosicao(ItemF aux, int linha, int coluna, bool chave, int tam, int heur, Fila *f);
void DesenfileiraPosicao(ItemF *aux, int linha, int coluna, Fila *f);

#endif
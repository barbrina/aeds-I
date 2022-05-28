#ifndef DFS_H
#define DFS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Pilha.h"
#include "Matriz.h"

#define MAXTAM 7

void PercorreDFS(int linha, int coluna);
void EmpilhaPosicao(ItemP aux, int linha, int coluna);
void DesempilhaPosicao(ItemP *aux, int linha, int coluna);

#endif

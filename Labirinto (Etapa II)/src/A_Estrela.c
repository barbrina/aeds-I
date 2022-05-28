#include "A_Estrela.h"

float Manhattan(int x, int y, int tam)
{
    return (abs(x - tam) + abs(y - tam));
}

float Euclidian(int x, int y, int tam)
{
    return (sqrt(pow(x - tam, 2) + pow(y - tam, 2)));
}

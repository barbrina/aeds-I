#include "Lista.h"
#include "Arquivo.h"

int main()
{
    Lista *l = malloc(sizeof(Lista));

    FLVazia(l);
    Abre_arq(l);
    Imprime(l, -1, -1);
    Percorre_lista(l);

    return 0;
}
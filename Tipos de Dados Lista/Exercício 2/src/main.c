#include "Lista.h"
#include "Arquivo.h"

int main()
{
    Lista *l = malloc(sizeof(Lista));

    FLVazia(l);
    Abre_arq(l);
    Imprime(l);
    pesquisa_lista(l);
    Imprime(l);

    return 0;
}
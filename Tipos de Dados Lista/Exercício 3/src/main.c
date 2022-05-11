#include "Lista.h"
#include "Arquivo.h"

int main()
{
    Lista *l = malloc(sizeof(Lista));
    Lista *n = malloc(sizeof(Lista));

    FLVazia(l);
    FLVazia(n);

    Abre_arq(l, "DNA.txt");
    Abre_arq(n, "substring.txt");

    printf("Cadeia de DNA:\n");
    Imprime(l, -1, -1);
    printf("\nSubstring de DNA:\n");
    Imprime(n, -1, -1);

    printf("\nMaior cadeia relacionada a substring:\n");
    percorre_lista(l, n);

    return 0;
}
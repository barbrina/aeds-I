#include "lib.h"

int main()
{
    srand(time(NULL));

    int n;

    printf("Digite o valor N da matriz: ");
    scanf("%d", &n);

    matriz[n][n] = Preencher(n);
    Imprimir(n);
    checarMapa(n);
}
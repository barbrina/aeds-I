#include "HashAberta.h"
#include "HashFechada.h"
#include <time.h>

int main()
{

    srand(time(NULL));

    HashAberta ha;
    HashFechada hf;
    int M = 41;

    int vetor[20];

    InitializeAberta(&ha, M);
    InitializeFechada(&hf, M);
    PreencherVetor(vetor);

    InserirValoresAberta(&ha, vetor);
    InserirValoresFechada(&hf, vetor);

    printf("\n");
    printf("O número de colisões para a hash aberta dupla é: %d\n", ReturnColisoesAberta(&ha));
    printf("O número de colisões para a hash fechada é: %d\n", ReturnColisoesFechada(&hf));

    /*printf("\n");
    ImprimeAberta(&ha);
    printf("\n");
    ImprimeFechada(&hf);*/

    return 0;
}
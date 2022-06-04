#include "Arquivo.h"

int main()
{
	Fila f;
	Pilha p;
	Data matriz[MAXTAM][MAXTAM];


	FPVazia(&p);
	FFVazia(&f);
	Abre_arq(&f, &p,matriz);

	return 0;
}

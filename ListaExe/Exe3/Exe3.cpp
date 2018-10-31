// Exe3.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{

	int dias, anos, meses, entrada;

	printf("Digite o numero de dias: ");
		scanf_s("%i", &entrada);

		anos = entrada / 365;
		meses = (entrada - (anos * 365)) / 30;
		dias = entrada - ((anos * 365) + (meses * 30));

		printf("Resultado em anos: %i \n", anos);
		printf("Resultado em meses %i \n ", meses);
		printf("Resultado em dias: %i", dias);




	system("pause");
    return 0;
}


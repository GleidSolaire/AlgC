// Ex15.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
#include <iostream>


int main()
{
	int r, base, exp;
	printf("POTENCIACAO \n");
	printf("Digite a base:  ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &exp);

	if (base > 0) {
		r = pow(base, exp);
		printf("Resultado:  %d \n", r);
	}
	else {
		printf("Invalida operacao: ");
	}

	system("pause");
    
}


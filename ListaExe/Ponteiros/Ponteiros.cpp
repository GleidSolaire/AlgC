// Ponteiros.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int *x, valor, y;
	valor = 35;
	x = valor;
	y = *x;
	valor = 36;

	printf("Endereco do variavel  comum valor: %p \n", &valor);
	printf("Endereco do variavel  comum valor: %d \n", valor);
	printf("Lendo o conteudo do ponteiro x: %p \n", x);
	printf("Endereco da varivael ponteiro x: %p \n", &x);
	printf("Conteudo da variavel apontada por x: %d \n", *x);
	printf("Conteudo da variavel comum y: %d \n", y);
	printf("Conteudo da variavel comum y: %p \n", &y);


	system("pause");




    return 0;
}


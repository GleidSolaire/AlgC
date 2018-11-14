// TrocadePonteiros.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>


void troca(float *a, float *b) {

	int  c,d ,aux;
	aux = *a;
	*a = *b;
	*b = aux;

	printf("Os valores das trocas da variaveis eh de A:  %f    de B:   %f", *a, *b);




}








int main()
{
   

	float b, d;

	printf("Digite primeiro numero:  \n");
	scanf_s("%f", &b);
	printf("Digite segundo numero:  \n");
	scanf_s("%f", &d);

	troca(&b,&d);


	system("pause");
}


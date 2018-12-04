// Exe34.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include<stdio.h>	
#include<stdlib.h>

int main()
{

	int num;
	int maior;
	int menor;

	for (int i = 0; i < 50; i++)
	{
		printf("Digite numero %d \n", i + 1);
		scanf("%d", &num);

		if (i = 0) {

			maior = num;
			menor = num;

		}



		if (num > maior) {

			maior = num;

		}

		if (num < menor) {
			menor = num;
		}



}

	printf("O maior numero digitado foi:  %d\n", maior);
	printf("O menor numero digitado foi: %d\n", menor);

	system("pause");


    return 0;
}


// Exe36.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{

	int num;


	int i = 0;
	for (i = 1; i <= 20; i++) {

		printf("Digite os numeros para multiplicar:  %d  ", i);
		scanf("%d", &num);


		for (int x = 0; x<num; x++) {

			printf("\n%i x %i = %i", x + 1, num, (x + 1)*num);
		}

		printf("\n");
	





		


	}


	system("pause");










    return 0;
}


// Loops_2510.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{

	/*int a = 0;
	while (a<5)
	{
		printf("%i \t", a);
		a++;
	}
*/



	int n[5];
	int e=0;

	while (e < 5) {

		printf("Digite 5 numeros inteiros---- numero:  ");
		scanf_s("%i", &n[e]);
		e++;


	}

	if ((n[4] > n[3]) && (n[4] > n[2]) && (n[1] > n[0])) {

		printf("Ordem crescente");

	}


	system("pause");
    return 0;
}


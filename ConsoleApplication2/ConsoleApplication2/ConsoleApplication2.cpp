// ConsoleApplication2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include<iostream>


int a;
double b;
float c;

int main()

{

	char d;
	bool e;



	printf("Hello World");
	printf("\n");
	// \t serve para tabular o codigo
	printf("Teste \t \ A \t \n");

	printf("A \tB \t C \n");
	printf("A \tB \t C \n");
	printf("A \tB \t C \n");

	printf("Mostrando Valor %i \n", 5);
	printf("A soma de %i e %i  eh: %i \n", 99, 10, 99 + 10);
	printf("Mostrando %.2f, que is real \n", 4.3);

	printf("%i \n"); // Variable with adress memory, its error

	int f;
	f = 8;
	int a;
	a = f * 2;

		printf("O resultado da multiplicacao de %i por 2 e: %i \n", f, a);

		scanf_s("%i", &a);
		printf("\n O valor digitado  foi: %i \n",a )





	system("Pause");


    return 0;
}


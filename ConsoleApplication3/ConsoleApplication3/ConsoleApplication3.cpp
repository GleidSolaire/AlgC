// ConsoleApplication3.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include<iostream>





void HelloWorld()
{
	printf("Hello World \n");
}




int Somar2valores(int x, int y) {

	int c;
	c = x + y;
	return c; 



}

int SomaInteiros() {

	int n1, n2;

	printf(" \n Digite primeiro valor \n");
	int numero;
	scanf_s("%i", &numero);
	return numero;

}


int main()
{


	HelloWorld();
	
	
	int a= Somar2valores(55, 44); 


	int b = 10;
	int c = 15;
	int d = Somar2valores(b, c);
		printf("Resultado da soma: %i \n", d)


		   int n1 = SomaInteiros();
		   int n2 = SomaInteiros();
		   int result = Somar2valores(n1, n2);
		   printf("Resultado da soma: %i \n", result);

	
	system("pause");


    return 0;
}


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


int main()
{


	HelloWorld();
	

	int a= Somar2valores(55, 44); 
	printf("RESULTADO DA SOMA: %i \n ", a);
	
	system("pause");


    return 0;
}


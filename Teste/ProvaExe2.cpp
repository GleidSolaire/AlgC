// ProvaExe2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>

int main()
{

	int num;
	
	int a = 0;
	int b = 1;
	int c;
	
	printf("Digite quantos termos deseja mostrar:  \n");
	scanf_s("%d", &num);





	for (int i = 0; i < num; i++) {

		c = a + b;
		a = b;
		b = c;

		printf("   %d   ", c);

	
	}





	system("pause");

    return 0;
}


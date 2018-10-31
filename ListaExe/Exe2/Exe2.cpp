// Exe2.cpp : Define o ponto de entrada para a aplicação de console.
#include "stdafx.h"
#include <stdlib.h>
#include <math.h>	
#include <stdio.h>	


int main()

{

	int a, b, c;
	float	r,s,d ;

	a = 5;
	b = 6;
	c = 7;

	r = ((a + b)*(a + b));
	s = ((b + c)*(b + c));

	d = (r + s) / 2;

	printf("Resposta da equacao eh:  %f", d);






	system("pause");
    return 0;
}


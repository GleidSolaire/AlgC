// ListaExe.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>	
#include <stdio.h>	


int main()
{

	float d, xi, xii, yi, yii;

	xi = 10;
	xii = 20;
	yi = 30;
	yii = 35;



	d = sqrt(((xi - xii)*(xi - xii))) + (((yi - yii)*(yi - yii)));
	float res;
	res = sqrt(d);

	printf("Resposta da equação é:  %f", res);



	system("pause");

    return 0;
}


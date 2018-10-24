// CalculoImposto.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include"stdlib.h"


float LerSal() {

	

}







float Imposto1(float sa) {
	
	float va = 0.0;
	
	if (sa <= 1903.98) {
		printf_s("Isento \n");
}

	 if ((sa > 1903.99) && (sa <= 2826.65)) {
			
		va = (va*0.075) - 142.80;

		printf_s(" \n Aliquota 7.5%  Deducao: 142.80 \n   ");
		printf("\n Valor IR: %f ", va);

	}
	else if ((sa > 2826.66) && (sa <= 3751.05)) {

		va = (va*0.15) - 354.80;

		printf_s(" \n Aliquota 15%  Deducao: 354.80 \n   ");
		printf("\n Valor IR: %f ", va);

	}
	else if ((sa > 3751.06) && (sa <= 4664.68)) {


		va = (va*0.225)-636.13;

		printf_s(" \n Aliquota 22.5%  Deducao: 636.13 \n   ");
		printf("\n Valor IR: %f ", va);

	}
	else if (sa > 4664.69) {

		va = (va*0.275) - 869.36;
		printf_s(" \n Aliquota 27.5%  Deducao: 869.36 \n   ");
		printf("\n Valor IR: %f ", va);

	}
	return va;


}





int main()
{
	
	float salario = LerSal();
	Imposto1(salario);


	system("pause");


    return 0;
}


// Exe38.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"


int main()
{

	struct dma {
		int dia;
		int mes;
		int ano;
	};

	struct dma data1, data2;
	int diasD;

	printf("\nInforme a primeira data valida (dia, mes e ano) ");
	printf("\nDia: ");
	scanf_s("%f", &data1.dia);
	printf("\nMês: ");
	scanf_s("%f", &data1.mes);
	printf("\nAno: ");
	scanf_s("%f", &data1.ano);

	printf("\n\nInforme a segunda data valida (dia, mes e ano) ");
	printf("\nDia: ");
	scanf_s("%f", &data2.dia);
	printf("\nMês: ");
	scanf_s("%f", &data2.mes);
	printf("\nAno: ");
	scanf_s("%f", &data2.ano);


	diasD = ((data1.ano - data2.ano) * 365) + ((data1.mes - data2.mes) * 30) + (data1.dia - data2.dia);

	if (diasD < 0) {
		diasD = diasD * (-1);
	}

	printf("\nDecorreram %i dias entre a datas\n\n", diasD);

	system("pause");
	return 0;








    return 0;
}


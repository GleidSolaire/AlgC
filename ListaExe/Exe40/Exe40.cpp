// Exe40.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"


int main()
{

	struct hm {
		int horas;
		int minutos;
	};

	struct hm thm;
	int tm;

	printf("\nInforme tempo em minutos: ");
	scanf_s("%d", &tm);

	thm.horas = tm / 60;
	thm.minutos = tm - (thm.horas * 60);

	printf("\nTempo convertido %ih:%im\n\n", thm.horas, thm.minutos);

	system("pause");
	return 0;


    return 0;
}


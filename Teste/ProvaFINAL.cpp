// ProvaFINAL.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>




	 int main() {

		float h, B, bz, area;


		printf("Digite o valor de B: \n");
		scanf_s("%f", &B);
		printf("Digite o valor de b \n");
		scanf_s("%f", &bz);
		printf("Digite o valor de h  \n");
		scanf_s("%f", &h);




		area = (B + bz)*h / 2;

			printf("Area desse trapezio  %.2f", area);

			system("pause");

			return 0;

	}










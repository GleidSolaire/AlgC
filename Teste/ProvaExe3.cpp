// ProvaExe3.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>

int main()
{



		int matriza[3][3];
		int matrizb[3][3];
		int matrizc[3][3];
		int  i, k,  c, d;

		for (i = 0; i<3; i++) {
			for (k = 0; k<3; k++) {
				printf("Informe os elemetos da matriz A \n : elementos [%d][%d]: ", i + 1, k + 1);
				scanf_s("%d", &matriza[i][k]);

			}
		}
		system("cls");
	

		for (c = 0; c<3; c++) {
			for (d= 0; d<3; d++) {
				printf("Informe os elemetos da matriz B \n : elementos [%d][%d]: ", c + 1, d + 1);
				scanf_s("%d", &matrizb[c][d]);

			}
		}
		system("cls");

	

		printf("\n");

		printf("----MATRIZ PREENCHIDA A---- \n");

		for (i = 0; i<3; i++) {

			for (k = 0; k<3; k++)
			{
				printf("%d", matriza[i][k]);
			}
			printf("\n");
		}
		  
		printf("\n");

		printf("-- MATRIZ PREENCHIDA B  \n");


		for (c = 0; c<3; c++) {

			for (d = 0; d<3; d++)
			{
				printf("%d", matrizb[c][d]);
			}
			printf("\n");
		}


		printf("\n");

		for (i = 0; i<3; i++) {
			for (k=0; k<3; k++) {

				
				matrizc[i][k] = matriza[i][k] + matrizb[i][k];


			}
		}

		printf("\n");
		printf("Soma das matrizes:  \n");

		for (i = 0; i<3; i++) {
			for (k = 0; k<3; k++) {


		
					printf ("%d", matrizc[i][k]);


			}
			printf("\n");
		}




		system("pause");


    return 0;
}


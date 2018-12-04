// Exe35.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

	int maior=0;
	int idade=1;
	char sexo;
	int olhos;
	int cabelo;
	int cn = 0;

	while (idade > 0)
	{
		printf("Digite a idade:  \n");
		scanf("%d", &idade);


		if (idade < 0) {
			break;
		}

		printf("Digite o sexo: f ou m  \n");
		
		getchar();
		
		sexo = getchar();
		printf("Digite a cor dos olhos \n   1- Para Castanhos \n 2- Para Verdes \n 3- para Azuis   \n");
		scanf("%d", &olhos);
		printf("Digite a cor do cabelo: \n  1 Para pretos \n 2 para castanhos \n 3 para louros  \n");
		scanf("%d", &cabelo);



		if (idade > maior) {
			maior = idade;
		}

		if ((idade > 18 && idade <= 37) && ( olhos = 2) && (sexo == 'f') && (cabelo==3)) {

			cn++;

		}




	}

	printf("A maior idade resgistrada foi:   %d \n", maior );
	printf("A quantidade de pessoas com idade entre 18 e 35 que possuem olhos verdes:  %d \n", cn);







	system("pause");




    return 0;
}


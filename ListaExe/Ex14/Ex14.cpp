// Ex14.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include<stdio.h>
#include <stdlib.h>
#include<Windows.h>

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	
	//gotoxy(3, 10);	printf("Terminal de");

	for (int i = 0; i <= 5; i++) {

		printf("x");

		
	}
	printf("\n");
	for (int j = 1; j <= 3; j++) {
		printf("x    x");
		printf("\n");
	}

	for (int k = 0; k <= 5; k++) {

		printf("x");

	}

	printf("\n");

		system("pause");
    return 0;
}


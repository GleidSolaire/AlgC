// CalculadoraSimples.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"

#include <stdlib.h>
#include<iostream>


int soma(int a, int b) {
	int c;

	c = a + b;

	return c;



}

int sub (int a, int b) {
	int d;

	d = a - b;

	return d;



}



int mult (int a, int b) {
	int e;

	e = a * b;

	return e;



}


float divisao(int a, int b) {
	float f;

	f = a / b;

	return f;



}





int main()
{

	int n1, n2;
	printf("Digite primeiro valor  ");
	scanf_s("%i", &n1);
	printf("Digite segundo valor  ");
	scanf_s("%i", &n2); 

	int result1 = soma(n1, n2);
	int result2 = sub(n1, n2);
	int result3 = mult(n1,n2);
	float result4 = divisao(n1, n2);

	printf("Os resultados sao: \n soma : %i \n subtracao: %i \n subtracao: %i \n multiplicacao: %i \n divisao: %f \n", result1,result2,result3, result4);


	system("pause");

    return 0;
}


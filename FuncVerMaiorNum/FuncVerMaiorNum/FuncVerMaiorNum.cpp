// FuncVerMaiorNum.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"

#include <stdlib.h>
#include<iostream>

int MaiorNum(int a, int b, int c, int d) {
	int res;

	if ( (a > b) && (a > c) && (a > d) ) {
		res = a;
		
	}
	else if ((b > a) && (b > c) && (b > d)) {
			res = b;
			
		}

	else if ((c > a) && (c > b) && (c > d)) {
		res = c;
		
	}
	else { 
		res = d;

		
	}
	return res;
}


void MediaNum(int a, int b, int c, int d) {

	int med;
	med = (a + b + c + d) / 4;

	
		if (a > med) {
			printf_s("%i \n", a);
		}
		if (b > med) {
			printf_s("%i \n ", b);
		}
		if (c > med) {
			printf_s("%i \n ", c);
		}

		if (d > med) {
			printf_s("%i \n ", d);
		}



	}








int main()
{

		int n1, n2, n3, n4;
		
		printf_s("Digite 4 numeros inteiros:  \n");
		scanf_s("%i", &n1);
		scanf_s("%i", &n2);
		scanf_s("%i", &n3);
		scanf_s("%i", &n4);
	  int aux =  MaiorNum(n1, n2, n3, n4);
	  MediaNum(n1, n2, n3, n4);
	
	  
	
	printf_s("O maior dos numeros eh: %i \n", aux);
	

    
	system("pause");
	return 0;
}


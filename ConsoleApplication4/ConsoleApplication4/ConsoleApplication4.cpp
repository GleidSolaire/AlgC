#include <stdio.h>
#include "stdafx.h"
#include <stdlib.h>


int main(void)
{
	int contaDigitos = 0, valor;
	scanf_s("%d", &valor);
	if (valor == 0) contaDigitos = 1;
	else
		while (valor != 0)
		{
			contaDigitos = contaDigitos + 1;
			valor = valor / 10;
		}
	printf("%d\n", contaDigitos);
	system("pause");
	return 0;
}

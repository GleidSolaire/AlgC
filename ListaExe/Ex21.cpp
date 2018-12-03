#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


int main () {
	

int soma;
int tam;


printf("Digite o tamanho da sequencia:  ");
scanf("%d", &tam);

int sq[tam];

printf("\n");

for (int i=0;i<tam;i++) 
{
	
printf("Entre com a sequencia de numeros:  \n");
scanf("%d", &sq[i]);

if(sq[i] %2 ==0) {
	
soma=soma+sq[i];
	
	
}

printf("\n");
	
}
	
printf("soma dos numeros pares:  %i", soma);
printf("\n");	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
}

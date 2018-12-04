#include<stdio.h> 

main () 
{
	
int n100,n10,n1,soma;
float troco,vc,vp;


			
	
printf("Digite o valor da compra:  ");
scanf("%f", &vc);
printf("Digite Valor pago pelo cliente:  ");
scanf("%f", &vp);

troco= vp-vc;

n100= troco / 100;
n10 = (troco - (n100 * 100)) / 10;
n1 = troco - (n100 * 100) - (n10 * 10);

soma=n1+n10+n100;



		printf("\nNumero minimo de notas: %i",soma);
		printf("\nValor da Compra R$ %.2f", vc);
		printf("\nValor do troco R$ %.2f", troco);
		printf("\nNumero de notas de R$ 100,00: %i", n100);
		printf("\nNumero de notas de R$ 10,00: %i", n10);
		printf("\nNumero de notas de R$ 1,00: %i\n\n", n1);


	
	
	
	
	
	
	
	
	
}

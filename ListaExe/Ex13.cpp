#include<stdio.h> 

main ( ) {
	
int num, i=0, impar=1;

printf("Digite um numero inteiro natural:  ");
scanf("%d", &num);

printf("Os %d primeiros impares sao:\n", num);
while (i<num) {
	printf(" \n  %d  ", impar);
	impar=impar+2;
	i=i+1;
	
}
}
	
	
	
	


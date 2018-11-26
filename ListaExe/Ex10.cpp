#include<stdio.h> 


main ( ) {
	
int cod;
float soma;
int qtd;
printf("----codigo dos produtos------");
printf("\n");
printf(" 1001 - R$ 5,32\n");
printf(" 1324 - R$ 6,45\n");
printf(" 6548 - R$ 2,37\n");
printf(" 0987 - R$ 5,32\n");
printf(" 7623 - R$ 6,45\n");
printf("\n");
printf("Digite o codigo do produto que deseja comprar: >   ");

scanf("%04d", & cod);	
printf("Digite a quantidade: ");
scanf("%d", &qtd);


if (cod == 1001) {

soma = soma + qtd*5.32;
printf("O total compra R$ %.2f ", soma);	

if (cod == 1324) 
soma = soma + qtd*6.45;
printf("O total compra R$ %.2f ", soma);

if (cod == 6548) 
soma = soma + qtd*2.37;
printf("O total compra R$ %.2f ", soma);	
 
if (cod == 987) 
soma = soma + qtd*5.32;
printf("O total compra R$ %.2f ", soma);

if (cod == 7623) 
soma = soma + qtd*6.45;
printf("O total compra R$ %.2f ", soma);	

else 

printf ("Codigo invalido"); 



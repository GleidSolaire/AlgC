#include<stdio.h> 
#include<stdlib.h>

float media1 (float n1, float n2, float n3) 
   {

float media = (n1+n2+n3) / 3;

return media;



}


float media2 (float n1,float n2, float n3) 
   {

float mediap = ((n1*3) + (n2*3) + (n3*4)) / (3+3+4);

return mediap;



}


float media3 (float n1, float n2, float n3) 
   {

float mediah = (3/((1/n1)+(1/n2)+(1/n3))) ;

return mediah;



}


float no1,no2,no3;

main () {
	
	
int op;	
printf("Digite primeira nota:  ");
scanf ("%f", &no1);
system("cls");
printf("Digite segunda nota:  ");
scanf ("%f", &no2);
system("cls");
printf("Digite terceira nota:  ");
scanf ("%f", &no3);
system("cls");
printf("Digite qual tipo de media deseja calcular \n 1 - para media aritmetica \n 2 - para media ponderada \n 3 - para media harmonica   > ");
scanf("%d", & op);


if(op !=1 && op !=2 && op!=3) 
printf(" \n operacao invalida");

switch (op)  {

case 1: 
	float calculo = media1(no1,  no2,  no3);
	printf("Resultado da media aritmetica:  [%.2f]  ", calculo);
	break;
	

	            	

	
}	
	switch (op)  {

case 2: 
	float calculo = media2(no1,  no2,  no3);
	printf("Resultado da media ponderada:  [%.2f]  ", calculo);
	break;
	

	            	

	
}

	switch (op)  {

case 3: 
	float calculo = media3(no1,  no2,  no3);
	printf("Resultado da media harmonica:  [%.2f]  ", calculo);
	break;
	

	            	
	
}
	
}

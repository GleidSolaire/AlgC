#include<stdio.h>


main () {
	
int idade;

printf("Digite a idade do cliente:  ");
scanf("%d", &idade );

if (idade < 5) 
	printf("Nao existe inscricoes de categoria para esse cliente");


else if (idade >=5 && idade <= 7 ) 
	printf("categoria INFANTIL A");


 else if (idade > 7  && idade <= 10) 
  
	printf("categoria INFANTIL B");



 else  if (idade > 10 && idade <= 13 ) 
	printf("categoria JUVENIL A");


 
 else if (idade > 13 && idade <=17) 

	printf("categoria JUVENIL B");

else if (idade > 18) 
printf("categoria ADULTO");





	
	
	
	
	
	
	
	
}

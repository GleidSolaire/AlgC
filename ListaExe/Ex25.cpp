#include<stdio.h>


main () {
	
int sal; int sf;


printf("Digite o salario bruto:  ");
scanf("%d", &sal);

int descont= (sal *0.10) ; 

sal= sal-descont;
	
printf("Salario com Desconto da Previdencia: %d \n",sal );


int descont2 = (sal*0.05);

sf=sal-descont2;

printf("Salario liquido final com desconto de imposto:  %d \n", sf);	
	
	
	
	
	
	
	
	
	
}

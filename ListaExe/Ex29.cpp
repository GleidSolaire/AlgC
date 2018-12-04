#include<stdio.h> 

main () {
	
int lada,ladb,ladc;
int verificaprop;

printf("Digite o valor da lado A:  \n");
scanf("%d", &lada);
printf("Digite o valor da lado B:  \n");
scanf("%d", &ladb);
printf("Digite o valor da lado C:  \n");
scanf("%d", &ladc);	

	

if ( lada < ladb+ladc &&  ladb< ladc+lada && ladc< lada+ladb ) { 
	
	printf(" Essas medidas Confere um triangulo   \n"); 
	
	if (lada == ladb && ladb == ladc && lada==ladc) {
		printf ("Triangulo Equilatero  \n");
		
		
		
		
	}
			if (((lada == ladb) && (ladb != ladc)) || ((ladb == ladc) && (lada != ladc)) || ((lada == ladc) && (ladb != ladc))) {
		
		printf("Triangulo Isoceles \n");
		
	}
	
	if (lada != ladb && ladb != ladc  && lada!= ladc) {
		printf("Triangulo Escaleno  \n");
	}
	
	
	
	
} else {
		printf("\nAs medidas informadas impossibilitam a formacao de um triangulo!\n\n");
	}	
	
	
	
	
	
	
	
	
}

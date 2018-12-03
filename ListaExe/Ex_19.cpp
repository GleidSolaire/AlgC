#include<stdio.h>
#include<stdlib.h>


main () {

int matriz[3][3];	
int l,c,i,k,m;

for ( i=0; i<3;i++) {
   for ( k=0;k<3;k++)  {
   	printf("Informe os elemetos da matriz \n : elementos [%d][%d]: ",i+1,k+1 );
   	scanf("%d", &matriz[i][k]);
	
}
}
system("cls");
int op;

printf("Digite uma opcao \n \n 1- >para multiplicar COLUNAS <   2- >para multiplicar LINHAS<  : ");
scanf("%d", &op);

printf("\n");

printf("----MATRIZ PREENCHIDA---- \n");

for ( i=0; i<3; i++ ) {

    for ( k=0; k<3; k++ )
    {
      printf ("%d",matriz[i][k]);
    }
printf("\n");
}


printf("\n");


switch (op) {
	
case 1: {
	printf("\n");
	printf("Informe a COLUNA que deseja multiplicar: "); 
	//
	scanf("%d", &c); 
		printf("Informe o numero pelo qual deseja multipicar: "); 
	scanf("%d", &m);
	
	for (i=0; i<3; i++) {
		  
	            matriz[i][c-1]= m* matriz[i][c-1]; 
	          int ver;
	          ver=c;
	          printf("%d",c);
	       
            }
   
            printf("A matriz multiplicada:  \n");
	        for (i=0; i<3; i++) {
	            for (k=0; k<3; k++) {
                    printf("%d ", matriz[i][k]);
                 }
                printf("\n");
	        }  
	
	break;
}

case 2: {
	
	printf("\n");
	printf("Informe a LINHA que deseja multiplicar: "); 
	scanf("%d", &c); 
		printf("Informe o numero pelo qual deseja multipicar: "); 
	scanf("%d", &m);
	
	for (k=0; k<3; k++) {
		  
	            matriz[k][c-1] = m* matriz[k][c-1]; 
	          
            }

            printf("A matriz multiplicada:  \n");
	        for (i=0; i<3; i++) {
	            for (k=0; k<3; k++) {
                    printf("%d ", matriz[i][k]);
                 }
                printf("\n");
	        }  
	
	
	break;
}
	
	
default:
printf("Opcao invalida");	
}


	
	
	
	
	
}

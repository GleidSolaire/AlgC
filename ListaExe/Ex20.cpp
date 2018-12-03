#include<stdio.h>
#include<stdlib.h>


main () {

int matriz[3][3];	
int i,k;

for ( i=0; i<3;i++) {
   for ( k=0;k<3;k++)  {
   	printf("Informe os elemetos da matriz \n : elementos [%d][%d]: ",i+1,k+1 );
   	scanf("%d", &matriz[i][k]); 
   	
   	
   	if (matriz[i][k] < 0 ) {
   		
   		matriz[i][k]= matriz [i][k]* -1;
   		
   	
	   }
   }
   printf("\n");
}
	
	printf("Resultado:   \n");
for ( i=0; i<3;i++) {
   for ( k=0;k<3;k++)  {
   	printf("%d ",matriz[i][k] );	
	
	
	
}
printf("\n");

}









}

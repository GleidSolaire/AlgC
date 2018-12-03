#include<stdio.h>
#include<stdlib.h>


main () {

int matriz[3][3];	
int i,k;

for ( i=0; i<3;i++) {
   for ( k=0;k<3;k++)  {
   	printf("Informe os elemetos da matriz \n : elementos [%d][%d]: ",i+1,k+1 );
   	scanf("%d", &matriz[i][k]); 
   }
   
   
}  

printf("\n");
printf("RESULTADO");
printf("\n");
for ( i=0; i<3;i++) {
   for ( k=0;k<3;k++)  {
   
   	printf("%d",matriz[i][k]); 
   }
   
  printf("\n"); 
}  







printf("\n");
printf("MATRIZ TRANSPOSTA"); 
printf("\n");

for ( k=0; k<3;k++) {
   for ( i=0;i<3;i++)  {
   	
   	printf("%d", matriz[i][k]); 
   }
   printf("\n");
   
} 
}

#include<stdio.h>



float somanotas (int n1, int n2,  int n3) {
	
float media;

media = ((n1*2) + (n2*3) + (n3*5)) / (3+2+5)  ;
 return media;
 
 	
	
}






int main () {
	
int n1,n2,n3;
	
printf("Digite prineira nota:  \n");
scanf("%i", & n1  );
printf("Digite segunfa nota:  \n");
scanf("%i", & n2  );
printf("Digite terceira nota:  \n");
scanf("%i", & n3 );


float ax = somanotas(n1,n2,n3);


printf("A Media:    %f ", ax);
	
	
	
	
}

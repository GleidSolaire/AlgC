#include<stdio.h> 



float somatotal ( int x) {
	
	float valortotal= x+ (x*0.73);
	
	return valortotal;
	
	
}





main () {
	
printf("Digite o preco de fabrica do carro:  ");
 int fab;
 scanf("%d", &fab);
 
 
 float valor = somatotal (fab);
	
	
printf("O preco total com imposto do carro:   %2f",valor );
}

#include<stdio.h>
#include<windows.h>

main () {
	
	
	
	
int i = 0, n;
	double c;
	printf("Informe um numero natural:  ");
	scanf("%d", &n);
	printf("\n");
	for (i = 0; i < n; i++) {
		c = (c * 10) + (i+1);
		printf("%0.f\n", c);
	}

	for (i = n; i > 1; i--) {
		c = (c - i) / 10;
		printf("%0.f\n", c);
	}
	printf("\n");	

int t=0;
		c = (c * 10) + (t+2);
		printf("%0.f\n", t);
	
	
	
	
	
}

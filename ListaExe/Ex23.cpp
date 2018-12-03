#include<stdio.h> 
#include<windows.h>

main () {
	
int vm,tg;	
float lit;	
	
	
printf("Digite  a velocidade media:   ");
scanf("%d", &vm);
printf("Digite o tempo gasto em horas: ");
scanf("%d",&tg);

float di;
int auz=vm;
int a2=tg;
di= vm*tg;

lit=di/12;

system("cls");
printf("Media de velocidade:  %d \n", auz);
printf("Tempo gasto:  %d \n", a2);
printf("Quantidade de litros gastos:  %f \n", lit);
printf("Distancia percorrida em km  %f \n", di);	
	
	
	
	
	
	
	
	
	
	
}

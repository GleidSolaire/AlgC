#include<stdio.h> 


main () {
	
float salario=970.00,salariot,comissao,bonus=50.00,vv;

int vendas;

//printf("Digite o salario bruto do revendedor:  \n");
//scanf("%f", &salario);
printf("Digite quantos carros foram vendidos por ele:  ");
scanf ("%d", &vendas);
printf("Digite o valor total das vendas realizadas:  ");
scanf("%f", &vv);

salario=salario*2;
bonus=bonus*vendas;
salariot=salario + (vv*0.05) + bonus;

printf("O Salario total desse vendedor:  %.2f",salariot);

	printf("----------------------------------------------------------------");
	
	
	  double salMin, salTotal, comissao1 = 50, quantCarroVendido, valorCarro, valorVenda;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_028\n");
    
    printf("Informe o valor do salario minimo: R$ ");
    scanf("%lf", &salMin);
    printf("Quantos carros este vendedor vendeu? ");
    scanf("%lf", &quantCarroVendido);
    printf("Qual o valor de venda do carro? ");
    scanf("%lf", &valorCarro);
    
    valorVenda = quantCarroVendido * valorCarro;
    salTotal = (salMin * 2) + (comissao1 * quantCarroVendido) + (valorVenda * 0.05);
    
    printf("\nO salario total do vendedor sera de: R$ %.2lf", salTotal);
    printf("\n----------------------------------------------------\n\n\n");
	
	
	
	
	
}

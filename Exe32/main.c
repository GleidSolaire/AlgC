/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: glsiqueira
 *
 * Created on 4 de Dezembro de 2018, 10:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int
main (int argc, char** argv)
{
  
  float mediasa,maiorsa;
  
  float sal;
  int filhos;
  int a,mediafi;
  
  
   int per;
      int s;
  
  while (sal >= 0 ) {
      
      printf("     Para finalizar digite um valor negativo  \n");
      
      printf("Digite o salario:  \n");
      scanf("%f", &sal);
      printf("Digite quantidade de filhos: \n");
      scanf("%d", &filhos);
      
      
      
      a=a+1;
      
      maiorsa=0;
      
      if( sal > maiorsa) {
          maiorsa=sal;
         
        }
 
      mediasa= mediasa+sal;
      
 
     mediafi= mediafi+filhos;
      
      
     
      
      if (sal <= 100  ) {
          
          s++;
          per= (s*100)/a;
          
          
        }
   
      printf("\n");
    }
  
      mediasa=mediasa/a;
      mediafi=mediafi/a;
      
  
  printf("Media do salario: %f  \n", mediasa);
  printf("Media de filhos:  %d  \n", mediafi);
  printf("Maior salario:  %f \n", maiorsa);
  printf("Percentual de pessoas que recebem ate R$100.00:  %d \n", per);
  
  
  
  
  
  
  
  
  
  
  
  

  return (EXIT_SUCCESS);
}


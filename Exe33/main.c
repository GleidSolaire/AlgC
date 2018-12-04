/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: glsiqueira
 *
 * Created on 4 de Dezembro de 2018, 11:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int
main (int argc, char** argv)
{

  float chico=1.55;
  float ze=1.10;
  int cont;
while (ze<chico) {
    
    chico=chico+0.2;
    ze=ze+0.3;
    cont ++;
    
    
  }  
  printf("Precisou de %d anos para ze ser maior que chico \n", cont);
  printf("Altura do ZE: %f", ze);
  printf("Altura do chico: %f", chico);
  
  
  
  return (EXIT_SUCCESS);
}


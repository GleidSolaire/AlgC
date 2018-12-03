/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: glsiqueira
 *
 * Created on 3 de Dezembro de 2018, 11:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int
main (int argc, char** argv)
{
 
  int dias;
  int idade;
  printf("Digite sua idade:  \n");
  scanf("%d", &idade);
  
  dias = (30*12)*idade;
  
  printf("Voce viveu aproximadamente %d dias", dias);
  
  
  
  
  
  
  
  return (EXIT_SUCCESS);
}


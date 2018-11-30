/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: glsiqueira
 *
 * Created on 30 de Novembro de 2018, 08:20
 */

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

/*
 * 
 */
int
main (int argc, char** argv)
{

  char string[30];
  bool contador;
  char c;
  char r;
  
  
  
  printf("Digite uma String:  \n");
  fgets(string,30,stdin);
  
  printf("Digite um caracter para buscar na string: \n");
  scanf("%c", &c);
  
  for(int i=1;i<=30;i++) {
      
      if(string[i]==c) {
          
          contador=true;
           printf("O caracter [%c] esta na posicao: [%i] ",c,i);
        }
     
      
      }
    
  if (contador==false)
        printf("Caracter nao encontrado");

  
  return (EXIT_SUCCESS);
}


#include <iostream>

#include <stdio.h>

int numero;
int contador; 


int main(){

  printf("ingrese un numero entero distinto de 1\n");
  scanf("%i" , &numero);

  for (int i = 2 ; i <= numero ; i++){


    for (int j = 1 ; j <= i ; j++){

      if( i% j == 0){

        contador = contador + 1;

      }
      
  }
   
   if (contador == 2){

     printf("%i\n" , i);
     contador=0;
   }else {
     contador = 0;
   }
 }   
  






  return 0;
}
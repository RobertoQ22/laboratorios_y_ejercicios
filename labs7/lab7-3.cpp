#include <iostream>

#include <stdio.h>

int main(){

  int numero;

  printf("ingrese un numero entero:\n");
  scanf("%d" , &numero );

  for (int i = 1 ; i <= numero ; i++){

    if (numero % i == 0){


      printf("es divisor %d\n" , i);

    }
    
  }





  return 0;
}
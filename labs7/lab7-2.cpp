#include <iostream>

#include <stdio.h>

int numero1;
int numero2;
int multiplicacion=0;


int main(){


  printf("ingrese dos numeros de la forma X,Y:\n");
  scanf("%i , %i" , &numero1 , &numero2);

  for(int  i = 0 ; i < numero1 ; i ++ ){



   multiplicacion = numero2 + multiplicacion;


    
  }
    printf("el producto es: %i \n" , multiplicacion); 





  return 0;
}
#include <iostream>

#include <stdio.h>

int numero1=0;
int numero2=1;
int posicion;
int suma_Fibonacci;

int main(){

  printf("ingrese un numero mayor a 2:\n");
  scanf("%i", &posicion);

  printf("los %i numeros de la sucecion Fibonacci son:\n", posicion);
  printf("0\n");
  printf("1\n");



  for (int i = 3; i <= posicion ; i++){

    suma_Fibonacci = numero1 + numero2;

    printf("%i\n" , suma_Fibonacci);

    numero1=numero2;
    numero2=suma_Fibonacci;




  }








  return 0;
}
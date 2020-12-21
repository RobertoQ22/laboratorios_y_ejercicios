#include <iostream>

#include <stdio.h>

int numero;
int suma;

int main(){

  do {printf("ingrese un(os) numero(s) entero(s)\n");
  scanf("%i", &numero);
  

  suma = numero + suma;
  } while ( numero > 0);

 printf("la suma de los numeros ingresados es : %i" , suma);   








  return 0;
}
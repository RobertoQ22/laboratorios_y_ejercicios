#include <iostream>

//Determinar si un Numero es par o Impar

#include <stdio.h>

int main(){
  int numero;

  printf("ingrese un numero:\n");
  scanf("%d" , &numero);

  if(numero%2 == 0){
    printf("es par %d\n" , numero);
  } else {
    printf("es impar %d\n" , numero);

  }

  return 0;
}
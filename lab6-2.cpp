#include <iostream>

//mayor de tres numeros

#include <stdio.h>

int main(){

  int numero1;
  int numero2;
  int numero3;

  printf("ingrese el primer numero:\n");
  scanf("%d" , &numero1);
  printf("ingrese el segundo numero:\n");
  scanf("%d" , &numero2);
  printf("ingrese el tercer numero:\n");
  scanf("%d", &numero3);

  if(numero1 > numero2 && numero1 > numero3){
    printf("el numero mayor es :%d\n" , numero1 );
  } else if(numero2 > numero1 && numero2 > numero3){
    printf("el numero mayor es :%d\n" , numero2);
  } else if(numero3 > numero1 && numero3 > numero2){
    printf("el numero mayor es :%d\n" , numero3);
  } else{
    printf("los numeros son iguales \n");
  }


  return 0;
}
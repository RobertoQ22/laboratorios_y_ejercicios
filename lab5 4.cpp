#include <iostream>

#include <stdio.h> 

float radio;
float perimetro;
float area;

int main(){
  //datos del circulo
  printf("calculadora del area y perimetro de un circulo\n");
  printf("ingresar el radio");
  scanf("%f" , &radio);
  
  //calculo del radio
  area = 3.14 * radio * radio;
  perimetro = 2 * 3.14 * radio;

  printf("el perimetro del circulo es %f y el area del circulo es %f",perimetro , area);




  return 0;
}
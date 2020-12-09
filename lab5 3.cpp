
#include <stdio.h>

float numero1;
float numero2;
float multiplicacion;

int main(){
  printf("multiplicacion de dos numero float\n");
  printf("ingresar los numeros de la forma : X.X , Y.Y");
  printf(" ingrese los numeros: \n");
  scanf("%f , %f" , &numero1, &numero2);
  
  multiplicacion = numero1 * numero2;

  printf("el produco entre los numeros es: %f", multiplicacion);


  return 0;
}
  
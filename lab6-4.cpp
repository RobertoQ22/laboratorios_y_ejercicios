#include <iostream>

#include <stdio.h>

int main(){
  int precio;
  int puntos;
  int codigo;
  int pagar;
  int continuar;
  
  
  printf("ingrese los puntos acumulados:\n");
  scanf("%d", &puntos);
  printf("ingrese el codigo del producto que desea:\n");
  scanf("%d", &codigo);
  printf("ingrese el precio de el productos:\n");
  scanf("%d", &precio);
  printf("¿desea pagar con los puntos?\n");
  scanf("%d", &pagar);


  if(pagar == 0 ){

    if(100<=codigo && codigo>200){

      if(precio>=10000){

        //suma 1 punto cada $50
        puntos = puntos + precio/50;
      }else{
        //suma 1 punto cada %100
        puntos = puntos + precio/100;
      }
    }
    else {
      if(precio>=10000){
        //suma 1 punto cada $30
        puntos = puntos + precio/30;
      }else{
        //suma 1 punto cada $50
        puntos = puntos + precio/50;
      }
     }
    }
    else{
      if(precio<=10*puntos){
        puntos=puntos - precio/10;
        printf("aprovado\n");
      }else{
      printf("denegado\n");
      }
    }
    printf("continuar , cancelar o terminar?\n");
    printf("continuar=0,cancelar=1 ,terminar=3\n");
    scanf("%d", &continuar);

    if(continuar == 0){
      printf("cancelado\n");
    }else if(continuar == 1){
      printf("cancelado\n");
    }
    printf("usted tiene %d puntos \n", puntos);
  
  
  
  


  return 0;
}

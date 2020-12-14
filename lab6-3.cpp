#include <iostream>

//control de acceso con clave

#include <stdio.h>

int main(){
  
  int contraseña = 20708669;
  int pass;


  printf("ingrese su contraseña:\n");
  scanf("%d" , &contraseña);

  if(contraseña == pass){
    printf("Bienvenido: %d\n" , contraseña);
  }else if(contraseña != pass){
    printf("ingrese de nuevo su contraseña (intentos=2):%d\n", pass);
  }else if(contraseña != pass){
    printf("ingrese de nuevo su contraseña (intentos=1):%d\n", pass);
  }else if(contraseña != pass){
    printf("usuario bloqueado (intentos=0):%d\n", pass);
  }if(contraseña == pass)
    printf("Bienvenido: %d\n" , contraseña);
    




  return 0;
}
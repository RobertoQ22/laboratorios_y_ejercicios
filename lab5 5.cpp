#include <iostream>

#include <stdio.h>

float tarea1;
float tarea2;
float tarea3;
float actitudinal;
float prueba1;
float prueba2; 

int main(){
//notas antiguas
printf("ultima nota del curso\n");
printf("ingresar notas anteriores de forma: tarea1 , tarea2 , tarea3 , actitudinal , prueba1\n");
printf("ingresar las notas: \n");
scanf("%f , %f , %f , %f , %f" , &tarea1, &tarea2, &tarea3, &actitudinal, &prueba1);

//nota necesaria

prueba2 = (4.0-tarea1*0.1-tarea2*0.1-tarea3*0.1-actitudinal*0.1-prueba1*0.25)/0.35;

//resultado
printf("nota requeria para aprobar el curso es: %f",prueba2);


   return 0;
 }


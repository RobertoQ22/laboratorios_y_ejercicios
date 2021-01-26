#include<stdio.h>
#include"libreriaCat.h"


void jugador1Ingreso(){
        printf("Jugador 1\n\n");
        
}
void imprimirTablero(char tablero[3][3]){ 
        printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++){ 
            for(int j = 0 ; j < 3 ; j++){ 
                printf("%c ", tablero[i][j]);
                }
            printf("");
        }
        printf("");
}

void ganador1(){
printf("Jugador 1 es el ganador");
}

void ganador2(){
printf("Jugador 2 es el ganador \n\n");
}
     
int revisar1(char tablero[3][3]){
    int g = 1;

 if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         
         if(tablero[0][0]=='-'){
            g=1;
         }
        else{
             ganador1();
            g=2;
        }
     }
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         if(tablero[1][0]=='-'){
          g=1;   
         }
        else{   
            ganador1();
           g=2;
        }
        }
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[2][0]=='-'){
            g=1; 
         }
        else{
           ganador1();
           g=2; 
        }
     }
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         if(tablero[0][0]=='-'){
            g=1;   
         }
        else{  
            ganador1();
            g=2;
        }
     }
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         if(tablero[0][1]=='-'){
                g=1;
         }    
        else{
            ganador1();
           g=2;
        }
      }
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         if(tablero[0][2]=='-'){
         g=1;
         }
        else{
            ganador1();
            g=2;
        }
     }  
     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         if(tablero[0][0]=='-'){
           g=1;    
         }
        else{
            ganador1();
            g=2;
        }
     }
     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         if(tablero[0][2]=='-'){
             g=1;
         }
        else{
            ganador1();
            g=2;
        }
       }
 if(g==1){
     return 0;
 }else{
     return 1;
     }  
}    
int revisar2(char tablero[3][3]){
 int g = 1;
 if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         if(tablero[0][0]=='-'){
            g=1;
         }
        else{
            ganador2();
            g=2;
        }
     }
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         if(tablero[1][0]=='-'){
          g=1;   
         }
        else{
            ganador2();
           g=2;
        }
        }
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         if(tablero[2][0]=='-'){
            g=1; 
         }
        else{
            ganador2();
           g=2; 
        }
     }
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
            g=1;   
         }
        else{
            ganador2();
            g=2;
        }
     }
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         if(tablero[0][1]=='-'){
                g=1;
         }
        else{
            ganador2();
           g=2;
        }
      }
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){
         g=1;
         }
        else{
            ganador2();
            g=2;
        }
     }  
     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         if(tablero[0][0]=='-'){
           g=1;    
         }
        else{
            ganador2();
            g=2;
        }
     }
     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         if(tablero[0][2]=='-'){
             g=1;
         }
        else{
            ganador2();
            g=2;
        }
       }
 if(g==1){
     return 0;
 }else{
     return 1;
     }   
}    
int PedirFila(int fila){
printf("Ingresar Cordenadas de Fila\n");
scanf("%d",&fila);
return fila;
}
int PedirColumna(int columna){
int c;
printf("Ingresar Cordenadas de Columna\n");
scanf("%d",&columna);
return columna;
}
void jugada1(char tablero[3][3],int* contador,int* fila,int* columna){
 while(1){
            printf("Jugador 1\n\n");
            (*fila)=PedirFila(*fila);
            (*columna)=PedirColumna(*columna);
             if(tablero[*fila][*columna]=='-'){
                tablero[*fila][*columna]='x'; 
                (*contador)++;
             break;
            }
             else{
            printf("La posicion ya esta ocupada elegir otra posicion\n");  
            }
       }
}
void jugada2(char tablero[3][3],int* contador,int* fila,int* columna){
    while(1){
            printf("Jugador 2\n\n");
            (*fila)=PedirFila(*fila);
            (*columna)=PedirColumna(*columna);
             if(tablero[*fila][*columna]=='-'){
                tablero[*fila][*columna]='o'; 
                (*contador)++;
             break;
            }
             else{
            printf("La posicion ya esta ocupada elegir otra posicion\n");  
            }
       }
}
void cierre(){
 int c;
 printf("\n\n---Fin del programa---\n");
 printf("\n\nPara cerrar, incertar algo y enter\n");
 scanf("%c",&c);

}
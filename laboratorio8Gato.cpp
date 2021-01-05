#include<stdio.h>

char tablero[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

int fila;
int columna;
int g=1;
int contador=0;

int main(){

  printf(" %c | %c | %c\n" , tablero[0][0], tablero[0][1], tablero[0][2]);
  printf("------------\n");
  printf(" %c | %c | %c\n" , tablero[1][0], tablero[1][1], tablero[1][2]);
  printf("------------\n");
  printf(" %c | %c | %c\n" , tablero[2][0], tablero[2][1], tablero[2][2]);  

 while(g<=2){
     if(contador==9){break;
     }
       while(1){
            printf("Jugador 1\n");
            printf("Ingresar Cordenadas de la forma Fila,Columna\n");
            scanf("%d,%d",&fila,&columna);
             if(tablero[fila][columna]=='-'){
                tablero[fila][columna]='x'; 
                contador++;
             break;
            }
             else{
            printf("esta casilla ya esta ocupada \n");  
            }
       }
    printf("\n");
     printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++){ 
            for(int j = 0 ; j < 3 ; j++){
                printf("%c ", tablero[i][j]);
                }
            printf("\n");
        }
    printf("\n");
    if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         if(tablero[0][0]=='-'){    
         }
        else{
            g++;
            printf("ganador:Jugador 1\n");
            break;
        }
     }
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         if(tablero[1][0]=='-'){   
         }
        else{
            g++;
            printf("ganador:Jugador 1\n");
            break;
        }
        }
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         if(tablero[2][0]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 1\n");
            break;
        }
     } 
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         if(tablero[0][0]=='-'){    
         }
        else{
            g++;
            printf("ganador:Jugador 1\n");
            break;
        }
     }
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         if(tablero[0][1]=='-'){   
         }
        else{
            g++;
            printf("ganador:Jugador 1\n");
            break;
        }
      }
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){  
         if(tablero[0][2]=='-'){  
         }
        else{
            g++;
            printf("ganador:Jugador 1\n");
            break;
        }
     }  
     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         if(tablero[0][0]=='-'){    
         } 
        else{
            g++;
            printf("ganador:Jugador 1\n");
            break;
        }
     }
     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         if(tablero[0][2]=='-'){   
         }
        else{
            g++;
            printf("ganador:Jugador 1\n");
            break;
        }
       }
      if(contador==9){break;
     }
     while(1){
            printf("Jugador 2\n");
            printf("Ingresar Cordenadas de la forma Fila,columna \n");
            scanf("%d,%d",&fila,&columna);
         
             if(tablero[fila][columna]=='-'){
                tablero[fila][columna]='o';
                contador++;
             break;
            }
             else{
            printf("esta casilla ya esta ocupada\n");  
            }
       }
    printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){ 
                printf("%c ", tablero[i][j]);
                }
            printf("\n");
        }
        printf("\n");
      if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         if(tablero[0][0]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 2\n");
            break;
        }
     }
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         if(tablero[1][0]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 2\n");
            break;
        }
        }
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         if(tablero[2][0]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 2\n");
            break;
        }
     }
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         if(tablero[0][0]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 2\n");
            break;
        }
     }
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         if(tablero[0][1]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 2\n");
            break;
        }
      }
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         if(tablero[0][2]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 2\n");
            break;
        }
     }  
         if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         if(tablero[0][0]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 2\n");
            break;
        }
     }
     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         if(tablero[0][2]=='-'){
         }
        else{
            g++;
            printf("ganador:Jugador 2\n");
            break;
        }
       }
 }
 if(contador==9){
printf("empate,no quedan casillas disponibles \n");
 }
 return 0;
}
#include <iostream>

#include <stdio.h>

	char tablero[3][3] = {{'-', '-', '-'},
						            {'-', '-', '-'},
						            {'-', '-', '-'}};
						  


void ImprimirTablero(char tablero[3][3]);
int PedirFila(int fila);
int PedirColumna(int columna);
bool Winner ();
void FinalizarPrograma();




int main(){

  int fila;
	int columna;
	bool ganador = false;
	int turnos = 0;

	
	ImprimirTablero(tablero);
  
	while(!ganador){
		do{
			if(turnos%2 == 0){
			printf("Jugador 1 ");
			} else{
				printf("Jugador 2 ");
				}
			
      int fila = PedirFila (fila);
      int columna = PedirColumna (columna); 
			} while(tablero[fila][columna] != '-');
		
	
		if(turnos%2 == 0){
			tablero[fila][columna] = 'X';
			} else{
				tablero[fila][columna] = 'O';
				}
		
    ImprimirTablero (tablero);
		
    
		int ganador =  Winner();
		
		
		turnos++;
		}

    FinalizarPrograma();
	
	
	return 0;
	}
  
 
  
  int PedirFila (int fila){

    int fila1;
    
    printf("ingrese su jugada en la fila: \n");
			scanf("%i", &fila );
      return fila1;
  }
   int PedirColumna (int columna){

     int columna1;
    
    printf("ingrese su jugada en la columna: \n");
			scanf("%i", &columna );
      return columna1;
  }
   
   void ImprimirTablero(char [3][3]) {

     printf(" %c | %c | %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
     
     printf(" %c | %c | %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    
     printf(" %c | %c | %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

     
  
    }
   
  
  bool Winner (){
    if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
			printf("Ganador en la fila 1!\n");
			return true;
			}
		if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
			printf("Ganador en la fila 2!\n");
			return true;
			}
		if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
			printf("Ganador en la fila 3!\n");
			return true;
			}
		if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
			printf("Ganador en la columna 1!\n");
			return true;
			}
		if((tablero[0][1] == tablero[1][1]) && (tablero[1][1] == tablero[2][1]) && (tablero[0][1] != '-')){
			printf("Ganador en la columna 2!\n");
			return true;
			}
		if((tablero[0][2] == tablero[1][2]) && (tablero[1][2] == tablero[2][2]) && (tablero[0][2] != '-')){
			printf("Ganador en la columna 3!\n");
			return true;
			}
		if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
			printf("Ganador en la diagonal 1!\n");
			return true;
			}
		if((tablero[0][2] == tablero[1][1]) && (tablero[1][1] == tablero[2][0]) && (tablero[0][2] != '-')){
			printf("Ganador en la diagonal 2!\n");
			return true;
			}
      return false;
  }

  void FinalizarPrograma(){

  

    printf("el juego a concluido\n");

  
  }

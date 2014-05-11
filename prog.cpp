#include<stdio.h>
#include<stdlib.h>

enum  TipoOpcion {partida, guardadas, cargar, ranking, instrucciones, salir};


int titlulo(){
	system("clear");
	system("figlet ***Hundir_La_Flota***");
}

enum TipoOpcion menu(){
	int opcion;

do{
	titulo();
        printf(" \n\t Menu del Juego:\n"
	         "\t\t1. Nueva Partida  \n"
		 "\t\t2. Partidas Guardadas \n"
                 "\t\t3. Cargar Partida \n"
                 "\t\t4. Ranking \n"
                 "\t\t5. Instrucciones del Juego \n"
               	 "\t\t6. Salir \n"
                 "\n Opcion Elegida: ");
	_fpurge(stdin);
	scanf(" %i", &opcion);
}while(opcion<1 || opcion>salir + 1);
	titulo();
	return (enum TipoOpcion) (opcion - 1);
}


Typedef struct{
	int x;
	int y;
}Coordenadas;

Typedef struct{
	int Portaviones;/*5*/
	int Submarino;/*3*/
	int Acorazado;/*4*/
	int Destructor;/*2*/
}

int main(int argc, char *argv[]){
	int opcion;
	titulo();
do{
	switch(opcion = menu){
		case partida :
			break; 
		case guardadas :       
			break;
		case cargar :
			break;
		case ranking :
			break; 
		case instrucciones :
			break;
}while(opcion != salir);

return EXIT_SUCCESS;
}

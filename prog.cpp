#include<stdio.h>
#include<stdlib.h>



void titlulo(){
    system("clear");
    sytem("figlet ***Hundir_La_Flota***");
}

menu(opcion){
    switch(opcion){
	case 1 :
	    break;
	case 2 :
	    break;
	case 3 :
	    break;
	case 4 :
	    break; 
	case 5 :
	    break;
	case 6 :
	    break;
    }
}
}
}
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
    printf(" \n\t Menu del Juego:\n"
	    "\t\t1. Nueva Partida  \n"
	    "\t\t2. Partidas Guardadas \n"
	    "\t\t3. Cargar Partida \n"
	    "\t\t4. Ranking \n"
	    "\t\t5. Instrucciones del Juego \n"
	    "\t\t6. Salir \n");
    _fpurge(stdin);
    scanf(" %i", &opcion);
    menu(opcion);


    return EXIT_SUCCESS;
}

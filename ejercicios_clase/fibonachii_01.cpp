#include <stdlib.h>
#include <stdio.h>

#define MAX 0x10

void muestra (int lista [MAX]){
     for(int i=0; i<MAX; ++i)
	printf("%i ", lista[i]);
     printf("\n");
	}

void calcula(int fibonacci [MAX]){// Se crea la funcion calcula con una variable llamada fibonacci que vale =MAX//
if(MAX < 1)//si 1 es menor que MAX se devuelve un resutado que en el lugar cero tiene 1//
   return;
fibonacci[0]=1;

if(MAX<2)// Si 2 es menor que MAX  se devuelve una variable que en el lugar 1 cale 1//
  return;
fibonacci[1]=1;

for(int i=2; i<MAX; i++) //Se calcula la serie partiendo de 2 //
  fibonacci[i]= fibonacci[i-1] + fibonacci[i-2];
  }

int main  (int argc, char *argv[]){

	int fibonacci [MAX];// se introduce una variable llamada fibonacci//

	calcula (fibonacci); //se ejecutan las funciones con la variable fibonacci//
	muestra (fibonacci);




	return EXIT_SUCCESS;
	}

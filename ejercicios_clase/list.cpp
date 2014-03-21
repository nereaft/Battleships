
#include <stdlib.h>
#include <stdio.h>

void cantidad_cosas(int numero){
    printf(" Cantidad de cosas de la lista:%i", numero);
}
 
int main(int argc, char *argv[]){
	const char *list[]={
	    "bread",
	    "toast",
	    "bacon"
	};
	cantidad_cosas(3);
	printf("\n");

    for(int nombre=0; nombre<3; nombre++){
	printf(" %s\n", list[nombre]);
    }


	return EXIT_SUCCESS;
    }

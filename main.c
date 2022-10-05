#include "libreria.h"

int main ( int argc ,char *argv[]){

	struct recta rta1;
	struct recta rta2;

	float X1,X2,X3,X4,Y5,Y6,Y7,Y8,m1,m2,pc1,pc2;	//Nombramos los puntos de cada corte los cuales el usuario ingresa por teclado 
	char per;
	
	if (argc != 9){		//cantidad de argumentos

	printf("\nla cantidad de argumentos es incorrecta\n");
	}
	else {
		X1 = atof(argv[1]);
		Y5 = atof(argv[2]);
		X2 = atof(argv[3]);
		Y6 = atof(argv[4]);
		X3 = atof(argv[5]);
		Y7 = atof(argv[6]);
		X4 = atof(argv[7]);
		Y8 = atof(argv[8]);	//Son 8 Argumentos los cuales son los puntos de las rectas 
	
		printf("\nEste programa halla la ecuanción de una recta que pasa por dos puntos introducuidos por un usuario.\n");
	} 
//la declaracion de variables
pide_datos( &rta1, &rta2, X1, X2, X3, X4, Y5, Y6, Y7, Y8);
encontrar_recta(&rta1, &rta2);
imprimir_recta(rta1, rta2);
imprimir_puntos(rta1, rta2);
per=cruce_rectas( rta1, rta2 );

printf("\n\n las rectas son: %d\n\n",per); //Aca en este printf se imprime si son perpendiculares, paralelas o otras.

}

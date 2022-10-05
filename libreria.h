#ifndef LIBREBRIA_H
#define LIBRERIA_H
	
//directorio
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdint.h>



struct punto{             //struct del punto
	 float x,y; 
};
struct recta  { 	  //struct de la recta
  struct punto a ; 
  struct punto b ;
  float m1,m2,pc1, pc2;
};

//se crean las funciones para la recta
void pide_datos(struct recta *rta1, struct recta *rta2, float X1, float X2,float X3, float X4,float Y5, float Y6,float Y7, float Y8);
void encontrar_recta(struct recta *rta1,struct recta *rta2);
void imprimir_puntos (struct recta rta1, struct recta rta2);
void imprimir_recta(struct recta rta1, struct recta rta2);
char cruce_rectas(struct recta rta1,struct recta rta2);

#endif

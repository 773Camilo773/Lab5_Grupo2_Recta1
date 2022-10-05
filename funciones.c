#include "libreria.h"

void pide_datos(struct recta *rta1, struct recta *rta2, float X1, float X2,float X3, float X4,float Y5, float Y6,float Y7, float Y8){

	rta1 -> a.x = X1;	// aqui se asignan los valores para cada recta en la forma struct
	rta1 -> a.y = Y5;
	rta1 -> b.x = X2;
	rta1 -> b.y = Y6;
	rta2 -> a.x = X3;
	rta2 -> a.y = Y7;
	rta2 -> b.x = X4;
	rta2 -> b.y = Y8;
}	 
void encontrar_recta(struct recta *rta1,struct recta *rta2){
  float m1,m2;
  float pc1,pc2;	//se crean las variables m1 y m2 para las pendientes de cada recta y se encuentra su ecuacion respectiva

	rta1 ->m1 = ((rta1 ->b.y)-(rta1 ->a.y))/((rta1 -> b.x)-(rta1-> a.x)); //ecuacion de la pendiente 1 de la recta 1
	rta1 ->pc1 = ((rta1 ->m1))*(-(rta1 ->a.x))+(rta1-> a.y);   	     //ecuacion de la recta 1
	
	rta2 ->m2 = ((rta2 ->b.y)-(rta2 ->a.y))/((rta2 -> b.x)-(rta2 -> a.x));	//ecuacion pendiente recta 2
	rta2 ->pc2 = ((rta2 ->m2))*(-(rta2 ->a.x))+(rta2-> a.y);	       //ecuacion recta 2
	
}
void  imprimir_recta(struct recta rta1, struct recta rta2){
 	printf("\n\nla ecuacion de la recta es: Y=%.2fX +  %.2f \n", rta1.m1 , rta1.pc1); //se imprime de acuerdo a los valores encontrados en la función anterior
  
	printf("\n\nla ecuacion de la recta es: Y=%.2fX +  %.2f \n", rta2.m2 , rta2.pc2); //se imprime de acuerdo a los valores encontrados en la función anterior
  	
}
void imprimir_puntos(struct recta rta1, struct recta rta2){
	printf("\n\nlos puntos de la recta 1 son: (%.2f,%.2f) y (%.2f,%.2f)",rta1.a.x,rta1.a.y,rta1.b.x,rta1.b.y);	
	printf("\n\nlos puntos de la recta 2 son: (%.2f,%.2f) y (%.2f,%.2f)",rta2.a.x,rta2.a.y,rta2.b.x,rta2.b.y);
	//se imprimen los puntos ingresados por el usuario de forma de cada recta en orden 
}
char cruce_rectas(struct recta rta1,struct recta rta2){
  char per;  			//Se definen los valores para encontrar si las rectas se cruzan y si son paralelas, perpendiculaes o otras
  float pc1,pc2,m1,m2,x,y;	//Se crea el punto de corte para las rectas que sean perpendiculares y otras, ya que para paralelas no aplica
  m1 = rta1.m1;
  m2 = rta2.m2;
  pc1 = rta1.pc1;
  pc2 = rta2.pc2;
    
  if (rta1.m1 == rta2.m2){
      per = 0 ; //paralelas
  }
  else if  ((rta1.m1 * rta2.m2) == -1) {
       per = -1; //perpendicular
       x = (pc2-pc1)/(m1-m2);
       y = m1*(pc2-pc1)/(m1-m2)+pc1;
       printf("\n\nEl punto de corte entre las dos rectas es: [%.2f, %.2f]",x,y);       
  }
  else {
        per = 1; //otherwise
	x = (pc2-pc1)/(m1-m2);
	y = m1*(pc2-pc1)/(m1-m2)+pc1;
	printf("\n\nEl punto de corte entre las dos rectas es: [%.2f,%.2f]",x,y);
  }
  return per;
}

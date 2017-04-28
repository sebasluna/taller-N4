/*
*NOMBRE:fraccion
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan un numero para devolver su fracion y desplegar el resultado
*/

#include<stdio.h>

void llenarDatos();
float devolverFraccion(float n);

float numero;

int main(){
	llenarDatos();
    devolverFraccion(numero);
	return 0;
}

void llenarDatos(){
	printf("ingrese un numero:");
	scanf("%f",&numero);
}

float devolverFraccion(float n){
	int entero = n;
	float resultado = n - entero;
	printf("\nLa parte fraccionaria del numero es:%f\n ",resultado);
}

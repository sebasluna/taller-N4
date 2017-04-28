/*
*NOMBRE:al_cuadrado
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan un numeros que puede ser entero o flotante el cual es elevado y despliega el resultado
*/

#include<stdio.h>

void llamarDatos();
void al_cuadrado(float num);

float numero;

int main(){
	llamarDatos();
	al_cuadrado(numero);
	return 0;
}

void llamarDatos(){
	printf("Ingrese numero a elevar al cuadrado:");
	scanf("%f",&numero);
}

void al_cuadrado(float num){
	float cuadrado =0;
	cuadrado = numero*numero;
	printf("\nEl cuadrado del numero es:%f\n",cuadrado);
}

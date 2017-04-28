/*
*NOMBRE:suma de vectores
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresa primero la longitud del arreglo luego se ingresan los numeros pedidos
            y el programa debera imprimir la suma de los vectores
*/

#include<stdio.h>

void llenarArreglo();
int sumaVector(int vector[],int);

int vector[100],longitud;

int main(){
	llenarArreglo();
	sumaVector(vector,longitud);
	return 0;
}

void llenarArreglo(){
	printf("Ingrese el numero de arreglos:");
	scanf("%d",&longitud);

	for(int i=0;i<longitud;i++){
		printf("Ingrese un Numero:");
		scanf("%d",&vector[i]);
	}
}

int sumaVector(int vector[],int longitud){
	int suma=0;
	for(int i=0;i<longitud;i++){
		suma += vector[i];
	}
	printf("\nLa suma es:%d\n",suma);
}

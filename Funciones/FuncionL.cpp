/*
*NOMBRE:inversion
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan primero la longitud del vector luego los numeros y el programa imprimira estos mismos pero con sus signos contrarios
*/

#include<stdio.h>

void pedirDatos();
void cambioSigno(int vector[],int);
void imprimirVector(int vector[],int);


int longitud,vector[100];

int main(){
	pedirDatos();
	cambioSigno(vector,longitud);
	imprimirVector(vector,longitud);
	return 0;
}

void pedirDatos(){
	printf("Ingrese la longitud del vector:");
    scanf("%d",&longitud);
	for(int i=0;i<longitud;i++){
		printf("Ingrese un numero:");
		scanf("%d",& vector[i]);
	}
}

void cambioSigno(int vector[],int longitud){
	for(int i=0;i<longitud;i++){
		vector[i] *= -1;
	}
}

void imprimirVector(int vector[],int longitud){
	printf("\nLos Numeros ingresados con sus signos cambiados son:\n");
	for(int i=0;i<longitud;i++){
		printf("%d\n",vector[i]);
		}
}


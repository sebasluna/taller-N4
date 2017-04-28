/*
*NOMBRE:ordenCreciente
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan primero el numero de vectores luego se ingresan los numeros pedidos
            en el vector y se ve si estan ordenados de forma creciente o no
*/

#include<stdio.h>

void pedirDatos();
void comprobarOrden(int vec[],int);

int vec[100],longitud;

int main(){
	pedirDatos();
	comprobarOrden(vec,longitud);
	return 0;
}

void pedirDatos(){
	printf("ingrese numero de elementos que tendra el vector: ");
	scanf("%d",&longitud);

	for(int i=0;i<longitud;i++){
		printf("ingrese un numero:",i);
		scanf("%d",&vec[i]);
	}
}

void comprobarOrden(int vec[],int longitud){
	char band = 'F';
	int i=0;
	while((band=='F')&&(i<longitud-1)){
		if(vec[i]>vec[i+1]){
			band = 'V';
		}
		i++;
	}

	if(band == 'F'){
		printf("\nEl vector esta ordenado de forma creciente\n");
	}
	else{
		printf("\nEl vector no esta de forma creciente\n");
	}
}


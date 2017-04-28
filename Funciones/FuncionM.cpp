/*
*NOMBRE:Numeros Impares
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresala longitud del vector luego se ingresan los numeros y se devuelven solo los que son impares
*/

#include<stdio.h>

void pedirDatos();
void numerosImpares(int impar[],int);

int longitud,impar[100];

int main(){
	pedirDatos();
	numerosImpares(impar,longitud);
	return 0;
}

void pedirDatos(){
	printf("Ingrese la longitud del vector:");
	scanf("%d",&longitud);

	for(int i=0;i<longitud;i++){
		printf("ingrese un numero:");
		scanf("%d",impar[i]);
	}
}

void numerosImpares(int impar[],int longitud){
	int vecImpares[100];
	int j=0;
	for(int i=0;i<longitud;i++){
		if(impar[i]%2!=0){
			vecImpares[j] = impar[i];
			j++;
		}
	}
	printf("\nLos numeros impares del vector son:\n");
	for(int i=0;i<j;i++){
		printf("%d\n",vecImpares[i]);
	}
}


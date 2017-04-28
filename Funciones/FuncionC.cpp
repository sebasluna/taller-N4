/*
*NOMBRE:funpot()
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan dos numeros uno para elevar y el otro sera el elavador y luego se imprimiran en pantalla
*/

#include<stdio.h>

void llamarDatos();
void funpot(int A,int B);

int numero,exponente;

int main(){
	llamarDatos();
	funpot(numero,exponente);
	return 0;
}

void llamarDatos(){
	printf("Inrese Numero que desea elevar: ");
	scanf("%d",&numero);
	printf("Ingrese el exponente a elevacion: ");
	scanf("%d",&exponente);
}

void funpot(int A,int B){
	long lResultado=1;

	for(int i=1;i<=B;i++){
		lResultado *= A;
	}
	printf("\nEl resultado de la elevacion es:%d\n",lResultado);
}

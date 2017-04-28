/*
*NOMBRE:intercambio
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan dos numeros los cuales se imprimer al reves
*/

#include<stdio.h>

void intercambioValores(int&, int&);

int main(){
	int num1,num2;
	printf("El primer valor almacenado es:");
	scanf("%d",&num1);
	printf("\nEl segundo valor almacenado es:");
	scanf("%d",&num2);

	intercambioValores(num1,num2);

	return 0;
}

void intercambioValores(int& num1, int& num2){
	int numer;
	numer = num1;
	num1 = num2;
	num2 = numer;
	printf("\nAhora el primer valor es:%d\n",num1);
	printf("\nAhora el segundo valor es:%d\n",num2);
}

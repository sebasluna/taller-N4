/*
*NOMBRE:mult()
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan dos numeros los cuales se multiplican y despliega el resultado
*/

#include<stdio.h>

void llamarDatos();
void mult(float A,float B);

float num1,num2;

int main(){
	llamarDatos();
	mult(num1,num2);
	return 0;
}

void llamarDatos(){
	printf("Ingrese dos Numeros:");
	scanf("%f",&num1);
	scanf("%f",&num2);
}

void mult(float A,float B){
	float multiplicacion= A*B;
	printf("\nEl resultado de la multiplicacion es:%f\n",multiplicacion);
}

/*
*NOMBRE:maximo()
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan dos numeros los cuales se multiplican y despliega el resultado
*/

#include<stdio.h>

void maximo(int dato1,int dato2,int dato3);

int dato1,dato2,dato3;

int main(){

    maximo(dato1,dato2,dato3);

	return 0;
}

void maximo(int dato1,int dato2,int dato3){
    printf("Ingrese dato 1: ");
	scanf("%d",&dato1);
	printf("Ingrese dato 2: ");
	scanf("%d",&dato2);
	printf("Ingrese dato 3: ");
	scanf("%d",&dato3);

	printf("El maximo valor es: %d",max);


	T max;

	if((dato1 > dato2) && (dato1 > dato3)){
		max = dato1;
	}
	else{
		 if((dato2>dato1) && (dato2>dato3)){
			max = dato2;
		}
		else{
			max = dato3;
		}
	}
	return max;
}

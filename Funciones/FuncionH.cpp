/*
*NOMBRE:intercambio
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan el tiempo en segundos y luego es devuelto el valor en horas, minutos y segundos respectivamente
*/

#include<stdio.h>

void tiempo(int&,int&,int&,int&);

int main(){
	int totalSeg,horas,min,seg;
	printf("Ingrese la cantidad de segundos:");
	scanf("%d",&totalSeg);

	tiempo(totalSeg,horas,min,seg);
	return 0;
}

void tiempo(int& totalSeg,int& horas,int& min,int& seg){
	horas = totalSeg/3600;
	totalSeg %= 3600;
	min = totalSeg/60;
	seg = totalSeg%60;

	printf("\nEl Tiempo es\n");
    printf("\nEn Horas:%d\n",horas);
	printf("\nEn Minutos:%d\n",min);
	printf("\nEn Segundos:%d\n",seg);
}

/*
*NOMBRE:Fecha
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan los dias trasncurridos apartir de la fecha y luego se devuelve la fecha sumados los dias
*/

#include<stdio.h>

void calc_anios(int,int&,int&,int&);

int main(){
	int totalDias,anio,mes,dia;

	printf("Ingrese el numero de dias transcurridos apartir de la fecha del 1/1/2000:");
	scanf("%d",&totalDias);

	calc_anios(totalDias,anio,mes,dia);
	return 0;
}

void calc_anios(int totalDias,int& anio,int& mes,int& dia){
	anio = totalDias/365;
	totalDias %= 365;
	mes = totalDias/30;
	dia = totalDias%30;
	printf("\nFecha Actual:%d/%d/%d\n",dia+1,mes+1,anio+2000);
}

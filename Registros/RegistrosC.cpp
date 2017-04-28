/*
*NOMBRE:EMPLEADO
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan el numero de empleados, el nombre y el salario par ver quien gana mas y quien menos
*/

#include<stdio.h>

struct Empleado{
	char nombre[20];
	float salario;
}empleado[100];

int main(){
	int n_empleados,mayor=0,menor=999999,Mayor,Menor;
	printf("Ingrese Numero de empleados: ");
	scanf("%d",n_empleados);
	fflush(stdin);
	for(int i=0;i<n_empleados;i++){
		printf("Ingrese Nombre:");
		fgets(empleado[i].nombre,20,stdin);
		printf("Ingrese Salario:");
		scanf("%f",&empleado[i].salario);

		if(empleado[i].salario > mayor){
			mayor = empleado[i].salario;
			Mayor = i;
		}

		if(empleado[i].salario < menor){
			menor  = empleado[i].salario;
			Menor = i;
		}
	}

	printf("\n--Empleado con mayor salario--\n");
	printf("Nombre:%s",empleado[Mayor].nombre);
	printf("Salario:%d",empleado[Mayor].salario);

	printf("\n--Empleado con menor salario--\n ");
	printf("Nombre:%s",empleado[Menor].nombre);
	printf("Salario:%d",empleado[Menor].salario);
	return 0;
}

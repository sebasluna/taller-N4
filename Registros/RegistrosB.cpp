/*
*NOMBRE:ALUMNO
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan los datos del estudiante y luego se devuelve el mejor promedio
*/

#include<stdio.h>

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	int mayor = 0,posterior=0;
	fflush(stdin);
	for(int i=0;i<3;i++){
		printf("Ingrese Nombre:");
		fgets(alumnos[i].nombre,20,stdin);
		printf("\nIngrese Edad:");
		scanf("%d",&alumnos[i].edad);
		printf("\nIngrese Promedio:");
		scanf("%f",&alumnos[i].promedio);

		if(alumnos[i].promedio > mayor){
			mayor = alumnos[i].promedio;
			posterior = i;
		}
	}
	printf("\n--Alumno con el mejor Promedio--\n");
	printf("\nNombre: %s",alumnos[posterior].nombre);
	printf("\nEdad: %d",alumnos[posterior].edad);
	printf("\nPromedio: %2.0f\n",alumnos[posterior].promedio);
	return 0;
}

/*
*NOMBRE:MEJOR_PROMEDIO
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan primero el numero de estudiantes luego los dastos de cada uno con las notas y se muestra el mejor promedio
*/

#include <stdio.h>
#include <stdlib.h>

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[30];
	char sexo;
	int edad;
	struct Promedio prom;
}alumnos[100];

int main(){
	int n_alumnos,promMayor=0;
	float promedio_alumno[100],mayor=0;
	
	printf("Ingrese Numero de alumnos: ");
	scanf("%d",&n_alumnos);
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		printf("\nIngrese Nombre: "); 
		fgets(alumnos[i].nombre,30,stdin);
		printf("\nIngrese m => masculino o f => femenino: ");
		scanf("%c", &alumnos[i].sexo);
		printf("\nIngrese edad: ");
		scanf("%d", &alumnos[i].edad);
	
		printf("---Notas del Examen----");
		printf("\nNota1: "); 
		scanf("%f", &alumnos[i].prom.nota1);
		printf("\nNota2: "); 
		scanf("%f", &alumnos[i].prom.nota2);
		printf("\nNota3: "); 
		scanf("%f", &alumnos[i].prom.nota3);
	
		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
		
		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			promMayor = i;
		}
	}
	printf("---El Alumno con Mejor Promedio es---");
	printf("\nNombre: %s ",alumnos[promMayor].nombre);
	printf("\nSexo: %c ",alumnos[promMayor].sexo);
	printf("\nEdad: %d ",alumnos[promMayor].edad);
	printf("\nPromedio: %0.2f\n",promedio_alumno[promMayor]);
return 0;
}

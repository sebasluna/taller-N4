/*
*NOMBRE:MEJOR_PROMEDIO
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan primero el numero de estudiantes luego los dastos de cada uno con las notas y se muestra el mejor promedio
*/

#include<stdio.h>

struct Persona_discapacidad{
	char nombre[30];
	bool discapacidad;
}personas[30],personasDiscapacitadas[30],personasSinDiscapacidad[30];

int main(){
	int n_personas,j=0,k=0;
	
	printf("Ingrese Numero de personas: ");
	scanf("%d", &n_personas);
	
	for(int i=0;i<n_personas;i++){
		fflush(stdin);
		printf("Ingrese Nombre : ");
		fgets(personas[i].nombre,30,stdin);
		printf("Ingrese 1.Si tiene Discapacidad  o  0.Si no es Discapacitado"); 
		scanf("%d", &personas[i].discapacidad);

		if(personas[i].discapacidad == 1){
			personasDiscapacitadas[j].nombre,personas[i].nombre;
				j++; 
		}
		else{
			personasSinDiscapacidad[k].nombrepersonas[i].nombre);
				k++; 
		}
	}
	
	printf("\nLas Personas con Discapacidad son:\n");
	for(int i=0;i<n_personas;i++){
		printf("%s",personasDiscapacitadas[i].nombre);
	}
	printf("\nLas Personas sin Discapacidad son:\n");
	for(int i=0;i<n_personas;i++){
		printf("%s",personasSinDiscapacidad[i].nombre);
	}
	return 0;
}

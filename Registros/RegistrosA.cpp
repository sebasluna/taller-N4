/*
*NOMBRE:COMPETIDOR
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresan los datos del competidor y luego se imprimen ademas de la categoria a la cual pertenecen
*/

#include<stdio.h>

struct Competidor{
	char nombre[20];
	int edad;
	char sexo;
	char club[20];
}competidor1;

int main(){
	fflush(stdin);
	char categoria[20];
	printf("---Ingrese datos del Participante---");
	printf("\nIngrese Nombre: ");
	fgets(competidor1.nombre,20,stdin);
	printf("\nIngrese Edad: ");
	scanf("%d", &competidor1.edad);
	printf("\nIngrese m => masculino o f => femenino: ");
	scanf("%c", &competidor1.sexo);
	printf("\nIngrese Nombre del Club: ");
	scanf("%s", &competidor1.club,20);

	printf("\n--DATOS DEL PARTICIPANTE--\n");
	printf("\nNombre: %s",competidor1.nombre);
	printf("\nEdad: %d",competidor1.edad);
	printf("\nSexo: %c",competidor1.sexo);
	printf("\nClub: %s",competidor1.club);
	printf("\nCategoria:");
	
	if(competidor1.edad <= 15){
		printf("Infantil");
	}
	else if(competidor1.edad <= 40){
		printf("Joven");
	}
	else{
		printf("Mayor");
	}
	return 0;
}


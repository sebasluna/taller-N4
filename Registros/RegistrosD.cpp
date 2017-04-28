/*
*NOMBRE:ALUMNO
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se abre el menu donde se escoje la opcion de ingresar datos se llena y luego se imprime los datos
*/

#include <stdio.h>
#include <stdlib.h>
#define l 3

struct Promedio{
    float notas[l], promedio_a;
};

struct Alumno{
    char nombre[30];
    char sexo;
    int edad;
    Promedio notas_a;
}alejandro;

void menu();
void pedirDatos(); 
void imprimirDatos(); 

int main(){
    system("color f1");
    menu();
    return 0;
}

void menu(){
    int opcion;
    do{
        printf("%p", &alejandro);
        printf("\n----MENU----\n");
        printf("\n1. Pedir Datos");
        printf("\n2. Imprimir Datos");
        printf("\n0. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
           
            case 1: pedirDatos(); 
                break;
            
            case 2: imprimirDatos(); 
                break;
            case 0: exit(0);
                break;
            default: printf("\nOpcion Invalidad\n");
                break;
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}

void pedirDatos(){ 
    fflush(stdin);
    int i, suma = 0;
    printf("\nIngrese Nombre: ");
    fgets(alejandro.nombre, 30, stdin);
    printf("\nIngrese m => masculino o f => femenino: ");
    scanf("%c", &alejandro.sexo);
    printf("\nIngrese edad: ");
    scanf("%d", &alejandro.edad);
    for(i = 0; i < l; i++){
        printf("Ingrese nota %d: ", i + 1);
        scanf("%f", &alejandro.notas_a.notas[i]);
        suma = suma + alejandro.notas_a.notas[i];
    }
    alejandro.notas_a.promedio_a = suma / l;
}

void imprimirDatos(){ 
    int i;
    printf("\nNombre: %s", alejandro.nombre);
    printf("\nSexo: %c", alejandro.sexo);
    printf("\nedad: %d", alejandro.edad);
    for(i = 0; i < l; i++){
        printf("\nNota %d: %0.2f\n", i + 1, alejandro.notas_a.notas[i]);
    }
    printf("\nPromedio: %0.2f\n", alejandro.notas_a.promedio_a);
}


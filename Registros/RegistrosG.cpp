#include<stdio.h>
#include<stdlib.h>
#define l 3

struct Tiempo{
    int horas, minutos, segundos;
};

struct Almacenamiento{
    float Valor;
    char Unidad[5];
};

struct Music{
    char Artista[30];
    char Titulo[30];
    Tiempo duracion;
    Almacenamiento tamano;
}Mp3[l];

void menu();
void pedirDatos();
void imprimirDatos();
void buscarDatos();

int main(){
    menu();
    return 0;
}

void menu(){
    int opcion;
    do{
        printf("\---MENU---");
        printf("\n1.Ingresar Datos");
        printf("\n2.Mostrar Datos");
        printf("\n3.Buscar Datos");
        printf("\n0.salir");
        printf("\nIngrese Opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:pedirDatos();
                break;
            case 2:imprimirDatos();
                break;
            case 3:buscarDatos();
                break;
            case 0: exit(0);
                break;
            default: printf("\Opcion Invalida");
                break;
        }
        system("pause");
        system("cls");
    }while(opcion!=0);

}

void pedirDatos(){
    int i;
    for(i=0; i<l; i++){
        fflush(stdin);
        printf("\nIngrese Nombre del Artista: ");
        fgets(Mp3[i].Artista,30,stdin);
        printf("\nIngrese Titulo de la Cancion: ");
        fgets(Mp3[i].Titulo,30,stdin);
        printf("\nIngresar Tiempo asi(hh mm ss): ");
        scanf("%d",&Mp3[i].duracion.horas);
        scanf("%d",&Mp3[i].duracion.minutos);
        scanf("%d",&Mp3[i].duracion.segundos);
        printf("\nIngresar tamano sin especificar la unidad:");
        scanf("f",&Mp3[i].tamano.Valor);
        printf("\ningresar unidad teniendo en cuenta:");
        printf("\nIngrese: \nKB ->kilobytes\nMB -> Megabytes\nGB -> Gigabytes\nTB ->Terabytes");
        printf("\ningresar la sigla de la unidad deseada: ");
        fflush(stdin);
        fgets(Mp3[i].tamano.Unidad,5,stdin);
        printf("\nDatos ingresados con exito");
    }
}

void imprimirDatos(){
    int i;
    for(i=0; i<l; i++){
    printf("\nArtista: %s",Mp3[i].Artista);
    printf("\nTitulo: %s",Mp3[i].Titulo);
    printf("\nTiempo: %d: %d: %d:",Mp3[i].duracion.horas,Mp3[i].duracion.minutos,Mp3[i].duracion.segundos);
    printf("\nTamano: %0.2f %s",Mp3[i].tamano.Valor,Mp3[i].tamano.Unidad);
    }
}

void buscarDatos(){


}

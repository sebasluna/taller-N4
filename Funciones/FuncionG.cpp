/*
*NOMBRE:cambio
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:abril/2017
*DESCRIPCION:se ingresa un valor y luego se devuelve el cambio de la misma plataen cien,cincuenta,veinte,diez,cinco y uno
*/

#include<stdio.h>

void cambio(int&,int&,int&,int&,int&,int&,int&);

int main(){
	int valor,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	printf("ingrese valor del dinero a convertir: ");
	scanf("%d",&valor);

	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);

	return 0;
}

void cambio(int& valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien = valor/100;
	valor %= 100;
	cincuenta = valor/50;
	valor %= 50;
	veinte = valor/20;
	valor %= 20;
	diez = valor/10;
	valor %= 10;
	cinco = valor/5;
	uno = valor%5;

    printf("La cantidad de plata a entregar a cambio:\n");
	printf("\nEn Cien:%d\n",cien);
	printf("\nEn Cincuenta:%d\n",cincuenta);
	printf("\nEn Veinte:%d\n",veinte);
	printf("\nEn Diez:%d\n",diez);
    printf("\nEn Cinco:%d\n",cinco);
    printf("\nEn Uno:%d\n",uno);
}


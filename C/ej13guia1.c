#include<stdio.h>
void main(){

int codigoP;
int precio;
int cantidad;
int precioTotal;
int descuento=10;
float descuentoTotal;
int iva=19;
float ivaTotal;
float precioFinal;
//printf("========BIENVENIDO========= \n");
printf("Ingrese el codigo del producto \n");
scanf("%d", &codigoP);
if(codigoP>999999){
	do{
	
	printf("reingrese codigo");
	scanf("%d", &codigoP);
	
}while(codigoP>999999);
}
printf("Ingrese el precio del producto \n");
scanf("%d", &precio);
printf("Ingrese la cantidad de productos \n");
scanf("%d", &cantidad);

precioTotal=(cantidad*precio);
descuentoTotal=precioTotal*descuento/100;
ivaTotal=precioTotal*iva/100;
precioFinal=ivaTotal+precioTotal-descuentoTotal;
 
printf("========los PEQUES========= \n"); 
printf("[ %d ] \t [ %d ] \n", codigoP, precio);
printf("[ %d ] \t [ %d ] \n", cantidad, precioTotal);
printf("[ %d ] \t [ %f ] \n", descuento, descuentoTotal);
printf("[ %d ] \t [ %f ] \n", iva, ivaTotal);
printf("[ TOTAL ] \t [ %f ] \n", precioFinal);
}





	


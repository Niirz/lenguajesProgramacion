#include<stdio.h>
void main(){
	int precio;
	int desc;
printf("==============BIENVENIDO============== \n");
printf("Ingrese el precio del producto \n");

scanf("%d", &precio);
printf("Ingrese el porcentaje de descuento \n");
	scanf("%d", &desc);
	
 int resultado;
 	 resultado=(precio-(precio*desc/100));
 	 
 	 printf("El valor con el descuento aplicado es = [ %d ]",resultado);
}



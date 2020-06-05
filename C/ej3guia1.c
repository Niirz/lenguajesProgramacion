#include<stdio.h>
void main(){
float dolar;
float euro;
printf("==============BIENVENIDO============== \n");
printf("Ingrese la cantidad que desea convertir \n");

scanf("%f", &dolar);
euro=(0,92*dolar);	
printf("El valor en euro es = [ %f ]", euro);
}

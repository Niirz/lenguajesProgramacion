#include<stdio.h>
void main(){
	float radio, pi=3.1416;
	
printf("==============BIENVENIDO============== \n");
printf("Ingrese el radio \n");
scanf("%f", &radio);


float calculoPerimetro;
calculoPerimetro=(2*pi*radio);
float calculoArea;
calculoArea=(pi*radio*radio);
float calculoVolumen;
calculoVolumen=(4*pi*((radio*radio*radio)/3));

printf("El area es [ %f ] \n", calculoArea);
printf("El perimetro es [ %f ] \n", calculoPerimetro);

printf("El volumen es [ %f ] \n", calculoVolumen);
}

#include<stdio.h>
void main(){
	float res1;
	float res2;
printf("==============BIENVENIDO============== \n");
printf("Ingrese la resistencia 1 \n");
scanf("%f", &res1);
printf("Ingrese la resistencia 2 \n");
scanf("%f", &res2);

float calculoResistenciaE;
calculoResistenciaE=((res1*res2)/(res1+res2));

printf("El area es [ %f ] \n", calculoResistenciaE);
}

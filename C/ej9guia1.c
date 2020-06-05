#include<stdio.h>
void main(){
	int num1, num2, num3, num4;
	
printf("==============BIENVENIDO============== \n");
printf("Ingrese los 4 numeros \n");
scanf("%d", &num1);
scanf("%d", &num2);
scanf("%d", &num3);
scanf("%d", &num4);

int media;
media=((num1+num2+num3+num4)/4);

printf("La media es [ %d ] \n", media);
}

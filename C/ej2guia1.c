#include<stdio.h>
void main(){
	int ladoA;
	int ladoB;
printf("==============BIENVENIDO============== \n");
printf("Ingrese el lado A \n");
scanf("%d", &ladoA);
printf("Ingrese el lado B \n");
scanf("%d", &ladoB);

int calculoPerimetro;
calculoPerimetro=(ladoA*2)+(ladoB*2);
int calculoArea;
calculoArea=ladoA*ladoB;

printf("El area es [ %d ] \n", calculoArea);
printf("El perimetro es [ %d ] \n", calculoPerimetro);
}

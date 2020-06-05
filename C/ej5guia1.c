#include<stdio.h>
void main(){
int dia, hora, minuto;
printf("==============BIENVENIDO============== \n");
printf("Ingrese la cantidad de dias \n");
scanf("%d", &dia);
printf("Ingrese la cantidad de horas \n");
scanf("%d", &hora);
printf("Ingrese la cantidad de minutos \n");
scanf("%d", &minuto);

int segDia = (dia*86400);
int segHora=(hora*3600);
int segMin=(minuto*60);
int total=(segDia+segHora+segMin);

printf("Los segundos totales son = [ %d ]", total);


}

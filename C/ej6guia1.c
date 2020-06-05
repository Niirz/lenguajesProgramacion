#include<stdio.h>
void main(){
int segundos, dia, hora, minuto;
printf("==============BIENVENIDO============== \n");
printf("Ingrese la cantidad de segundos \n");
scanf("%d", &segundos);

if(segundos>=86400){
	dia=segundos/86400;
	segundos-=(dia*86400);
}else{
	dia=0;
}if(segundos>=3600){
	hora=segundos/3600;
	segundos-=(hora*3600);
}else{
	hora=0;
}
if(segundos>=60){
	minuto=segundos/60;
	segundos-=(minuto*60);
}else{
	minuto=0;
}


printf("Los dias totales son = [ %d ] \n", dia);
printf("Las horas totales son = [ %d ] \n", hora);
printf("Los minuto totales son = [ %d ] \n", minuto);
printf("Los segundos totales son = [ %d ] \n", segundos);


}

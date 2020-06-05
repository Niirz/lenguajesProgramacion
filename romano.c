#include<stdio.h>
//Mostrar numero ingresado en numero romano
void main(){
int num;
int cantM=0;
int cantX=0;
int cantC=0;
int cantI=0;
int cantV=0;
int cantL=0;

printf("Ingrese el numero a convertir \n");
	scanf("%d", &num);

if(num/1000>=1){
	cantM=(num/1000);
	num-=(cantM*1000);	
}if(num/100>=1){
	cantC=num/100;
	num-=(cantC*100);
}if(num/50>=1){
	cantL=num/50;
	num-=(cantL*50);
}
if(num/10>=1){
	cantX=num/10;
	num-=(cantX*10);	
}if(num/5>=1){
	cantV=num/5;
	num-=(cantV*5);
}
if(num/1>=1){
	cantI=num/1;
}

int i;
for (i=0;i<cantM;i+=1){
	printf("M");
}
for (i=0;i<cantC;i+=1){
	printf("C");
}
for (i=0;i<cantL;i+=1){
	printf("L");
}
for (i=0;i<cantX;i+=1){
	printf("X");
}
for (i=0;i<cantV;i+=1){
	printf("V");
}
for (i=0;i<cantI;i+=1){
	printf("I");
}
}












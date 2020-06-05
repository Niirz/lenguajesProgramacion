#include<stdio.h>
void main(){
int a;
int b;
int c;
float resultado1;
float resultado2;
printf("==============BIENVENIDO============== \n");
printf("Ingrese los 3 valores (a, b y c) \n");

scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

resultado1 = ((-b+sqrt(b*b-(4*a*c)))/(2*a));
resultado2=  ((-b-sqrt(b*b-(4*a*c)))/(2*a));
 
printf("el resultado de x1 = %f \n",resultado1);

printf("el resultado de x2 = %f \n",resultado2);


}

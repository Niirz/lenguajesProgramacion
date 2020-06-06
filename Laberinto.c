/*
Realizado por Nicolás Rivas y Alejandro Vera.
No se logro completamente lo que se deseaba ya que no entendimos la funcion gotoxy,
intentmos hacerlo de distintas maneras mas no se logró.
Agradeceriamos una explicacion en profundidad de la funcion gotoxy.
*/

#include<stdio.h>
#include<windows.h>
#include <conio.h>
	
void main(){
menu();
}
void gotoxy(int x,int y){
HANDLE hCon;
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
hCon=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hCon,dwPos);
}

//Llenamos la matriz con 1's y ceros
void llenarMatriz(int mat[4][4]){
    int i, j, random;
for (i=0;i<5;i++)
{
    for (j=0;j<5;j++)
    {
        random = rand() % (2); 
        mat[i][j]=random;

    }

}
    int premio = 3;
    mat[0][0]=premio;

}



//Mostramos la matriz
void mostrarMatriz(int mat[4][4]){
    int i, j;
    for (i=0;i<5;i++)
{
    for (j=0;j<5;j++)
    {
        printf("[ %d ] \t",mat[i][j]); 
    }
    printf("\n");
    }
}

//Funcion jugar, ahi con todo
void menu(){
printf("pulse una tecla \n");
    while(1==1){
        jugar();
    }

}

//
void jugar(){
    int vidas=3;
    int x=4;
    int y=4;
    int lab [x][y]; //Este es el laberinto
    gotoxy(x,y); printf("5");
    char tecla=getche();
    if(tecla==97){//izquierda A
        x--; 
    }else if(tecla==115){//abajo S
        y++;
    }else if(tecla==100){//derecha D
        x++;
    }else if(tecla==119){//arriba W
        y--;
    }


    printf("Vidas restantes = [ %d ]  \n",vidas);
    llenarMatriz(lab);
    mostrarMatriz(lab);

    gotoxy(4,4); 
    printf("7");
    int a= 5;
    a=getche();
printf("%d \n",a);
}

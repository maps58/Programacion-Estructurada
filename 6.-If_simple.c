/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/


#include <stdio.h>

short int A=0;
short int B=0;

int main(){
printf ("ingresar 2 numeros enteros separados por una coma\n:  ");
scanf ("%hd,%hd",&A,&B);

if (A!=B)
    printf("SON DIFERENTES");
    return 0;
}


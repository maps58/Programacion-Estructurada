/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
int main(){

float op1;
int op2;
char letra;
printf ( "Ingrese un numero real:\n");
scanf("%f",&op1);
printf ("Ingrese un numero entero:\n");
scanf("%d",&op2);
printf ( "Ingrese un caracter:\n");
//scanf("%c",&letra);
fflush(stdin);
letra = getch();
fflush(stdin);
system("pause");	
printf("\nLos datos que ingreso son: %f,  %d\n", op1,op2);
printf("\nel caracters que ingreso es: %c", letra);

return 0;
}


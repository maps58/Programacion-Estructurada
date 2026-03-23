/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/


#include <stdio.h>
int main(){

 int numero;
 printf ("codigo para determinar si el numero ingresado es positivo o negativo\n");
 printf ("Ingrese un numero entero diferente de cero\n >>" );
 scanf("%d", &numero);
 
 	if (numero>0 ) {

     printf("el numero es positivo");
 }
    else {
    printf ( "el numero es negativo");
	}
	return 0;}


//Funciones que no devuelven un valor entero

#include <stdio.h>
#include <stdlib.h>

void suma (int a, int b); /*declaración de la función suma*/
void mayor (int a, int b); /*declaración de la función mayor, menor o iguales*/

	int main() {    /*inicio del programa principal*/
		system("COLOR f1");
		
	int a, b;
		printf("Ingrese el valor de A y B separados por una coma:\n\n\t>");
		scanf("%d,%d", &a,&b);
	
			suma(a,b); /*llamando cada una de las funciones*/
			mayor(a,b); /*unicamente va el nombre de la funcion y de los parametros*/
    	return 0;	
		} /*fin del programa principal*/
		
	void suma(int a, int b) /*definición de la función suma*/
	{                                /*Abrimos llaves al inicio de la definición*/
			printf("\n\tLA SUMA DE %d + %d = %d:\n\n", a,b,a+b);
}                                                              /*Fin de la función suma*/

void mayor(int a, int b) { /*definición de la función mayor, menor o igual*/
	if(a==b)
		printf("AMBOS NUMEROS SON IGUALES\n\n");
	else
	{
		if(a>b)
		printf("\tA(%d) es mayor que B(%d))\n\n", a,b);
		else
		printf("\tB(%d) es mayor que A(%d)\n\n", b,a);
		}
		} //fin de la funcion mayor, menor o igual

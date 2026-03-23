/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
int main(void){
int opcion;

//Para almacenar la opción elegida
/*Declaración de variables:
area_triangulo=base*altura/2
area_trapecio=((base_mayor+base_menor)/2)*altura
area_rectangu=base*altura*/
float base, altura, base2;
float area;
printf("\n\t\t\t***********************CALCULO DE AREAS************************** \n\n\n");


printf("1 - Calcular el área de un triangulo \n");
printf("2 - Calcular el área de un trapecio \n");
printf("3 - Calcular el área de un rectangulo \n\n\n");
printf("\t\t\tNOTA: Los datos deben seR ingresados en metros\n");
printf("Opcion: ");
scanf("%d",&opcion);
switch(opcion){

case 1:
	printf("AREA DEL TRIANGULO \n");
	printf("Base: ");
	scanf("%f",&base);
	printf("Altura: ");
	scanf("%f",&altura);
	area=base*altura/2;
	printf("El area del triangulo es %4.2f Mts^2.\n",area);
	break;

case 2:
	printf("AREA DEL TRAPECIO \n");
	printf("Base mayor: ");
	scanf("%f",&base);
	printf("Base menor: ");
	scanf("%f",&base2);
	printf("Altura del trapecio: ");
	scanf("%f",&altura);
	area=((base+base2)/2.0)*altura;
	printf("El area del trapecio es %4.2f Mts^2\n",area);
	break;

case 3:
	
		printf("AREA DE UN RECTANGULO \n");
	printf("Base: ");
	scanf("%f",&base);
	printf("Altura: ");
	scanf("%f",&altura);
	area=base*altura;
	printf("El area del rectangulo es %4.0fcms.\n",area);
	break;
default:
	printf("Fin del programa.");
}
return 0;
}



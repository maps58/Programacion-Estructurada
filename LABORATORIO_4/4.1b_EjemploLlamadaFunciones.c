/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

//4.b: llamada de funcion; se envian argumentos pero no retorna valores

#include <stdio.h>

void suma (int x,int y){
printf("\nEl resultado de la suma de %d + %d =%d",x,y,x+y);
}

int main() {

int a,b;
	printf("Ingresar los 2 operandos separados por una coma\n");
	scanf ("%d,%d",&a,&b);		
  	suma(a,b);  
    return 0;
}




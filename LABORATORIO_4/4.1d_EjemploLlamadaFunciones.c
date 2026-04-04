/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

//4.1d: llamada de funcion, se envian argumentos, y retornan valores
#include <stdio.h>

int suma (int a, int b){	
    return (a + b);
}
    
int main() {

	int resultado;
	int a,b; 	
	
	printf("Ingresar los 2 operandos separados por una coma\n");
	scanf ("%d,%d",&a,&b);

	resultado=suma(a,b);    	
	printf ("El resultado de la suma es %d", resultado);    
    return 0;
}



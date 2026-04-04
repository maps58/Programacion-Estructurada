/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

//4.1c: llamada de funcion; no envia argumentos pero retorna valores
#include <stdio.h>

int suma (){	

    int a,b; 
	printf("Ingresar los 2 operandos separados por una coma\n");
	scanf ("%d,%d",&a,&b); 
    return (a + b);}
    
int main() {

	int resultado;

	resultado=suma();   	
	printf ("El resultado de la suma es %d", resultado);    
    return 0;
}







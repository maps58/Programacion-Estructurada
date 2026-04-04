/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

int restar(int x, int y); //prototipo de la funcion.

// 'x','y' son parámetros FORMALES
int restar(int x, int y) {
    return x - y;
}

int main() {    
	int a,b = 0;
	
	printf ("Ingresar los 2 operandos separados por una coma:\n ");
	scanf("%d,%d",&a,&b);
    int resultado;

    // 'a' y 'b' son argumentos REALES
    resultado = restar(a, b);     
    printf("Resultado: %d\n", resultado);
    return 0;
}




/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

int factorial(int n);   // prototipo de la funcion
int main() {
	
	int num;	
	printf ("Ingresar el numero para obtener su factorial\n:");
    scanf("%d",&num);
    int fact = factorial(num);
    printf("El factorial de %d es %d\n", num, fact);
    return 0;
}

// function factorial
int factorial(int n) {
   if (n == 0 || n == 1) {
      return 1;
   } else {
      return n * factorial(n - 1);
   }
}


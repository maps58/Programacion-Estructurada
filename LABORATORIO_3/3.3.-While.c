/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/
#include <stdio.h>

int main() {
	int n;
	int fact;
	printf("Introduzca el entero a factorizar:  ");
	scanf("%d",&n);
	printf("El factorial de %d es:  ", n);
	fact = 1;
	while(n != 0) {
		fact = fact * n;
	n--;    }
	printf("%d", fact);
return 0;
}


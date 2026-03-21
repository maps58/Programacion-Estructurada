/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/

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


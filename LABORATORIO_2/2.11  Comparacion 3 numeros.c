/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
int main() {
int A,B,C;
// Solicitar al usuario los tres números
printf("Ingresa tres numeros separados por una coma:\n");
scanf("%d,%d,%d", &A,&B,&C);
printf("Los numeros que ingresaste son:\n A = %d\n B = %d\n C = %d\n", A, B, C);

//sleep(5);  
// Determinar el mayor de los tres números
	if (A > B && A > C) {
		printf("\nEl mayor numero es A: %d\n", A);
	} 

	else if (B > A && B > C) {
		printf("\nEl mayor numero es B: %d\n", B);
	} 
	else {
		printf("\nEl mayor numero es C: %d\n", C);		
	}
	return 0;
}

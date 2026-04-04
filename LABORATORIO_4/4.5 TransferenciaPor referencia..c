/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

void incrementar(int *n) { // Recibe puntero
    (*n)++; // Modifica el valor en la dirección
}

int main() {
    int numero;;
    int j;
    printf("Ingresar el numero que quiera incrementar n veces: ");
	scanf("%d",&numero); 
	printf("\nCuantas veces quiere incrementar el numero: ");
	scanf("%d",&j);
	
    
    // Ciclo for para repetir la llamada a la función
    for (int i = 1; i <= j; i++) {
    	
        incrementar(&numero);
        printf("%d\n", numero); // Imprime 15 
    }

   

    return 0;
}

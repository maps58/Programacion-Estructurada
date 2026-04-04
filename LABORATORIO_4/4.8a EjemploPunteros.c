/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

int main() {
    int capacidad = 305;   // Variable normal
    int *ptr = &capacidad; // Puntero que guarda la dirección de myAge

    printf("Valor de la variable: %d\n", capacidad);
    printf("Dirección de la variable: %p\n", &capacidad);
    printf("Valor almacenado en el puntero (direccion): %p\n", ptr);
    printf("Valor apuntado por el puntero (desreferencia): %d\n", *ptr);

    return 0;
}






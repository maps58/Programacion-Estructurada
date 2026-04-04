/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <math.h>

//prototipos de las funciones
int esPrimo(int n);
int esImpar(int n); 

// Función para verificar si un número es primo
int esPrimo(int n) {
    if (n <= 1) {
        return 0; // No es primo
    }    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // No es primo
        } }
    return 1; // Es primo
}

// Función para verificar si es impar
int esImpar(int n) {
    return (n % 2 != 0);
}

int main() {
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    // Evaluación de impar
    if (esImpar(num)) {
        printf("El numero es IMPAR\n");
    } else {
        printf("El numero es PAR\n");
    }
    // Evaluación de primo
    if (esPrimo(num)) {
        printf("El numero es PRIMO\n");
    } else {
        printf("El numero NO es PRIMO\n");
    }
    return 0;
}



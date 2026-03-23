/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Función para obtener el valor numérico de cada color
int obtenerValor(char color[]) {
	  
	  system ("color F1");
    if (strcasecmp(color, "negro") == 0) return 0;
    else if (strcasecmp(color, "marrón") == 0 || strcasecmp(color, "cafe") == 0) return 1;
    else if (strcasecmp(color, "rojo") == 0) return 2;
    else if (strcasecmp(color, "naranja") == 0) return 3;
    else if (strcasecmp(color, "amarillo") == 0) return 4;
    else if (strcasecmp(color, "verde") == 0) return 5;
    else if (strcasecmp(color, "azul") == 0) return 6;
    else if (strcasecmp(color, "violeta") == 0) return 7;
    else if (strcasecmp(color, "gris") == 0) return 8;
    else if (strcasecmp(color, "blanco") == 0) return 9;
    else
	return -1; // Color no reconocido
}

int main() {
    char b1[10], b2[10], b3[10];
    int v1, v2, mult;
    double resistencia;

    printf("--- Calculadora de Resistencia (3 bandas) ---\n");

    printf("Ingrese color banda 1 (MAYUSCULAS o minusculas): ");
    scanf("%s", b1);
    printf("Ingrese color banda 2 (MAYUSCULAS o minusculas): ");
    scanf("%s", b2);
    printf("Ingrese color multiplicador (banda 3) (MAYUSCULAS o minusculas): ");
    scanf("%s", b3);

    v1 = obtenerValor(b1);
    v2 = obtenerValor(b2);
    mult = obtenerValor(b3);

    if (v1 == -1 || v2 == -1 || mult == -1) {
        printf("Error: Color no reconocido.\n");
    } else {
        // Fórmula: (10*v1 + v2) * 10^mult
        resistencia = (v1 * 10 + v2) * pow(10, mult);
        
    	if (resistencia <1000)
        	printf("\nValor de la resistencia: %.2f Ohms\n", resistencia);
        if (resistencia >= 1000 && resistencia <1000000)
            printf("Equivalente: %.2f k\xEA\n", resistencia / 1000);
        if (resistencia >= 1000000)
            printf("Equivalente: %.2f M\EA\n", resistencia / 1000000);
    }
    return 0;
}


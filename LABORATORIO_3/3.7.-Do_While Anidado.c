/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

int main() {

    // declarando las variables
    int i = 0, j=0;  //filas,columnas
    int c = 0;
    // Outer loop starts
    do {	
        j = 0;
        // inner loop starts
        do {
	            printf("%d  ", c++);
            j++;
        } while (j < 3);
        printf("\n");
        i++;
    } while (i < 3);
    return 0;
   }
   
   
   
   






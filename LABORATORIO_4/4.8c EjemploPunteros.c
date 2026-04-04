/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

int main(){
    int numeros[8] = {20, 21, 22, 24, 30, 31, 32, 34};
    int *ptr = numeros;

    for (int i = 0; i<8; i++){
    	printf ("La direccion del puntero es[%d]",ptr); 
        printf("  y su contenido es [%d]\n", *ptr);
        ptr++;  // Avanza al siguiente elemento        
    }
    return 0;
}

/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

/* Las computadoras trae banderas (flags) se activan con (1) indicando si el
resultado de la ultima operacion en la ALU es; CERO, POSITIVO o NEGATIVO*/

#include "stdio.h"

int main(){	
	
   int resultado;
   int Z=0; // Bandera de CERO
   int N=0; // Bandera de POSITIVO
   int P=0; // Bandera de POSITIVO

	while(1){   
   		printf("\n Ingresar el resultado de la ultima operacion de la ALU:\n");
  		scanf("%d", &resultado);
   	if (resultado==0)
	    printf("**** Flag Z = 1; N = 0; P = 0***\n");  
    else if (resultado>0)
        printf("Flags Z = 0; N = 0; P=1; \n");
   else
        printf("Flag Z = 0; N = 1; P = 0;\n");    
}
    return 0;
}


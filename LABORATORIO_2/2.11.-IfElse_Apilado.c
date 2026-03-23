/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

int main() {
    int OP_A, OP_B;
    printf("Ingrese operandos A y B separados por una coma: ");
    scanf("%d, %d", &OP_A, &OP_B);

    //Checar si los 2 enteros son iguales.
    if(OP_A == OP_B) {
        printf("A es igual a B: %d = %d",OP_A,OP_B);
    }
    //checar si operando_A es mayor que operando_B
    else if (OP_A > OP_B) {
        printf("A es mayor que B: %d > %d", OP_A, OP_B);
    }
    //checar si operando_A es menor que operando_B
    else {
        printf("A es menor que B: %d < %d",OP_A, OP_B);
    }
    return 0;
	  }
	  
	  



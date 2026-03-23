/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

/*A continuación se presenta la implementación formal en lenguaje C 
para determinar si un número entero es primo o no primo, 
utilizando una estrategia optimizada con complejidad */

#include <stdio.h>
#include <math.h>

int main() {

    int Num;
    int i;
    int primo = 1;   // 1 = Verdadero, 0 = Falso

    printf("Ingresar un numero entero:\n");
    scanf("%d", &Num);

    if (Num <= 1) {
        primo = 0;
    } 
    else if (Num == 2) {
        primo = 1;
    } 
    else if (Num % 2 == 0) {
        primo = 0;
    } 
    else {
        for (i = 3; i <= sqrt(Num); i += 2) {
            if (Num % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("*******El numero ES PRIMO*********\n");
    else
        printf("*******El numero NO ES PRIMO**********\n");

    return 0;
}

/*Miguel Angel Pérez Solano
Instituto Tecnologico de Oaxaca
DEpartamento de Ingeniería Electrica y electronica
Materia: Programacion estructurada*/

/* Este programa calcula la potencia desarrollada por 
un circuito en funcion del voltaje y la resistencia*/

#include <stdio.h>
#include <math.h>
int main(){

float V,R,P;

printf("\tCalculadora de la Potencia de un circuito\n\n");
printf("Ingresar Voltaje (Volts) y Resistencia (Ohms) separados por una coma:   ");
scanf("%f,%f", &V,&R);

P = pow(V,2)/R;

printf ("La Potencia del circuito es de %.3f Watts",P);

return 0;
}

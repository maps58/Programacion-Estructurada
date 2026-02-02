/*Miguel Angel Pérez Solano
Instituto Tecnologico de Oaxaca
DEpartamento de Ingeniería Electrica y electronica
Materia: Programacion estructurada*/

// Este programa calcula voltaje respecto a la corriente y resistencia de un circuito (LEY DE OHM);

#include <stdio.h>
int main(){

float I,V,R;

printf("\tCalculadora de voltaje segun la LEY DE OHM\n\n");
printf("ingresar Corriente (Amperes) y Resistencia (Ohms) separados por una coma:   ");
scanf("%f,%f", &I,&R);

V = I * R;

printf ("El voltaje del circuito es %f Volts",V);

return 0;
}



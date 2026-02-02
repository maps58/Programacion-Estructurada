/*Miguel Angel Pérez Solano
Instituto Tecnologico de Oaxaca
DEpartamento de Ingeniería Electrica y electronica
Materia: Programacion estructurada*/

// Este programa calcula resistencia respecto a la corriente y voltaje de un circuito (LEY DE OHM);

#include <stdio.h>
int main(){

float I,V,R;

printf("\tCalculadora de Resistencia segun la LEY DE OHM\n\n");
printf("Ingresar Voltaje (Volts) y Corriente (Resistencia) separados por una coma:   ");
scanf("%f,%f", &V,&I);

R = V/I;

printf ("La resistencia tiene un valor de %.1f Ohms",R);

return 0;
}

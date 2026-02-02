/*Miguel Angel Pérez Solano
Instituto Tecnologico de Oaxaca
DEpartamento de Ingeniería Electrica y electronica
Materia: Programacion estructurada*/

// Este programa calcula corriente respecto al voltaje y resistencia de un circuito (LEY DE OHM);

#include <stdio.h>
int main(){

float I,V,R;

printf("\tCalculadora de corriente segun la LEY DE OHM\n\n");
printf("ingresar Voltaje (volts) y Resistencia (Ohms) separados por una coma: ");
scanf("%f,%f", &V,&R);

I = V/R;

printf ("La corriente que fluye por el circuito es %f Amperes",I);

return 0;
}



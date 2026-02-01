/*Miguel Angel Pérez Solano
Instituto Tecnológico de Oaxaca
Departamento de Ingeniería Eléctrica y Electrónica*/

//Programa que ejecuta las 5 operaciones aritmeticas: Suma, Resta, 
//Multiplicacion y División con 2 de tipo punto flotante.
#include <stdio.h>

int main(){

float op1, op2, suma, resta, mult, div;

printf("\tprograma que ejecutara las 4 operaciones aritmeticas con numeros fraccionarios\n");
printf("ingresar el primer operando:   ");
scanf("%f", &op1);
printf("ingresar el segundo operando:   ");
scanf("%f", &op2);

suma = op1+op2;
resta = op1-op2;
mult = op1*op2;
div = op1/op2;

printf ("Los resultados son los siguientes:\n\n");
printf (" >Suma = %f\n >resta = %f\n >multiplicacion = %f\n >division = %f\n",suma, resta, mult, div);

return 0;
}



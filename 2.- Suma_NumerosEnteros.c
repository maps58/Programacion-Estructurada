/*Miguel Angel Pérez Solano
Instituto Tecnológico de Oaxaca
Departamento de Ingeniería Eléctrica y Electrónica*/

//Programa que ejecuta las 5 operaciones aritmeticas: Suma, Resta, 
//Multiplicacion, División y Módulo con 2 operandos enteros.
#include <stdio.h>

int main(){

int op1, op2, suma, resta, mult, div, mod;

printf("\tprograma que ejecutara las 5 operaciones aritmeticas con numeros enteros\n");
printf("ingresar el primer operando:   ");
scanf("%d", &op1);
printf("ingresar el segundo operando:   ");
scanf("%d", &op2);

suma = op1+op2;
resta = op1-op2;
mult = op1*op2;
div = op1/op2;
mod = op1%op2;

printf ("Los resultados son los siguientes:\n\n");
printf (" >Suma = %d\n >resta = %d\n >multiplicacion = %d\n >division = %d\n >modulo %d\n",suma, resta, mult, div, mod);

return 0;
}



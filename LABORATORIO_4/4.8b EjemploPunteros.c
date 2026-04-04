/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
void intercambio(int *a, int *b, int *c, int *d);
int main(){
int n1 = 20;
int n2 = 21;
int n3 = 22;
int n4 = 24;

printf("Impresion antes de los swaps\n");
printf(" numero1 = address %d contiene [%d]\n",&n1, n1);
printf(" numero2 = address %d contiene [%d]\n",&n2, n2);
printf(" numero3 = address %d contiene [%d]\n",&n3, n3);
printf(" numero4 = address %d contiene [%d]\n",&n4, n4);

intercambio(&n1, &n2, &n3, &n4);

printf("\nImpresion despues de los swaps\n");

printf(" numero1 = address %d contiene [%d]\n",&n1, n1);
printf(" numero2 = address %d contiene [%d]\n",&n2, n2);
printf(" numero3 = address %d contiene [%d]\n",&n3, n3);
printf(" numero4 = address %d contiene [%d]\n",&n4, n4);

return 0;
}
//se abre una subfuncion:

void intercambio(int *a, int *b, int *c, int *d){

int temporal1 = *a;
int temporal2 = *c;


*a = *b;
*b = temporal1;
 
 *c = *d;
 *d = temporal2;
}


